#pragma once

#include "ACallback.h"

class DrawSquare : public ACallback
{
public:

	virtual void callback();

	DrawSquare(void);
	virtual ~DrawSquare(void);
};

