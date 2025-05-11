# Professional C++ Code

## C++ 20 Features

### GCC 14

```bash
g++ -std=c++20 -O3 helloworld.cpp -o ./build-linux/helloworld -DFMT_USE_NONTYPE_TEMPLATE_PARAMETERS=1
```

## C++ 23 Features

### Clang 19

Build local _.pcm_ files:

```bash
clang++-19 -O3 -std=c++23 -stdlib=libc++ --precompile -o std.pcm /usr/lib/llvm-19/share/libc++/v1/std.cppm
```

Compile the code with modules:

```bash
clang++-19 -O3 -std=c++23 -stdlib=libc++ -fmodule-file=std=std.pcm -o ./build-linux/helloworld std.pcm ./helloworld.cpp
```

### GCC 15

## References

- [It’s Time to Use CXX Modules on Modern C++](https://igormcoelho.medium.com/its-time-to-use-cxx-modules-on-modern-c-41a574b77e83)