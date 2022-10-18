/*
 * Screen.h
 *
 *  Created on: Aug 17, 2022
 *      Author: alejo
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>
#include <iostream>
#include <string.h>

using namespace std;

namespace caveofprograming {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;
private:
	// we use _m as a prefix convention to identify member variables
	/*
	 * In object-oriented programming, a member variable is
	 * a variable that is associated with a specific object,
	 * and accessible for all its methods.
	 * */
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;

public:
	Screen();
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
};

} /* namespace caveofprograming */

#endif /* SCREEN_H_ */
