#pragma once

#include "ICallback.h"

#ifdef ICALLBACKMOUSE_EXPORTS
#define ICALLBACKMOUSE_API __declspec(dllexport) 
#else
#define ICALLBACKMOUSE_API __declspec(dllimport) 
#endif

class ICALLBACKMOUSE_API ICallbackMouse : public ICallback
{

public:

	enum BUTTON_TYPE
	{
		LEFT_BUTTON,
		MIDDLE_BUTTON,
		RIGHT_BUTTON
	};

	enum BUTTON_STATE
	{
		BUTTON_UP,
		BUTTON_DOWN
	};

	ICallbackMouse(void);

	virtual void	callback();
	virtual void	mouseCallback(int button, int state, int x, int y) = 0;

	virtual ~ICallbackMouse(void);
};

