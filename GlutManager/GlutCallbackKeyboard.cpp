
#include <iostream>

#include "GlutCallbackKeyboard.h"
#include "SGlutParam.h"

GlutCallbackKeyboard		*g_CurrentGlutCallbackKeyboard;

extern "C" 
void glut_callback_keyboard(unsigned char key, int x, int y)
{
	SGlutParam::Instance()->setGlutKeyboardFuncKey(key);
	SGlutParam::Instance()->setGlutMouseFuncX(y);
	SGlutParam::Instance()->setGlutMouseFuncY(x);
	g_CurrentGlutCallbackKeyboard->callback();
}

GlutCallbackKeyboard::GlutCallbackKeyboard(ICallback * callback)
	: AGlutCallback(callback)
{
	g_CurrentGlutCallbackKeyboard = this;
}

void GlutCallbackKeyboard::registerCallback()
{
	g_CurrentGlutCallbackKeyboard = this;
	glutKeyboardFunc(glut_callback_keyboard);
}

void GlutCallbackKeyboard::callback()
{
	_callback->callback();		
}

GlutCallbackKeyboard::~GlutCallbackKeyboard(void)
{
}
