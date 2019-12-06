swig -python cec17.i
g++ -c cec17.c -o cec17_wrap.o -fpic -std=c++0x
g++ -I /usr/include/python3.7 -I /usr/local/lib/python3.5/dist-packages/numpy/core/include/ -c cec17_wrap.c -o cec17.o -fpic -std=c++0x
g++ cec17_wrap.o cec17.o -o _cec17.so -shared -Wl,-soname,_cec17
