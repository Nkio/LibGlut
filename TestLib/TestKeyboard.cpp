#include <iostream>

#include "TestKeyboard.h"


TestKeyboard::TestKeyboard(void)
{
}


void		TestKeyboard::keyboardCallback(unsigned char key, int x, int y)
{
	std::cout << key;
}


TestKeyboard::~TestKeyboard(void)
{
}
