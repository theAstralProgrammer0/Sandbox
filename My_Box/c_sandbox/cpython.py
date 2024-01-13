import ctypes

lib = ctypes.CDLL('./libPyList.so')
lib.cpython_print.argtypes = [ctypes.py_object]
l = ['hello', 'World']
lib.cpython_print(l)
del l[1]
lib.cpython_print(l)
l = l + [4, 5, 6.0, (9, 8), [9, 8, 1024], "My string"]
lib.cpython_print(l)
l = []
lib.cpython_print(l)
l.append(0)
lib.cpython_print(l)
l.append(1)
l.append(2)
l.append(3)
l.append(4)
lib.cpython_print(l)
l.pop()
lib.cpython_print(l)
