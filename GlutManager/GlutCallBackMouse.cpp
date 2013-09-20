
#include <iostream>

#include "GlutCallBackMouse.h"
#include "SGlutParam.h"

GlutCallBackMouse		*g_CurrentGlutCallbackMouse;

extern "C" 
void glut_callback_mouse(int button, int state, int x, int y)
{
	SGlutParam::Instance()->setGlutMouseFuncButton(button);
	SGlutParam::Instance()->setGlutMouseFuncState(state);
	SGlutParam::Instance()->setGlutMouseFuncX(y);
	SGlutParam::Instance()->setGlutMouseFuncY(x);
	g_CurrentGlutCallbackMouse->callback();
}

GlutCallBackMouse::GlutCallBackMouse(ICallback * callback)
	: AGlutCallback(callback)
{
	g_CurrentGlutCallbackMouse = this;
}

void GlutCallBackMouse::registerCallback()
{
	g_CurrentGlutCallbackMouse = this;
	glutMouseFunc(glut_callback_mouse);
}

void GlutCallBackMouse::callback()
{
	_callback->callback();		
}

GlutCallBackMouse::~GlutCallBackMouse(void)
{
}
