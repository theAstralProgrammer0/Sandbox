#include <Python.h>
#include <stdio.h>

void cpython_print(PyObject *p)
{
	Py_ssize_t psize;
	Py_ssize_t allocated;
	Py_ssize_t i;
	PyObject *item;
	PyTypeObject *item_type_obj;
	const char *type;

	psize = Py_SIZE(p);
	PyListObject *allocd;
	allocd = (PyListObject *)p;

	allocated = allocd->allocated;

	printf("[*] SIze of the Python List = %lu\n", psize);
	printf("[*] Allocated = %lu\n", allocated);

	for (i = 0; i < psize; i++)
	{
		item = PyList_GET_ITEM(p, i);
		item_type_obj = Py_TYPE(item);
		type = item_type_obj->tp_name; 
		printf("Element %lu: %s\n", i, type);
	}

}
