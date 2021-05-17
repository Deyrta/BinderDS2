#pragma once
#include "Dark_Souls_Inputs.h"

class Macro
{
    private:
        void keyAction(UINT key, DWORD flags);

protected:
    gameInputs gInputs;
    gameBinds keyBinds;
    INPUT input;

    void pressKey(UINT key);
    void releaseKey(UINT key);
};

