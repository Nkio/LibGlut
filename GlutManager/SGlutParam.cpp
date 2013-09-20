#include "SGlutParam.h"

// ---------------------------- GlutReshapeFunc Params

void				SGlutParam::setGlutReshapeFuncWidth(int width)
{
	_glutReshapeFunc_Width = width;
}

int const			SGlutParam::getGlutReshapeFuncWidth() const
{
	return (_glutReshapeFunc_Width);
}

void				SGlutParam::setGlutReshapeFuncHeight(int height)
{
	_glutReshapeFunc_Height = height;
}

int const			SGlutParam::getGlutReshapeFuncHeight() const
{
	return (_glutReshapeFunc_Height);
}


// ---------------------------- GlutKeyboardFunc Params

void				SGlutParam::setGlutKeyboardFuncKey(unsigned char key)
{
	_glutKeyboardFunc_Key = key;
}

unsigned char const	SGlutParam::getGlutKeyboardFuncKey() const
{
	return (_glutKeyboardFunc_Key);
}

// ---------------------------- GlutMouseFunc Params

void				SGlutParam::setGlutMouseFuncButton(int button)
{
	_glutMouseFunc_Button = button;
}

int	const			SGlutParam::getGlutMouseFuncButton() const
{
	return (_glutMouseFunc_Button);
}

void				SGlutParam::setGlutMouseFuncState(int state)
{
	_glutMouseFunc_State = state;
}

int	const			SGlutParam::getGlutMouseFuncState() const
{
	return (_glutMouseFunc_State);
}

void				SGlutParam::setGlutMouseFuncX(int x)
{
	_glutMouseFunc_X = x;
}

int	const			SGlutParam::getGlutMouseFuncX() const
{
	return (_glutMouseFunc_X);
}
	
void				SGlutParam::setGlutMouseFuncY(int y)
{
	_glutMouseFunc_Y = y;
}

int	const			SGlutParam::getGlutMouseFuncY() const
{
	return (_glutMouseFunc_Y);
}

// ---------------------------- Singleton Pattern

SGlutParam		*SGlutParam::_instance = 0;

SGlutParam::SGlutParam()
{
}

SGlutParam		*SGlutParam::Instance()
{
	if (_instance == 0)
		_instance = new SGlutParam();
	return _instance;
}

SGlutParam::~SGlutParam(void)
{
}
