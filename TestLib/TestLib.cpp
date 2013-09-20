// TestLib.cpp : définit le point d'entrée pour l'application console.
//

#include <iostream>
#include <list>

#include "stdafx.h"
#include "GlutManager.h"
#include "CallbackDeclaration.h"

#include "TestDisplay.h"
#include "TestMouse.h"
#include "TestReshape.h"
#include "TestKeyboard.h"

int main(int argc, char ** argv)
{

	std::list<AGlutCallback *> callback = std::list<AGlutCallback *>();
	
	GlutManager glut(argc, argv);

	callback.push_back(new GlutCallbackDisplay(new TestDisplay()));
	callback.push_back(new GlutCallBackMouse(new TestMouse()));
	callback.push_back(new GlutCallbackKeyboard(new TestKeyboard()));
	callback.push_back(new GlutCallbackReshape(new TestReshape()));

	glut.init(GLUT_SINGLE | GLUT_RGB, 800, 800, 100, 100);
	glut.createWindow("Plop");
	glut.registerCallback(callback);
	glutMainLoop();

	
	
	return 0;
}

