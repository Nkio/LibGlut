#include <iostream>

#include "TestMouse.h"


TestMouse::TestMouse(void)
{
}

void	TestMouse::mouseCallback(int button, int state, int x, int y)
{
	std::cout << "Button " << button << std::endl;
	std::cout << "State " << state << std::endl;
	std::cout << "X " << x << std::endl;
	std::cout << "Y " << y << std::endl;

	if (button == ICallbackMouse::LEFT_BUTTON)
		std::cout << "Click gauche" << std::endl;
	if (button == ICallbackMouse::MIDDLE_BUTTON)
		std::cout << "Click milieu" << std::endl;
	if (button == ICallbackMouse::RIGHT_BUTTON)
		std::cout << "Click droite" << std::endl;

}

TestMouse::~TestMouse(void)
{
}
