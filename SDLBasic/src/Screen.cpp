/*
 * Screen.cpp
 *
 *  Created on: Aug 17, 2022
 *      Author: alejo
 */

#include "Screen.h"

namespace caveofprograming {

Screen::Screen() :
		m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer(NULL) {
	cout << "Constructor initialized" << endl;
}

bool Screen::init() {

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL init failed" << endl;
		return false;
	}

	cout << "SDL Init succeded" << endl;

	m_window = SDL_CreateWindow("Particle fire explosion",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
			SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	cout << "Window created" << endl;

	if (m_window == NULL) {
		SDL_GetError();
		SDL_Quit();
		return false;
	}

	cout << "Window not null" << endl;

	// we create the renderer
	/*
	 * In computer graphics (which includes less elaborate graphics like a simple
	 * form in a window), rendering refers to the act of drawing the modeled
	 * objects on screen.
	 * */

	m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);
	cout << "Renderer created" << endl;
	// this is the texture that the renderer is going to render
	// for each pixel we get 4 values, red, blue, green and alpha in this pixel format
	m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888,
			SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);
	cout << "texture created" << endl;

	if (m_renderer == NULL) {
		cout << "Could not create renderer" << endl;
		SDL_DestroyWindow(m_window);
		return false;
	}

	if (m_texture == NULL) {
		cout << "Could not create texture" << endl;
		SDL_DestroyRenderer(m_renderer);
		SDL_DestroyWindow(m_window);
		SDL_Quit();
		return false;
	}

	cout << "texture and render not null" << endl;

	try {

		// we're going to store all pixel on screen uint32 its a type defined by sdl
		// that has 32 bits (4 bytes) it's representation is similar to int type
		// we allocate enough of this for every pixel on the screen
		// RGBA (every value red, green, blue and alpha has 8 bits, 1 byte)
		// SCREEN_WIDTH * SCREEN_HEIGHT give us the area (how many) of pixels on screen
		/*
		 * buffer means:
		 * a temporary memory area in which data is stored while it is being processed
		 * or transferred, especially one used while streaming video or downloading audio.
		 * */
		Uint32 *m_buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

		// SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32) this give us all bytes on the screen
		// the adventage of using hexadecimal it's that we can represent with just two
		// bytes all colors, for example, decimal way - 255 (white) hexadecimal FF (white)
		memset(m_buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

		// with Uint32 we pack all 4 values RGBA in one position of the array
		// we can refer to the position later, and set a value for every one
		// ff - ff - ff - ff
		// NOTE: values are not organized standard RED, GREEN, BLUE AND ALPHA, you have to
		// figure out what is the order in your system
		//m_buffer[3000] = 0xFFFFFFFF;

		// this do the same thing that memset function above does
		// but it is more slowly, but we have more control, with memset we just
		// can set all bytes with the same value, but with a for we can set individual
		// bytes
//		for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
//			m_buffer[i] = 0xFFFFFFFF;
//		}

		/*
		 * SCREEN_WIDTH * sizeof(Uint32), this is known as the pitch
		 * the pitch is the number of memory allocated to one row of pixels
		 * so we take the width (number of pixels in the row) and multiply it
		 * for the size of one pixel, to get the size of all pixels in the row
		 * */
//		SDL_UpdateTexture(m_texture, NULL, m_buffer,
//				SCREEN_WIDTH
//						* sizeof(Uint32)/*Uint32 size = 4 bytes- 32 bits*/);
//		SDL_RenderClear(m_renderer);
//		SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
//		SDL_RenderPresent(m_renderer);
	} catch (int ex) {
		cout << "Memory couldn't be allocated!" << endl;
	}

	cout << "try catch passed" << endl;

	return true;
}

void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {

	Uint32 color = 0;

	color += red;
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;
	color <<= 8;
	color += 0xFF;

	cout << "This is color value: " << color << endl;

	// we go down for y axis and right for x axis
	// Note: the reason why we multiply y * SCREEN_WIDTH, is for going down by each row
	//int pixelPosition = (y * SCREEN_WIDTH) + x;
	//m_buffer[1000] = color;



	cout << "Pass thought all setPixel function " << endl;
}

void Screen::update() {
	/*
	 * SCREEN_WIDTH * sizeof(Uint32), this is known as the pitch
	 * the pitch is the number of memory allocated to one row of pixels
	 * so we take the width (number of pixels in the row) and multiply it
	 * for the size of one pixel, to get the size of all pixels in the row
	 * */
	SDL_UpdateTexture(m_texture, NULL, m_buffer,
			SCREEN_WIDTH * sizeof(Uint32)/*Uint32 size = 4 bytes- 32 bits*/);
	SDL_RenderClear(m_renderer);
	SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
	SDL_RenderPresent(m_renderer);
}

bool Screen::processEvents() {

	// this is a struct - structure
	SDL_Event event;

	while (SDL_PollEvent(&event)) {
		// if we click the X for exit in the window, this event is emitted
		if (event.type == SDL_QUIT) {
			return false;
		}
	}
	return true;
}

void Screen::close() {

	delete[] m_buffer;
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyTexture(m_texture);
	SDL_DestroyWindow(m_window);
	SDL_Quit();

}

}
;

/* namespace caveofprograming */
