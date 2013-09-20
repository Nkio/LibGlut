
#pragma once

#ifdef GLUTMANAGER_EXPORTS
#define GLUTMANAGER_API __declspec(dllexport) 
#else
#define GLUTMANAGER_API __declspec(dllimport) 
#endif

#include <string>
#include <list>

#include "AGlutCallback.h"

#include <GL\glut.h>

class GLUTMANAGER_API GlutManager
{

	int				_windowPosX;
	int				_windowPosY;

	int				_windowWidth;
	int				_windowHeight;

	unsigned int	_windowDisplayMode;

	std::string	 	_windowTitle;

	int				_windowID;

public:

	GlutManager(int argc, char **argv);

	void init(int width = 300, int height = 300, int posX = -1, int posY = -1);
	void init(unsigned int displayMode, int width = 300, int height = 300, int posX = -1, int posY = -1);

	void createWindow();
	void createWindow(std::string const & windowTitle);

	int const	getWindowID() const;

	void registerCallback(std::list<AGlutCallback *> callback) const;

	virtual  ~GlutManager(void);
};

