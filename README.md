# CPP02
(Ad-hoc polymorphism, operator overloading
and Orthodox Canonical class form)
## Grade 80/100
![cpp02](https://github.com/user-attachments/assets/4bdaa01a-cabe-4639-80b7-71c80b193378)

## Overview
This project implements a fixed-point number class in C++ using the Orthodox Canonical Form. It was developed in three stages:

**00.** My First Class in Orthodox Canonical Form:
   - Implements a basic fixed-point class that stores its value as an integer with a fixed number of fractional bits (set to 8).
   - Includes the default constructor, copy constructor, copy assignment operator, and destructor.
   - Provides simple getter and setter functions for the raw value.

**01.** Towards a More Useful Fixed-Point Number Class:
   - Adds constructors to convert from `int` and `float` to the fixed-point representation.
   - Implements member functions `toFloat()` and `toInt()` for converting back to floating-point and integer values.
   - Overloads the insertion (`<<`) operator to output the fixed-point number as a float.

**02.** Now We're Talking:
   - Overloads the 6 comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`) and 4 arithmetic operators (`+`, `-`, `*`, `/`).
   - Implements both pre- and post-increment/decrement operators.
   - Provides static member functions `min()` and `max()` (with both non-const and const versions) to return references to the smallest or largest fixed-point value.

Fixed-point arithmetic is vital for balancing performance, precision, and range in many applications (e.g., graphics, audio, scientific computing). This project deepened my understanding of operator overloading, resource management, and type conversion in C++.

## Features
- **Orthodox Canonical Form:**  
  Complete implementation with default, copy, and assignment constructors plus a destructor.
- **Fixed-Point Representation:**  
  Uses an integer for storage with 8 fractional bits.
- **Conversion Constructors:**  
  Supports construction from both integer and floating-point values.
- **Conversion Methods:**  
  `toFloat()` and `toInt()` enable conversion back to conventional types.
- **Operator Overloading:**  
  Supports arithmetic (`+`, `-`, `*`, `/`) and comparison (`>`, `<`, `>=`, `<=`, `==`, `!=`) operators as well as pre-/post-increment and decrement.
- **Static Utilities:**  
  Provides `min()` and `max()` functions for comparing two fixed-point numbers.
- **Stream Insertion Overload:**  
  Allows the object to be printed directly using `std::cout`.

## Files Structure
- **Fixed.hpp:**  
  Declaration of the `Fixed` class, including private members, public constructors, member functions, and operator overloads.
- **Fixed.cpp:**  
  Implementation of the `Fixed` class.
- **main.cpp:**  
  Contains test cases to demonstrate the functionality of the fixed-point class.
- **Makefile:**  
  Automates the build process using flags such as `-Wall -Wextra -Werror`.

## Compilation
***To run the project:***
```bash
cd ex00
make
./executable_filename
```

## What I Learned
**Working on this project enhanced my understanding of:**

**Fixed-Point Arithmetic:** The benefits and trade-offs of fixed-point representation versus floating-point.

**Operator Overloading:** Implementing intuitive arithmetic and comparison operators to mimic built-in types.

**Canonical Class Design:** Adhering to the Orthodox Canonical Form for reliable object management.

**Type Conversion:** Converting between different numeric types while preserving precision.

**Clean and Efficient C++ Code:** Writing maintainable code that meets strict standards.

## Conclusion
The CPP02 project was a challenging yet rewarding experience that broadened my understanding of advanced C++ features. It provided practical insights into designing a custom numerical type that balances performance with precision—an essential skill in many high-performance applications.
