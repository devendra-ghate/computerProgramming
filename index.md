---
title: MA112 Computer Programming with Applications
author: Devendra Ghate
---

* * *

## Lectures

#### Lecture 1

( [Video](https://youtu.be/_CeAqiDPu74), [Notes](./lectureSlides/L01.pdf), [Slides](./lectureSlides/L01-slides.pdf) )

General Introduction - Course Outline - Schedule - Grading - various Operating Systems

#### Lecture 2

( [Video](https://youtu.be/crledBCWgMI) )

Landscape of programming languages - Compiled languages - Interpreted languages - What is a computer - Computer Architecture

#### Lecture 3

( [Video A](https://youtu.be/PNFAS4-U99A), [Video B](https://youtu.be/zM0EDbMnA5U) )

Memory pyramid - how computation happens

#### Lecture 4

( [Video](https://youtu.be/VXn4MV0DeJI) )

Turing complete machine - What is an algorithm - Algorithm to calculate square root

#### Lecture 5

( [Video](https://youtu.be/wrj2jbPoVVw), [Slides](./lectureSlides/L02.pdf) )

Compilation process - preprocessing - compilation - linking

#### Lecture 6

( [Video](https://youtu.be/f37uZQYZK3E), [Slides](./lectureSlides/L04.pdf) )

`gcc` flags - code optimisation flags - first program - compiler header files

( [00-hello.cpp](./code/00-hello.cpp) )

#### Lecture 7

( [Video](https://youtu.be/Mh4SEBZbpgI),  [Slides](./lectureSlides/L05.pdf) )

Datatypes - datatype based function implementations - performance criteria for programs - speed - memory usage - energy consumption - accuracy

( [01-variable.cpp](./code/01-variable.cpp), [02-datatypes.cpp](./code/02-datatypes.cpp), [03-range-datatypes.cpp](./code/03-range-datatypes.cpp) )

#### Lecture 8

( [Video](https://youtu.be/ys4pO6Y33zE), [Slides](./lectureSlides/L05.pdf) )

Datatypes - type conversion - operator precedence 

( [04-cout-precision.cpp](./code/04-cout-precision.cpp), [05-infinite-boolean.cpp](./code/05-infinite-boolean.cpp), [06-enum-datatype.cpp](./code/06-enum-datatype.cpp), [07-operators.cpp](./code/07-operators.cpp), [08-operatorPrecedence.cpp](./code/08-operatorPrecedence.cpp), [09a-typeConversion.cpp](./code/09a-typeConversion.cpp), [09-constVariables.cpp](./code/09-constVariables.cpp) )

<!--#### Lecture 8-->

<!--( [Video](), [Slides]() )-->



## Assignments

Each Friday evening, assignment for the next week will be made available here.
You need to upload the assignments (`C++` codes) by 4:30 PM on Thursday of the
next week to `moodle`. The entire process will be explained to you in the
upcoming lab session on 03-12-2020.

1. [Assignment 1](./assignments/assignment01.pdf)
2. [Assignment 2](./assignments/assignment02.pdf)


## Installation steps `gcc` for (compiler) and `geany` (IDE)

### Windows

[Installation manual tdm-gcc compiler and geany on Windows](https://wiki.geany.org/howtos/win32/getting-started)

**Download links**

1. [tdm-gcc compiler](http://tdm-gcc.tdragon.net/download)

2. [Geany-IDE](https://download.geany.org/geany-1.37.1_setup.exe)


### Linux (Ubuntu)

1. Open Terminal (`Ctrl+Alt+t`)

2. Install g++ compiler

```
sudo apt-get install build-essential
```

3. Check the installation

```
g++ --version
```

4. Install Geany

```
sudo apt-get install geany
```


## References

[C++ Primer Plus, Stephen Prata](https://www.amazon.in/Primer-Plus-Developers-Library-Old/dp/0321776402)

## Programs


[10-studentMarks.cpp](./code/10-studentMarks.cpp)

[11a-arrayMemoryAccess.cpp](./code/11a-arrayMemoryAccess.cpp)

[11-arrayInputManipulation.cpp](./code/11-arrayInputManipulation.cpp)

[12-forloop.cpp](./code/12-forloop.cpp)

[13-variableForLoop.cpp](./code/13-variableForLoop.cpp)

[14-wrongForLoop.cpp](./code/14-wrongForLoop.cpp)

[15-newForLoops.cpp](./code/15-newForLoops.cpp)

[16-infiniteLoop.cpp](./code/16-infiniteLoop.cpp)

[17-2dArray.cpp](./code/17-2dArray.cpp)

[18-saveMemory-loop.cpp](./code/18-saveMemory-loop.cpp)

[19-mathFunctions.cpp](./code/19-mathFunctions.cpp)

[20-relationalOperators.cpp](./code/20-relationalOperators.cpp)

[21-logicalOperators.cpp](./code/21-logicalOperators.cpp)

[22-unaryOperators.cpp](./code/22-unaryOperators.cpp)

[23-assignmentOperators.cpp](./code/23-assignmentOperators.cpp)

[24-checkOddOrEven.cpp](./code/24-checkOddOrEven.cpp)

[25-whileLoop.cpp](./code/25-whileLoop.cpp)

[26-dowhileLoop.cpp](./code/26-dowhileLoop.cpp)

[27-hashDefine.cpp](./code/27-hashDefine.cpp)

[28-identityMatrix.cpp](./code/28-identityMatrix.cpp)

[29-ifStatement.cpp](./code/29-ifStatement.cpp)

[30a-break.cpp](./code/30a-break.cpp)

[30b-continue.cpp](./code/30b-continue.cpp)

[30-switch.cpp](./code/30-switch.cpp)

[31-functions.cpp](./code/31-functions.cpp)

[32-variableScope.cpp](./code/32-variableScope.cpp)

[33-passingArray.cpp](./code/33-passingArray.cpp)

[34-recursion.cpp](./code/34-recursion.cpp)

[35-pointers.cpp](./code/35-pointers.cpp)

[36-arrayAsPointer.cpp](./code/36-arrayAsPointer.cpp)

[37-pointerOperations.cpp](./code/37-pointerOperations.cpp)

[38-pointerToPointer.cpp](./code/38-pointerToPointer.cpp)

[39-new.cpp](./code/39-new.cpp)

[40-delete.cpp](./code/40-delete.cpp)

[41-dynamicArray.cpp](./code/41-dynamicArray.cpp)

[42-pointerArithmetic.cpp](./code/42-pointerArithmetic.cpp)

[43-constPointers2.cpp](./code/43-constPointers2.cpp)

[43-constPointers.cpp](./code/43-constPointers.cpp)

[44-memoryLeak.cpp](./code/44-memoryLeak.cpp)

[45-structures.cpp](./code/45-structures.cpp)

[46-modifyScalar.cpp](./code/46-modifyScalar.cpp)

[47-passing1DArray.cpp](./code/47-passing1DArray.cpp)

[48-passing2DArray.cpp](./code/48-passing2DArray.cpp)

[49-passingByReference.cpp](./code/49-passingByReference.cpp)

[50-globalVariables.cpp](./code/50-globalVariables.cpp)

[50-structureReference.cpp](./code/50-structureReference.cpp)

[51-functionOverloading.cpp](./code/51-functionOverloading.cpp)

[libraryCreation](./code/libraryCreation.zip)


