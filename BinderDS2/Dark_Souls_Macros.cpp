#include "Dark_Souls_Macros.h"

Dark_Souls_Macros::Dark_Souls_Macros(gameInputs gInputs, gameBinds keyBinds)
{
    this->keyBinds = keyBinds;
    this->gInputs = gInputs;
}

void Dark_Souls_Macros::quickAttacks(CHAR attackKey)
{
    pressKey(attackKey);
    Sleep(4);
    pressKey(gInputs.Stance);
    Sleep(20);
    releaseKey(gInputs.Stance);
    Sleep(20);
    releaseKey(attackKey);
    Sleep(20);
    pressKey(gInputs.Stance);
    Sleep(400);
    releaseKey(gInputs.Stance);
}

void Dark_Souls_Macros::stanceSwaps2h(CHAR attackKey)
{
    pressKey(gInputs.Stance);
    Sleep(63);
    releaseKey(gInputs.Stance);
    Sleep(38);
    pressKey(attackKey);
    Sleep(43);
    pressKey(gInputs.Stance);
    Sleep(30);
    releaseKey(attackKey);
    Sleep(36);
    releaseKey(gInputs.Stance);
}
// ss1h need some corection in timings
void Dark_Souls_Macros::stanceSwaps1h(CHAR attackKey)
{
    pressKey(gInputs.Stance);
    Sleep(49);
    releaseKey(gInputs.Stance);
    Sleep(164);
    pressKey(gInputs.Stance);
    Sleep(6);
    pressKey(attackKey);
    Sleep(9);
    releaseKey(gInputs.Stance);
    Sleep(12);
    releaseKey(attackKey);
}

void Dark_Souls_Macros::run(bool* runing) {

    while (*runing)
    {
        if (GetAsyncKeyState(keyBinds.qaR1)) quickAttacks(gInputs.R1);
        else if (GetAsyncKeyState(keyBinds.qaR2)) quickAttacks(gInputs.R2);
        else if (GetAsyncKeyState(keyBinds.qaL1)) quickAttacks(gInputs.L1);
        else if (GetAsyncKeyState(keyBinds.qaL2)) quickAttacks(gInputs.L2);
        else if (GetAsyncKeyState(keyBinds.ss2hR1)) stanceSwaps2h(gInputs.R1);
        else if (GetAsyncKeyState(keyBinds.ss2hR2)) stanceSwaps2h(gInputs.R2);
        else if (GetAsyncKeyState(keyBinds.ss2hL1)) stanceSwaps2h(gInputs.L1);
        else if (GetAsyncKeyState(keyBinds.ss2hL2)) stanceSwaps2h(gInputs.L2);
        else if (GetAsyncKeyState(keyBinds.ss1hR1)) stanceSwaps1h(gInputs.R1);
        else if (GetAsyncKeyState(keyBinds.ss1hR2)) stanceSwaps1h(gInputs.R2);
        else if (GetAsyncKeyState(keyBinds.ss1hL1)) stanceSwaps1h(gInputs.L1);
        else if (GetAsyncKeyState(keyBinds.ss1hL2)) stanceSwaps1h(gInputs.L2);
        Sleep(15);
    }
}