#include <cstdio>
#include <conio.h>
#include <python.h>

int main(int argc, char* argv[])
{	
	// Initailize the python interpreter
	Py_Initialize();
	//PyRun_SimpleString("print('Hello World from Embedded Python!!!')");
	char filename[] = "test.py";
	
	FILE fp;
	fp = _Py_fopen(filename, 'r');
	//PyRun_SimpleFile(fp, filename);

	// Finish the python interpreter
	Py_Finalize();
	return 0;
}


/*
compile using 

$ g++ main.cpp  -L /d/py39/libs -I /d/py39/include -lpython39


*/