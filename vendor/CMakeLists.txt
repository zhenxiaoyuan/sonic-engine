include(FetchContent)
FetchContent_Declare(
  SDL2
  GIT_REPOSITORY "https://github.com/libsdl-org/SDL.git"
  GIT_TAG release-2.26.2
)
add_subdirectory(sdl)

FetchContent_Declare(
  imgui
  GIT_REPOSITORY "https://github.com/ocornut/imgui.git"
  # docking-latest
  GIT_TAG v1.89.2
)
add_subdirectory(imgui)
