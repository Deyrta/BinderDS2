#pragma once
#include "Macro.h"

class Dark_Souls_Macros : protected Macro
{

private:
	void quickAttacks(UINT attackKey);
	void stanceSwaps2h(UINT attackKey);
	void stanceSwaps1h(UINT attackKey);

public:
	Dark_Souls_Macros(gameInputs gInputs, gameBinds keyBinds);
	void run(bool* runing);
};



