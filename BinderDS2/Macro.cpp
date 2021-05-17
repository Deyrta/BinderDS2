#include "Macro.h"

void Macro::keyAction(UINT key, DWORD flags = 0) {
    input.ki.dwFlags = flags;
    input.ki.wScan = key;
    SendInput(1, &input, sizeof(input));
}

void Macro::pressKey(UINT key) {
    keyAction(key);
}

void Macro::releaseKey(UINT key)
{
    keyAction(key, KEYEVENTF_KEYUP);
}