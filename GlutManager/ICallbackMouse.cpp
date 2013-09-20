#include "ICallbackMouse.h"
#include "SGlutParam.h"


ICallbackMouse::ICallbackMouse(void)
{
}

void		ICallbackMouse::callback()
{
	mouseCallback(SGlutParam::Instance()->getGlutMouseFuncButton(), SGlutParam::Instance()->getGlutMouseFuncState(),
		SGlutParam::Instance()->getGlutMouseFuncX(), SGlutParam::Instance()->getGlutMouseFuncY());
}

ICallbackMouse::~ICallbackMouse(void)
{
}
