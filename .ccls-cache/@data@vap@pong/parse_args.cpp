#include "parse_args.h"

#include <iostream>

using std::map, std::string;

map<string, string> ParseArgs(int argc, const char* argv[])
{
  map<string, string> parsed;
  for(int i=0; i < argc; i++)
  {
    string arg(argv[i]);
    size_t arglen = arg.length();
    for(int ii = 0; ii < arglen; ii++)
    {
      if(arg[ii] == '=') 
      {
        string key = arg.substr(0, ii);
        string value = arg.substr(ii + 1, arglen - ii - 1);

        parsed[key] = value;
      }
    }
  }
  for (auto const& x : parsed)
  {
      std::cout << x.first  // string (key)
                << ':' 
                << x.second // string's value 
                << std::endl;
  }
  return parsed;
}

