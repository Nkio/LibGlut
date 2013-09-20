#pragma once



class SGlutParam
{

	int				_glutReshapeFunc_Width;
	int				_glutReshapeFunc_Height;

	unsigned char	_glutKeyboardFunc_Key;

	int				_glutMouseFunc_Button;
	int				_glutMouseFunc_State;
	int				_glutMouseFunc_X;
	int				_glutMouseFunc_Y;

public:

	void				setGlutReshapeFuncWidth(int width);
	int const			getGlutReshapeFuncWidth() const;

	void				setGlutReshapeFuncHeight(int height);
	int const			getGlutReshapeFuncHeight() const;

// -------

	void				setGlutKeyboardFuncKey(unsigned char key);
	unsigned char const	getGlutKeyboardFuncKey() const;

// -------

	void				setGlutMouseFuncButton(int button);
	int	const			getGlutMouseFuncButton() const;

	void				setGlutMouseFuncState(int state);
	int	const			getGlutMouseFuncState() const;
	
	void				setGlutMouseFuncX(int x);
	int	const			getGlutMouseFuncX() const;
	
	void				setGlutMouseFuncY(int y);
	int	const			getGlutMouseFuncY() const;

// ---------------------------- Singleton Pattern

	static SGlutParam		*_instance;

protected:

	SGlutParam();

public:
	
	static SGlutParam	*Instance();
	~SGlutParam(void);

};
