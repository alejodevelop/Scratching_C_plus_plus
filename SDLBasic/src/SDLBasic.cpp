//============================================================================
// Name        : SDLBasic.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL.h>
#include <string.h>
#include "Screen.h"

/*
 * STEPS TO IMPORT SDL library
 * 1. open properties of the project, right click on project folder, select properties
 * 2. open in this order:
 *
 * c/c++ build
 * 		settings
 *
 * 		gcc c++ compiler
 * 			includes
 * 				include paths (set the path to the includes\sdl2 folder of SDL library, previously download)
 *
 * 		mingw c++ linker
 * 			libraries
 * 				library (set the name of the .a file inside lib folder, in this case is SDL2)
 * 				library search path (set the path to the lib folder of SDL library )
 *
 *
 *
 * 3. as final step we have to make sure that the file sdl2.dll inside bin folder,
 * has to be in the same folder where eclipse execute (every time we compile & run ) .exe file inside our project root.
 * .
 *
 * NOTE: we can put this dll file in our system dlls to install globally too and not in the source folder project
 *
 * */

using namespace std;
using namespace caveofprograming;

int main() {

	Screen screen;

	if (screen.init() == false) {
		cout << "Error initializing SDL" << endl;
	}

	cout << "reach just before setPixel method " << endl;
	screen.setPixel(400, 300, 255, 255, 255);
	// this is the game loop
	while (true) {
		// functions of the game loop
		// Update particles
		// Draw particles
		// Check for messages/events

//		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
//			for (int x = 0; x < Screen::SCREEN_WIDTH; x++) {
//				screen.setPixel(x, y, 128, 0, 255);
//			}
//		}

//		screen.update();

		if (screen.processEvents() == false) {
			break;
		}
		// if occurs any event while executing, would be process inside this loop until
		// is resolve to continue with the game loop

	}

	screen.close();

	return 0;
}

//int main() {
//
//	const int SCREEN_WIDTH = 800;
//	const int SCREEN_HEIGHT = 600;
//
//	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
//		cout << "SDL init failed" << endl;
//		return 1;
//	}
//
//	cout << "SDL Init succeded" << endl;
//
//	SDL_Window *window = SDL_CreateWindow("Particle fire explosion",
//	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
//			SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
//
//	if (window == NULL) {
//		SDL_GetError();
//		SDL_Quit();
//		return 2;
//	}
//
//	// we create the renderer
//	/*
//	 * In computer graphics (which includes less elaborate graphics like a simple
//	 * form in a window), rendering refers to the act of drawing the modeled
//	 * objects on screen.
//	 * */
//
//	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,
//			SDL_RENDERER_PRESENTVSYNC);
//	// this is the texture that the renderer is going to render
//	// for each pixel we get 4 values, red, blue, green and alpha in this pixel format
//	SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,
//			SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);
//
//	if (renderer == NULL) {
//		cout << "Could not create renderer" << endl;
//		SDL_DestroyWindow(window);
//		return 3;
//	}
//
//	if (texture == NULL) {
//		cout << "Could not create texture" << endl;
//		SDL_DestroyRenderer(renderer);
//		SDL_DestroyWindow(window);
//		SDL_Quit();
//		return 4;
//	}
//
//	try {
//
//		// we're going to store all pixel on screen uint32 its a type defined by sdl
//		// that has 32 bits (4 bytes) it's representation is similar to int type
//		// we allocate enough of this for every pixel on the screen
//		// RGBA (every value red, green, blue and alpha has 8 bits, 1 byte)
//		// SCREEN_WIDTH * SCREEN_HEIGHT give us the area (how many) of pixels on screen
//		/*
//		 * buffer means:
//		 * a temporary memory area in which data is stored while it is being processed
//		 * or transferred, especially one used while streaming video or downloading audio.
//		 * */
//		Uint32 *buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
//
//		// SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32) this give us all bytes on the screen
//		// the adventage of using hexadecimal it's that we can represent with just two
//		// bytes all colors, for example, decimal way - 255 (white) hexadecimal FF (white)
//		memset(buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
//
//		// with Uint32 we pack all 4 values RGBA in one position of the array
//		// we can refer to the position later, and set a value for every one
//		// ff - ff - ff - ff
//		// NOTE: values are not organized standard RED, GREEN, BLUE AND ALPHA, you have to
//		// figure out what is the order in your system
//		buffer[3000] = 0xFFFFFFFF;
//
//		// this do the same thing that memset function above does
//		// but it is more slowly, but we have more control, with memset we just
//		// can set all bytes with the same value, but with a for we can set individual
//		// bytes
//		for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
//			buffer[i] = 0xFFFFFFFF;
//		}
//
//		/*
//		 * SCREEN_WIDTH * sizeof(Uint32), this is known as the pitch
//		 * the pitch is the number of memory allocated to one row of pixels
//		 * so we take the width (number of pixels in the row) and multiply it
//		 * for the size of one pixel, to get the size of all pixels in the row
//		 * */
//		SDL_UpdateTexture(texture, NULL, buffer,
//				SCREEN_WIDTH
//						* sizeof(Uint32)/*Uint32 size = 4 bytes- 32 bits*/);
//		SDL_RenderClear(renderer);
//		SDL_RenderCopy(renderer, texture, NULL, NULL);
//		SDL_RenderPresent(renderer);
//
//		delete[] buffer;
//
//	} catch (int ex) {
//		cout << "Memory couldn't be allocated!";
//	}
//
//	bool quit = false;
//	// this is a struct - structure
//	SDL_Event event;
//
//	// this is the game loop
//	while (!quit) {
//		// functions of the game loop
//		// Update particles
//		// Draw particles
//		// Check for messages/events
//
//		// if occurs any event while executing, would be process inside this loop until
//		// is resolve to continue with the game loop
//		while (SDL_PollEvent(&event)) {
//			// if we click the X for exit in the window, this event is emitted
//			if (event.type == SDL_QUIT) {
//				quit = true;
//			}
//		}
//
//	}
//
//	SDL_DestroyRenderer(renderer);
//	SDL_DestroyTexture(texture);
//	SDL_DestroyWindow(window);
//	SDL_Quit();
//
//	return 0;
//}
