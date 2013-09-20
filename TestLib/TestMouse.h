#pragma once

#include "ICallbackMouse.h"

class TestMouse : public ICallbackMouse
{
public:
	TestMouse(void);

	virtual void	mouseCallback(int button, int state, int x, int y);

	virtual ~TestMouse(void);
};

