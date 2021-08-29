#include "init.h"

#include <cstring>

using std::string, std::map;

SDL_Window* init(map<string, string> args)
{
  int screen_width = 640;
  int screen_height = 480;

  if(auto sw = args.find("screen_width"); sw != args.end())
    screen_width = std::stoi(sw->second);

  if(auto sh = args.find("screen_height"); sh != args.end())
    screen_height = std::stoi(sh->second);

  SDL_Window* window = NULL;
    
  SDL_Surface* screenSurface = NULL;

  if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
  {
    printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
  } 

  window = SDL_CreateWindow("Pong", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN );
  if( window == NULL )
  {
    printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
  }
  else
  {
    screenSurface = SDL_GetWindowSurface( window );
    SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
    SDL_UpdateWindowSurface( window );
    SDL_Delay( 2000 );
  }

  return window;
}
