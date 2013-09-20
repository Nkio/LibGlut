#include "ICallbackReshape.h"
#include "SGlutParam.h"

ICallbackReshape::ICallbackReshape(void)
{
}

void			ICallbackReshape::callback()
{
	reshapeCallback(SGlutParam::Instance()->getGlutReshapeFuncWidth(), SGlutParam::Instance()->getGlutReshapeFuncHeight());
}

ICallbackReshape::~ICallbackReshape(void)
{
}
