#include <python3.6m/Python.h>

int main()
{
    Py_Initialize();
    PyRun_SimpleString("print(\"Hello, world!\")");
    Py_Finalize();
    return 0;
}
