#include "Application.hpp"

namespace Sonic {
Application::Application() {
  unsigned int init_flags{SDL_INIT_VIDEO | SDL_INIT_TIMER |
                          SDL_INIT_GAMECONTROLLER};

  if (SDL_Init(init_flags) != 0) {
    SDL_Log("SDL_Init failed: %s\n", SDL_GetError());
    stop();
  }
}

Application::~Application() { SDL_Quit(); }

void Application::run() {
  while (m_running) {
    SDL_Log("Updating...\n");
  }
}

void Application::stop() { m_running = false; }

} // namespace Sonic
