#pragma once
#include <string>
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"

class Image
{
private:
	SDL_Texture * texture;
	std::string name;
public:
	Image();
	~Image();
	void loadImage(std::string name, SDL_Renderer *renderer);
	SDL_Texture * getTexture();
};

