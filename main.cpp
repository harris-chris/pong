#include "main.h"

#include <iostream>
#include <cstdio>
#include <string>
#include <map>

#include <SDL2/SDL.h>

#include "parse_args.h"

using std::cout, std::string, std::endl;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, const char * argv[])
{
  //SDL_Window* window = NULL;
  //SDL_Surface* surface = NULL;
  
  std::map<string, string> parsed = ParseArgs(argc, argv);
  cout << "Finishing" << endl;

}
