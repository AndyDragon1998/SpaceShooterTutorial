#ifndef GAME_STATE
#define GAME_STATE

#include "stateManager.h"

void GameStart(GSGLOBAL* gsGlobal);
void GameUpdate(GSGLOBAL* gsGlobal);
void GameEnd(GSGLOBAL* gsGlobal);

extern StateManager MenuState;

#endif
