CPPARGS="-fPIC -static-libstdc++ -I/usr/include/python3.9/ -lpython3.9"
g++ -shared -o libtestpy.so  testpy.cpp  $CPPARGS
g++ -o testpy  testpy.cpp  $CPPARGS -DMAIN