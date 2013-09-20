#pragma once

#ifdef AGLUTCALLBACK_EXPORTS
#define AGLUTCALLBACK_API __declspec(dllexport) 
#else
#define AGLUTCALLBACK_API __declspec(dllimport) 
#endif

#include "ICallback.h"

#include <GL\glut.h>

class AGLUTCALLBACK_API AGlutCallback
{

protected:

	ICallback			*_callback;

public:

	AGlutCallback(ICallback * callback) { _callback = callback ; }

	virtual void callback() = 0;
	virtual void registerCallback() = 0;

	virtual ~AGlutCallback(void) {}
};

