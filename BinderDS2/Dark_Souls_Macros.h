#pragma once
#include "Macro.h"

class Dark_Souls_Macros : protected Macro
{

private:
	void quickAttacks(CHAR attackKey);
	void stanceSwaps2h(CHAR attackKey);
	void stanceSwaps1h(CHAR attackKey);

public:
	Dark_Souls_Macros(gameInputs gInputs, gameBinds keyBinds);
	void run(bool* runing);
};



