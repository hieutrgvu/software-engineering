# Software Engineering
The objective of this repository is to research about software engineering
related topics, e.g. data structure and algorithms, programming fundamentals,
operating systems, etc. The contributors can work dependently, choose what they
want to learn, and share their knowledge to each other. Learning is the key
value. It is not only from documents, but also from the other contributors.

## Repository structure
Each topic related to software engineering is organized as a **top-level**
folder. There are several books discuss about these topics, and some of them
are chosen to research. Each topic will contain **sub-folders** which are named
after the chosen books with the format below:
```
{name-of-the-book}-{edition}-{the-first-name-of-the-first-author}
```

Example:
```
repository    │    sotfware-engineering
              │    │
top-level     │    ├── data-structures-and-algorithms
sub-folder    │    │   └── data-strutures-and-algorithm-analysis-3rd-clifford
              │    │
top-level     │    ├── operating-systems
sub-folder    │    │   └── operating-system-concepts-10th-abraham
              │    │
top-level     │    └── programming-fundamentals
sub-folder    │        ├── c++-how-to-program-9th-paul
sub-folder    │        └── python-crash-course-2nd-eric
```

The answers for exercises are located at their **chapter folders**, which
belongs to a specific **sub-folder**. There are 3 answer types:
+ `.txt` contains only text.
+ `.{source-type}` is a single source file, e.g. `.c`, `.cpp`, `.py`, etc.
+ `folder` contains multiple files to solve an exercise.

The **chapter folder** are named as `ch{xx}-{title}`. The name of an **answer
file** has the format `{xx}.{yy}.{answer-type}`.  In which, `{xx}` is the
chapter number, and `{yy}` is the exercise number.

Example:
```
data-strutures-and-algorithm-analysis-3rd-clifford
│
├── ch01-data-structures-and-algorithms
│   ├── 01.01.txt
│   ├── 01.02
│   │   ├── header.h
│   │   └── source.cpp
│   ├── 01.03.c
│   └── 01.04.cpp
│
├── ch02-mathematical-preliminaries
└── ch03-algorithm-analysis
```

Each **sub-folder** will contain a `README.md` file. This file holds the
information about the topic and the instruction to check the topic's answers.

## How to contribute
For those who want to contribute to this repository will develop on their
branch individually. Each branch shall be labeled as its contributor name. The
`master` branch will contain the best answers, which are selected from the
others periodically.

### Cloning repository
```
git clone git@github.com:hieutrgvu/software-engineering.git
```

### Checkout new branch and work on it
```
git checkout master
git pull
git checkout -b {contributorname}    // Create branch with the contributor name
...
git add .                            // "." for whole current directory
git add {filename}                   // for only a specified file
git commit -s                        // commit with Signed-off-by
git push -u origin {contributorname} // for the first time
git push origin {contributorname}    // after the first time
```

### Sharing knowledge by creating issue
Each contributor can see the work of the others, so it is possible to make
comments and discussion via a GitHub feature called "Opening An Issue". To know
more about this feature, please check at:
<https://help.github.com/en/articles/opening-an-issue-from-code>

### A good commit message
+ Informative commit message is required
+ Signed-off-by is required
+ Follow seven rules at: <https://chris.beams.io/posts/git-commit/>

### Create pull request to `master`
The best answers of each chapter will be selected and merged to the `master`
branch periodically. There are two ways:
+ The maintainer will collect the chosen answers and make a commit.
+ The contributors will create a pull request, if the answers are collected
from their branches.

## Coding standard
"A coding standard gives a uniform appearance to the codes written by different
engineers. It improves readability, and maintainability of the code and it
reduces complexity also. It helps in code reuse and helps to detect error
easily. It promotes sound programming practices and increases efficiency of the
programmers." (GeeksforGeeks)

For text file, maximum line length should be 80 characters. The source files
will follow a coding standard if they belong to one of the below guidelines:

| Language | Guideline |
| --- | --- |
| C++ | <https://google.github.io/styleguide/cppguide.html> |
| Python | <https://google.github.io/styleguide/pyguide.html> |
