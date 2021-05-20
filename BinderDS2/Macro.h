#pragma once
#include "Dark_Souls_Inputs.h"

class Macro
{
    private:
        void keyAction(CHAR keykeyParam, DWORD flags);

protected:
    gameInputs gInputs;
    gameBinds keyBinds;
    INPUT input;

    void pressKey(CHAR key);
    void releaseKey(CHAR key);
};

