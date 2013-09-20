#pragma once

#include "AGlutCallback.h"

#ifdef GLUT_CALLBACK_MOUSE_EXPORTS
#define GLUT_CALLBACK_MOUSE_API __declspec(dllexport) 
#else
#define GLUT_CALLBACK_MOUSE_API __declspec(dllimport) 
#endif

class GLUT_CALLBACK_MOUSE_API GlutCallBackMouse : public AGlutCallback
{

public:

	virtual void		callback();
	virtual void registerCallback();

	GlutCallBackMouse(ICallback * callback);
	virtual ~GlutCallBackMouse(void);
};

