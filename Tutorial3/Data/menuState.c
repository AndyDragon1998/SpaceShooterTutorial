#include "include/gameState.h"
#include "include/menuState.h"
#include "include/overState.h"

extern StateMachine GameMachineState;

GSTEXTURE TitleImage, SmileImage;

u64 colour = GS_SETREG_RGBAQ(0x80,0x80,0x80,0x80,0x00);

float posX, posY, movement;

void MenuStart(GSGLOBAL* gsGlobal)
{
	gsKit_texture_bmp(gsGlobal, &TitleImage, "host:Graphics/Title.bmp");
	gsKit_texture_bmp(gsGlobal, &SmileImage, "host:Graphics/Texty.bmp");
	colour = GS_SETREG_RGBAQ(0x80,0x80,0x80,0x80,0x00);
	posX = 50.0f;
	posY = 50.0f;
	movement = 2.0f;
}

void MenuUpdate(GSGLOBAL* gsGlobal)
{

	gsKit_prim_sprite_texture(gsGlobal, &TitleImage,0,  // X1
						0,  // Y2
						0.0f,  // U1
						0.0f,  // V1
						TitleImage.Width+ 0.0f, // X2
						TitleImage.Height+ 0.0f, // Y2
						TitleImage.Width + 0.0f, // U2
						TitleImage.Height+ 0.0f, // V2
						2,
						colour);
						
	if(posX > 250.0f)
	{
		movement = movement * -1;
	}
	
	if(posX < 50.0f)
	{	
		movement = movement * -1;
	}
	
	posX += movement;

						
	gsKit_prim_sprite_texture(gsGlobal, &SmileImage,	posX,  // X1
						posY,  // Y2
						0.0f,  // U1
						0.0f,  // V1
						SmileImage.Width + posX, // X2
						SmileImage.Height + posY, // Y2
						SmileImage.Width, // U2
						SmileImage.Height, // V2
						2,
						colour);

}

void MenuEnd(GSGLOBAL* gsGlobal)
{

}

StateManager MenuState =
{
	MenuStart,
	MenuUpdate,
	MenuEnd
};
