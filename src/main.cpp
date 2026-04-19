#include <SDL2/SDL.h>
#include "Particle.h"
#include <iostream>


int main(int argc, char* argv[])
{
    bool running = true;
    SDL_Event ev;

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
        while (SDL_PollEvent(&ev) != 0)
        {
            switch (ev.type){
                case SDL_QUIT:
                    running = false;
                    break;
            }
        }

        SDL_Delay(100);
    }
    

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}