#ifndef STATE_MANAGER
#define STATE_MANAGER

#include <gsKit.h>
#include <dmaKit.h>
#include <gsToolkit.h>

typedef void _voidCallBack();

typedef struct
{
    _voidCallBack *Start;

    _voidCallBack *Update;

    _voidCallBack *End;

    int TransisionIn;

    int TransisionOut;
}StateManager;

typedef struct
{
    int TransisionOutFrames;
    int TransisionInFrames;

    StateManager* CurrentState;
    StateManager* ChangeTo;

}StateMachine;

void StateMachineStart(StateMachine* machine, StateManager* state, GSGLOBAL* gsGlobal);
void StateMachineChange(StateMachine* machine, StateManager* state, GSGLOBAL* gsGlobal);
void StateMachineUpdate(StateMachine* machine, GSGLOBAL* gsGlobal);

#endif
