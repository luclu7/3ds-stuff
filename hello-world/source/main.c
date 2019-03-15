/*
	Hello World example made by Aurelio Mannara for ctrulib
	This code was modified for the last time on: 12/12/2014 21:00 UTC+1
*/

#include <3ds.h>
#include <stdio.h>
#include <3ds/services/hid.h>
#include <sys/unistd.h>

int main(int argc, char **argv)
{
	gfxInitDefault();

	//Initialize console on top screen. Using NULL as the second argument tells the console library to use the internal console structure as current one
	consoleInit(GFX_TOP, NULL);

	//Move the cursor to row 15 and column 19 and then prints "Hello World!"
	//To move the cursor you have to print "\x1b[r;cH", where r and c are respectively
	//the row and column where you want your cursor to move
	//The top screen has 30 rows and 50 columns
	//The bottom screen has 30 rows and 40 columns
	/*  /printf("\x1b[16;20HHello World!");
	printf("\x1b[20;25HHey");
	printf("\x1b[29;16HPress Start to exit."); */

	// Main loop
	while (aptMainLoop())
	{
	printf("\x1b[12;20HInput tester");
	printf("\x1b[28;10HPress SELECT to clear top text.");
	printf("\x1b[29;15HPress START to exit.");


		//Scan all the inputs. This should be done once for each frame
		hidScanInput();


		//hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
		u32 keyDown = hidKeysDown();
		
		// ah mais en fait essayer de printf un truc qui n'existe possiblement pas bah ça marche pas
		// printf(keyDown);

		if (keyDown & KEY_DUP) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HD-up pressed");
		} else
		if (keyDown & KEY_DDOWN) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HD-down pressed");
		} else
		if (keyDown & KEY_DRIGHT) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HD-right pressed");
		} else
		if (keyDown & KEY_DLEFT) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HD-left pressed");
		} else
		if (keyDown &KEY_CSTICK_UP) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HC stick up pressed");
		} else
		if (keyDown & KEY_CSTICK_DOWN) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HC stick down pressed");
		} else
		if (keyDown & KEY_CSTICK_RIGHT) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HC stick right pressed");
		} else
		if (keyDown & KEY_CSTICK_LEFT) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HC stick left pressed");
		} else
		if (keyDown &KEY_CPAD_UP) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HCirle pad up pressed");
		} else
		if (keyDown & KEY_CPAD_DOWN) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HCirle pad down pressed");
		} else
		if (keyDown & KEY_CPAD_RIGHT) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HCirle pad right pressed");
		} else
		if (keyDown & KEY_CPAD_LEFT) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HCirle pad left pressed");
		} else
		if (keyDown & KEY_R) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HR shoulder button pressed");
		} else
		if (keyDown & KEY_L) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HL shoulder button pressed");
		} else
		if (keyDown & KEY_ZL) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HZL shoulder button pressed");
		} else
		if (keyDown & KEY_ZR) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HZR shoulder button pressed");
		} else
		if (keyDown & KEY_Y) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HY button pressed");
		} else
		if (keyDown & KEY_X) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HX button pressed");
		} else
		if (keyDown & KEY_A) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HA button pressed");
		} else
		if (keyDown & KEY_B) {
			printf("\e[1;1H\e[2J");
			printf("\x1b[1;1HB button pressed");
		} else












		// if (kDown & KEY_START) break; // break in order to return to hbmenu
		if (keyDown & KEY_START) {
			break;
		}
		if (keyDown & KEY_SELECT) {
			printf("\e[1;1H\e[2J");
		} else

		// Flush and swap framebuffers
		gfxFlushBuffers();
		gfxSwapBuffers();

		//Wait for VBlank
		gspWaitForVBlank();
	}

	gfxExit();
	return 0;
}
