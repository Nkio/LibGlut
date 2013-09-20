#pragma once

#include "AGlutcallback.h"

#ifdef GLUT_CALLBACK_RESHAPE_EXPORTS
#define GLUT_CALLBACK_RESHAPE_API __declspec(dllexport) 
#else
#define GLUT_CALLBACK_RESHAPE_API __declspec(dllimport) 
#endif

class GLUT_CALLBACK_RESHAPE_API GlutCallbackReshape : public AGlutCallback
{

public:

	virtual void		callback();
	virtual void registerCallback();

	GlutCallbackReshape(ICallback * callback);
	virtual ~GlutCallbackReshape(void);
};

