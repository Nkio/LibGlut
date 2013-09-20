#pragma once

#include "ICallbackDisplay.h"

class TestDisplay : public ICallbackDisplay
{
public:

	TestDisplay(void);

	virtual void	displayCallback();

	virtual ~TestDisplay(void);
};

