#include <iostream>
#include <cstdlib>
#include "Image.h"
#include <random>

int main()
{
  constexpr size_t width=200;
  constexpr size_t height=200;
  std::cout<<"testing image\n";
  Image test(width,height);

  for(size_t frame=0; frame<width; ++frame )
  {
    test.clearScreen(255,255,255);
    for(size_t x=0; x<frame; ++x)
    {
      for(size_t y=80; y<120; ++y)
        test.setPixel(x,y,255,0,0);
    }

    char name[50];
    sprintf(name,"frame.%04d.png",static_cast<int>(frame));
    test.save(name);
  }


  return EXIT_SUCCESS;
}





