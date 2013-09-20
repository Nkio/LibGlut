#pragma once

#include "ICallback.h"

#ifdef ICALLBACKDISPLAY_EXPORTS
#define ICALLBACKDISPLAY_API __declspec(dllexport) 
#else
#define ICALLBACKDISPLAY_API __declspec(dllimport) 
#endif

class ICALLBACKDISPLAY_API ICallbackDisplay : public ICallback
{

public:

	ICallbackDisplay(void);

	virtual void	callback();
	virtual void	displayCallback() = 0;

	virtual ~ICallbackDisplay(void);

};

