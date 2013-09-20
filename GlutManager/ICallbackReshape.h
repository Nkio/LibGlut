#pragma once

#include "ICallback.h"

#ifdef ICALLBACKRESHAPE_EXPORTS
#define ICALLBACKRESHAPE_API __declspec(dllexport) 
#else
#define ICALLBACKRESHAPE_API __declspec(dllimport) 
#endif

class ICALLBACKRESHAPE_API ICallbackReshape : public ICallback
{

public:

	ICallbackReshape(void);

	virtual void	callback();
	virtual void	reshapeCallback(int width, int height) = 0;

	virtual ~ICallbackReshape(void);

};

