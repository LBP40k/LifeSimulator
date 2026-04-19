#include <SDL2/SDL.h>
#include <iostream>


int main(int argc, char* argv[])
{
    bool running = true;

    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cout << "SDL failed\n";
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow(
        "Test",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        800, 600,
        SDL_WINDOW_SHOWN
    );

    while (running)
    {

        SDL_Delay(100);
    }

    

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}