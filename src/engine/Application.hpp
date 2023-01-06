
#pragma once

#include "SDL/SDL.h"

namespace Sonic {
class Application {
private:
  bool m_running{true};

public:
  Application();
  ~Application();

  void run();
  void stop();
};

} // namespace Sonic