# C++ How to Program, 9th Edition
"This book presents leading-edge computing technologies. It's appropriate for
introductory course sequences based on the curriculum recommendations of two
key professional organizations — the ACM and the IEEE." (From the book)

## Commit message
The title of a commit message must contain a prefix "c++htp: ", which is an
abbreviation for **C++** **H**ow **t**o **P**rogram. It is encouraged to
provide informative messages. The "Signed-off-by" must be included at the end
of the commit message. For example:
```
c++htp: Provide answers 1.1-1.7 for chapter 1

Chapter 1 of C++ How to Program 9th Edition introduce computer and C++.
It mentions relationship between hardware and software, variety kinds
of languages, object programming technology, operating systems, the
Internet, and some key software development terminology.

Signed-off-by: Hieu Vu <hieutrgvu@gmail.com>
```

## How to check the answers
+ `.txt` file: use any editor or reader programs to view the content
+ For a single `.cpp` file, compile and run it to check its result:
```
$ g++ -o {name}.cpp {name}
$ ./{name}
```
