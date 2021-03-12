#include <stdio.h>
#include <iostream>
#include <Python.h>

#ifdef MAIN
int main()
{
	PyObject* pInt;

	Py_Initialize();

	const char* fname = "test.py";

	FILE* f = fopen(fname, "r");

	PyRun_AnyFile(f, fname);

	fclose(f);
	
	Py_Finalize();

	return 0;
}
#endif