#pragma once

#ifdef ICALLBACK_EXPORTS
#define ICALLBACK_API __declspec(dllexport) 
#else
#define ICALLBACK_API __declspec(dllimport) 
#endif

class ICALLBACK_API ICallback
{

public:

	ICallback() {}

	virtual void callback() = 0;

	virtual ~ICallback(void) {}
};

