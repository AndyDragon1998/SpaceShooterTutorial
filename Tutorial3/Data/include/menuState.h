#ifndef MENU_STATE
#define MENU_STATE

#include "stateManager.h"

void MenuStart(GSGLOBAL* gsGlobal);
void MenuUpdate(GSGLOBAL* gsGlobal);
void MenuEnd(GSGLOBAL* gsGlobal);

extern StateManager MenuState;

#endif
