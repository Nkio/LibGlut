#include <iostream>

#include "TestReshape.h"


TestReshape::TestReshape(void)
{
}


void			TestReshape::reshapeCallback(int width, int height)
{
	std::cout << "Taille de la fenetre : " << width << "*" << height << std::endl;
}

TestReshape::~TestReshape(void)
{
}
