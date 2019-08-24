#pragma once

#ifdef CPPTESTDYNAMICLIBRARY_EXPORT
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API __declspec(dllimport)
#endif


class EXPORT_API ClassInADll
{
public:
	ClassInADll();
	~ClassInADll();

	void DoSomething();
};