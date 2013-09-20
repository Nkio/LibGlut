

#include <iostream>

#include "GlutCallbackReshape.h"
#include "SGlutParam.h"

GlutCallbackReshape		*g_CurrentGlutCallbackReshape;

extern "C" 
void glut_callback_reshape(int width, int height)
{
	SGlutParam::Instance()->setGlutReshapeFuncWidth(width);
	SGlutParam::Instance()->setGlutReshapeFuncHeight(height);
	g_CurrentGlutCallbackReshape->callback();
}

GlutCallbackReshape::GlutCallbackReshape(ICallback * callback)
	: AGlutCallback(callback)
{
	g_CurrentGlutCallbackReshape = this;
}

void GlutCallbackReshape::registerCallback()
{
	g_CurrentGlutCallbackReshape = this;
	glutReshapeFunc(glut_callback_reshape);
}

void GlutCallbackReshape::callback()
{
	_callback->callback();		
}

GlutCallbackReshape::~GlutCallbackReshape(void)
{
}
