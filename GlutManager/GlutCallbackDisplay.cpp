
#include <iostream>

#include "GlutCallbackDisplay.h"


GlutCallbackDisplay		*g_CurrentGlutCallbackDisplay;

extern "C" 
void glut_callback_display()
{
	g_CurrentGlutCallbackDisplay->callback();
}

GlutCallbackDisplay::GlutCallbackDisplay(ICallback * callback)
	: AGlutCallback(callback)
{
	g_CurrentGlutCallbackDisplay = this;
}

void GlutCallbackDisplay::registerCallback()
{
	g_CurrentGlutCallbackDisplay = this;
	glutDisplayFunc(glut_callback_display);
}

void GlutCallbackDisplay::callback()
{
	_callback->callback();
}

GlutCallbackDisplay::~GlutCallbackDisplay(void)
{
}
