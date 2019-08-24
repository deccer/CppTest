#include <CppTest/DllRunner.hpp>
#include <CppTestDynamicLibrary/ClassInADll.hpp>

void DllRunner::Run()
{
	ClassInADll classInADll;
	classInADll.DoSomething();
}