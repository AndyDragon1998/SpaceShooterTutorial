#include "include/gameState.h"
#include "include/menuState.h"
#include "include/overState.h"

extern StateMachine GameMachineState;

void OverStart(GSGLOBAL* gsGlobal)
{

}

void OverUpdate(GSGLOBAL* gsGlobal)
{

}

void OverEnd(GSGLOBAL* gsGlobal)
{

}

StateManager OverState =
{
	OverStart,
	OverUpdate,
	OverEnd
};
