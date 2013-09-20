#pragma once

#include "ICallbackKeyboard.h"

class TestKeyboard : public ICallbackKeyboard
{
public:
	TestKeyboard(void);

	virtual void keyboardCallback(unsigned char key, int x, int y);

	virtual ~TestKeyboard(void);
};

