#pragma once
#include "AGlutcallback.h"

#ifdef GLUT_CALLBACK_KEYBOARD_EXPORTS
#define GLUT_CALLBACK_KEYBOARD_API __declspec(dllexport) 
#else
#define GLUT_CALLBACK_KEYBOARD_API __declspec(dllimport) 
#endif

class GLUT_CALLBACK_KEYBOARD_API GlutCallbackKeyboard : public AGlutCallback
{

public:

	virtual void		callback();
	virtual void registerCallback();

	GlutCallbackKeyboard(ICallback * callback);
	virtual ~GlutCallbackKeyboard(void);
};

