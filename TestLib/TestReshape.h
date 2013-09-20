#pragma once

#include "ICallbackReshape.h"

class TestReshape : public ICallbackReshape
{

public:

	TestReshape(void);

	virtual void reshapeCallback(int width, int height);

	virtual ~TestReshape(void);

};

