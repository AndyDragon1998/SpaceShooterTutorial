#include "include/gameState.h"
#include "include/menuState.h"
#include "include/overState.h"

extern StateMachine GameMachineState;

void GameStart(GSGLOBAL* gsGlobal)
{

}

void GameUpdate(GSGLOBAL* gsGlobal)
{

}

void GameEnd(GSGLOBAL* gsGlobal)
{

}

StateManager GameState =
{
	GameStart,
	GameUpdate,
	GameEnd
};
