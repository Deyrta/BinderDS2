#include "Macro.h"

void Macro::keyAction(CHAR keyParam, DWORD flags = KEYEVENTF_SCANCODE) {
    SHORT key;
    UINT mappedkey;
    key = VkKeyScan(keyParam);
    mappedkey = MapVirtualKey(LOBYTE(key), 0);
    input.type = INPUT_KEYBOARD;
    input.ki.dwFlags = flags;
    input.ki.wScan = mappedkey;
    SendInput(1, &input, sizeof(input));
}

void Macro::pressKey(CHAR key) {
    keyAction(key);
}

void Macro::releaseKey(CHAR key)
{
    keyAction(key, KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP);
}