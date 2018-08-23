#include "Image.h"

Image::Image()
{
}

Image::~Image()
{
}

void Image::loadImage(std::string name, SDL_Renderer *renderer)
{
	this->name = name;
	SDL_Surface* loadedSurface = IMG_Load(name.c_str());
	texture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
}

SDL_Texture* Image::getTexture()
{
	return texture;
}