#pragma once

#include "AGlutCallback.h"

#ifdef GLUT_CALLBACK_DISPLAY_EXPORTS
#define GLUT_CALLBACK_DISPLAY_API __declspec(dllexport) 
#else
#define GLUT_CALLBACK_DISPLAY_API __declspec(dllimport) 
#endif

class GLUT_CALLBACK_DISPLAY_API GlutCallbackDisplay : public AGlutCallback
{

public:

	virtual void		callback();
	virtual void registerCallback();

	GlutCallbackDisplay(ICallback *callback);
	virtual ~GlutCallbackDisplay(void);
};

