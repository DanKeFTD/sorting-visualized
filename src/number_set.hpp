#ifndef __NUMBER_SET_H_INCLUDED__
#define __NUMBER_SET_H_INCLUDED__

#include <random>
#include <algorithm>
#include <vector>

#include <SDL2/SDL.h>

namespace number_set
{
    std::vector<SDL_Rect> gen(int num_set, int set_size);
    std::vector<SDL_Rect> random();
    std::vector<SDL_Rect> seq_random();
    //std::vector<SDL_Rect> nearly_sorted();
    std::vector<SDL_Rect> reversed();
    //std::vector<SDL_Rect> few_unique();
    int get_num_pillars();

    extern std::mt19937 rng;
    extern std::uniform_int_distribution<int> even_rand;
    extern int pillar_width;
    extern int num_pillars;
}

#endif
