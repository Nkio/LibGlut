#include "ICallbackKeyboard.h"
#include "SGlutParam.h"

ICallbackKeyboard::ICallbackKeyboard(void)
{
}

void			ICallbackKeyboard::callback()
{
	keyboardCallback(SGlutParam::Instance()->getGlutKeyboardFuncKey(), SGlutParam::Instance()->getGlutMouseFuncX(), SGlutParam::Instance()->getGlutMouseFuncY());
}

ICallbackKeyboard::~ICallbackKeyboard(void)
{
}
