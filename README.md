A sample project illustrating how to perform unit testing with GoogleTest and CMake

## Building

~~~
mkdir build
cd build
cmake ..
make
~~~

## Running

~~~
cd build && make test
~~~

or

~~~
build/test/testbowling/testbowling
~~~

Refer to [this blog post](http://kaizou.org/2014/11/gtest-cmake/) for a detailed explanation of how it works.
