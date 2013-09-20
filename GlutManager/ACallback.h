#pragma once

#ifdef ACALLBACK_EXPORTS
#define ACALLBACK_API __declspec(dllexport) 
#else
#define ACALLBACK_API __declspec(dllimport) 
#endif

class ACALLBACK_API ACallback
{
public:

	virtual void callback() = 0;

	ACallback() {}
	virtual ~ACallback();

};