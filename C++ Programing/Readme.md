

# Using Your Own Header File in C++

This guide will walk you through the process of creating and using your own header file in C++, allowing you to efficiently share functions and constants across multiple source files.

---

## Creating Your Header File

### 1. Create a Header File

Start by creating a new header file with a `.h` extension. This file will contain declarations for functions, classes, variables, and constants that you want to share across your program.

Example: Create a file named `myheader.h`:

```cpp
// myheader.h

#ifndef MYHEADER_H
#define MYHEADER_H

// Function declarations
int add(int a, int b);
void greet();

// Constant declaration
const double PI = 3.14159265358979323846;

#endif
```


## Using Your Header File in Different Files

### Include Your Header File

In any source file where you want to use the functions and constants declared in your header file, include the header file using `#include`.

Example: Use the functions and constants in `test.cpp`:

```cpp
// test.cpp

#include <iostream>
#include "myheader.h"

using namespace std;

int main() {
    cout << "PI: " << PI << endl;
    cout << "Addition: " << add(5, 3) << endl;
    greet();
    return 0;
}
```

---

## Compiling Your Program

### Compile Your Program

Compile your program, making sure to include all necessary source files.

Example compilation command:

```bash
g++ myfunctions.cpp test.cpp -o myprogram
```

---

## Running Your Program

### Run Your Program

Execute the compiled program to see the output.

Example execution:

```bash
./myprogram
```

---

## Conclusion !!

You've now learned how to create your own header file in C++, declare functions and constants in it, implement those functions in separate source files, and use them efficiently across your program. Happy coding!
