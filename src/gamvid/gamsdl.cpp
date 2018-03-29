#include <gam/vid.hpp>

#include <GL/glew.h>
#include <SDL2/SDL.h>

void gam::vid::clear() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
