#include <stdio.h>
#include <Python.h>


int main(int argc , char *argv[])
{

	Py_Initialize();
	char filename[] = "test.py";
	//FILE fp;
	//fp = _Py_fopen(filename, "r");
	//PyRun_SimpleFile(fp, filename);
   	//PyObject* PyFileObject = PyFile_FromString("test.py", "r");
   	//PyRun_SimpleFileEx(PyFile_AsFile(PyFileObject), "test.py", 1);
   	PyRun_SimpleString("exec(open('test.py','r').read())");


	Py_Finalize();

	return 0;
}



// gcc main.c -L /f/_C_/Python-3.9.10/Lib -I /f/_C_/Python-3.9.10/Include  -lpython3.9





/*

https://stackoverflow.com/questions/27672572/embedding-python-in-c-linking-fails-with-undefined-reference-to-py-initialize
https://stackoverflow.com/questions/3416638/set-environment-variables-in-c
*/