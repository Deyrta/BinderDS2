#include "Macro.h"

void Macro::keyAction(UINT key, DWORD flags = KEYEVENTF_SCANCODE) {
    input.type = INPUT_KEYBOARD;
    input.ki.dwFlags = flags;
    input.ki.wScan = MapVirtualKey(LOBYTE(key),0);
    SendInput(1, &input, sizeof(input));
}

void Macro::pressKey(UINT key) {
    keyAction(key);
}

void Macro::releaseKey(UINT key)
{
    keyAction(key, KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP);
}