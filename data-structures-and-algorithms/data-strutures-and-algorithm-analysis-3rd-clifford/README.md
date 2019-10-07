# Data Structures and Algorithm Analysis, 3rd Edition
"We study data structures so that we can learn to write more efficient programs.
But why must programs be efficient when new computers are faster every year?
The reason is that our ambitions grow with our capabilities. Instead of
rendering efficiency needs obsolete, the modern revolution in computing power
and storage capability merely raises the efficiency stakes as we attempt more
complex tasks." (page xiii)

## Content of this book
+ **Chapter 1** Data Structures and Algorithms
+ **Chapter 2** Mathematical Preliminaries
+ **Chapter 3** Algorithm Analysis
+ **Chapter 4** Lists, Stacks, and Queues
+ **Chapter 5** Binary Trees
+ **Chapter 6** Non-Binary Trees
+ **Chapter 7** Internal Sorting
+ **Chapter 8** File Processing and External Sorting
+ **Chapter 9** Searching
+ **Chapter 10** Indexing
+ **Chapter 11** Graphs
+ **Chapter 12** Lists and Arrays Revisited
+ **Chapter 13** Advanced Tree Structures
+ **Chapter 14** Analysis Techniques
+ **Chapter 15** Lower Bounds
+ **Chapter 16** Patterns of Algorithms
+ **Chapter 17** Limits to Computation

## Commit message
The title of a commit message must contain a prefix "dsaaa: ch{xx}:", which is
an abbreviation for **D**ata **S**tructures **a**nd **A**lgorithm **A**nalysis
and the chapter number. It is encouraged to provide informative messages. The
"Signed-off-by" must be included at the end of the commit message. For example:
```
dsaaa: Provide all answers for chapter 1

Chapter 1 introduces philosophy, e.g. the need for, costs and benefits of data
structures, what abstract data types are, some design patterns, and what
problems, algorithms, and programs are.

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
