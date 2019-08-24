#include <CppTestDynamicLibrary/ClassInADll.hpp>

#include <iostream>

ClassInADll::ClassInADll()
{
	std::cout << "Hi from a ctor dll in another project\n";
}

ClassInADll::~ClassInADll()
{
	std::cout << "Bye from a dtor in a dll in another project\n";
}

void ClassInADll::DoSomething()
{
	std::cout << "Do something\n";
}

