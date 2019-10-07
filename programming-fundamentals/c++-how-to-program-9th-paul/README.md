# C++ How to Program, 9th Edition
"This book presents leading-edge computing technologies. It's appropriate for
introductory course sequences based on the curriculum recommendations of two
key professional organizations — the ACM and the IEEE." (From the book)

## Content of this book
+ **Chapter 1** Introduction to Computers and C++
+ **Chapter 2** Intro to C++ Programming
+ **Chapter 3** Intro to Classes and Objects
+ **Chapter 4** Control statements: Part 1
+ **Chapter 5** Control statements: Part 2
+ **Chapter 6** Functions and an Intro to Recursion
+ **Chapter 7** Arrays and Vectors
+ **Chapter 8** Pointers
+ **Chapter 9** Classes: A Deeper Look, Part 1
+ **Chapter 10** Classes: A Deeper Look, Part 2
+ **Chapter 11** Operator Overloading
+ **Chapter 12** OOP: Inheritance
+ **Chapter 13** OOP: Polymorphism
+ **Chapter 14** Templates
+ **Chapter 15** Stream Input/Output
+ **Chapter 16** Exception Handling: A Deeper Look
+ **Chapter 17** File processing
+ **Chapter 18** Class string and String Stream Processing
+ **Chapter 19** Searching and Sorting
+ **Chapter 20** Custom Templatized
+ **Chapter 21** Bits, Characters, C-Strings and structs
+ **Chapter 22** Standard Template Library
+ **Chapter 23** Boost Libraries, Technical Report I and C++0x
+ **Chapter 24** Other Topics

## Commit message
The title of a commit message must contain a prefix "c++htp: ch{xx}:", which is
an abbreviation for **C++** **H**ow **t**o **P**rogram and the chapter number.
It is encouraged to provide informative messages. The "Signed-off-by" must be
included at the end of the commit message. For example:
```
c++htp: ch01: Provide answers 1.1-1.7 for intro exercises

Chapter 1 of C++ How to Program 9th Edition introduce computer and C++.
It mentions relationship between hardware and software, variety kinds
of languages, object programming technology, operating systems, the
Internet, and some key software development terminology.

Signed-off-by: Hieu Vu <hieutrgvu@gmail.com>
```

## How to check the answers
+ `.txt` file: use any editor or reader programs to view the content
+ For a single `.cc` file, compile and run it to check its result:
```
$ g++ -o {name}.cc {name}.out
$ ./{name}.out
```
+ For a folder, it depends on each kind of exercise. If it contains multiple
source files, it usually has a Makefile. Use Makefile to build (or clean),
then run the binary file to check the result.
```
$ make build
$ ./{name-of-folder}.out
$ make clean
```
