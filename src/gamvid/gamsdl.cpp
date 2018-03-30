#include <gam/vid.hpp>

#include <GL/glew.h>
#include <SDL2/SDL.h>

unsigned int gam::window::width() {
  return 0;
}

void gam::vid::clear() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

gam::window* gam::vid::openWindow(const std::string& name,
				  unsigned int w, unsigned int h) {
  gam::window* win = new gam::window();

  SDL_Init(SDL_INIT_VIDEO);

  win->__window = SDL_CreateWindow(name.c_str(), 0, 0, w, h, SDL_WINDOW_OPENGL);

  return win;
}
