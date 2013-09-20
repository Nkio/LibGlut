#pragma once

#include "ICallback.h"

#ifdef ICALLBACKKEYBOARD_EXPORTS
#define ICALLBACKKEYBOARD_API __declspec(dllexport) 
#else
#define ICALLBACKKEYBOARD_API __declspec(dllimport) 
#endif

class ICALLBACKKEYBOARD_API ICallbackKeyboard : public ICallback
{

public:

	ICallbackKeyboard(void);

	virtual void	callback();
	virtual void	keyboardCallback(unsigned char key, int x, int y) = 0;

	virtual ~ICallbackKeyboard(void);

};

