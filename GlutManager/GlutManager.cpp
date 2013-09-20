// GlutManager.cpp : définit les fonctions exportées pour l'application DLL.
//

#include "GlutManager.h"


GlutManager::GlutManager(int argc, char **argv)
{
	glutInit(&argc, argv);
	_windowDisplayMode = 0;
	init();
}

void		GlutManager::init(int width, int height, int posX, int posY)
{
	_windowWidth = width;
	_windowHeight = height;
	_windowPosX = posX;
	_windowPosY = posY;

	glutInitWindowPosition(_windowPosX, _windowPosY);
	glutInitWindowSize(_windowWidth, _windowHeight);

	if (_windowDisplayMode != 0)
		glutInitDisplayMode(_windowDisplayMode);
}

void		GlutManager::init(unsigned int displayMode, int width, int height, int posX, int posY )
{
	_windowDisplayMode = displayMode;
	init(width, height, posX, posY);
}

void		GlutManager::createWindow()
{
	_windowID = glutCreateWindow(_windowTitle.c_str());
}

void		GlutManager::createWindow(std::string const & windowTitle)
{
	_windowTitle = windowTitle;
	createWindow();
}

int const	GlutManager::getWindowID() const
{
	return (_windowID);
}


void		GlutManager::registerCallback(std::list<AGlutCallback *> callback) const
{
	for (std::list<AGlutCallback *>::const_iterator beg = callback.begin(); beg != callback.end(); ++beg)
		(*beg)->registerCallback();
}

GlutManager::~GlutManager(void)
{
}
