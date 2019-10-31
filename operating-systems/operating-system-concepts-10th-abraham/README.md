# Operating system concepts, 10th Edition
"Operating systems are an essential part of any computer system. Similarly,
a course on operating systems is an essential part of any computer science
education. This field is undergoing rapid change, as computers are now prevalent
in virtually every arena of day-to-day life - from embedded devices in
automobiles through the most sophisticated planning tools for governments and
multinational firms. Yet the fundamental concepts remain fairly clear, and it
is on these that we base this book." (page vii)

## Content of this book
+ **Overview**. Chapters 1 and 2 explain what operating systems are, what they
do, and how they are designed and constructed.
+ **Process management**. Chapters 3 through 5 describe the process concept and
concurrency as the heart of modern operating systems.
+ **Process synchronization**. Chapters 6 through 8 cover methods for process
synchronization and deadlock handling.
+ **Memory management**. Chapters 9 and 10 deal with the management of main
memory during the execution of a process.
+ **Storage management**. Chapters 11 and 12 describe how mass storage and I/O
are handled in a modern computer system.
+ **File system**. Chapters 13 through 15 discuss how file systems are handled
in a modern computer system. File systems provide the mechanism for online
storage of and access to both data and programs.
+ **Security and protection**. Chapters 16 and 17 discuss the mechanisms
necessary for the security and protection of computer systems. The processes in
an operating system must be protected from one another's activities.
+ **Advanced topics**. Chapters 18 and 19 discuss virtual machines and
networks/distributed systems.
+ **Case studies**. Chapter 20 and 21 present detailed case studies of two real
operating systems - Linux and Windows 10.

## Commit message
The title of a commit message must contain a prefix "osc: ch{xx}:", which is an
abbreviation for **O**perating **S**ystem **C**oncepts and the chapter number.
It is encouraged to provide informative messages. The "Signed-off-by" must be
included at the end of the commit message. For example:
```
osc: ch01: Provide all answers for intro exercises

This commit provides solutions for exercises from 1.1 to 1.27. The
chapter 1 introduces some basic concepts and small topics related to
operating system:
+ Computer-system organization, e.g. interrupts, storage, I/O
+ Computer-system architecture, e.g. single-processor vs multiprocessor
+ The purpose of operating system, e.g resource management
+ Virtualization
+ Kernel data structures
+ Computing environment, e.g. mobile, client-server, P2P, cloud
+ Closed-source vs Open-source operating system

Signed-off-by: Hieu Vu <hieutrgvu@gmail.com>
```

## How to check the answers
+ `.txt` file: use any editor or reader programs to view the content
+ For a single `.c` file, compile and run it to check its result:
```
$ gcc -o {name}.c {name}.out
$ ./{name}.out
```

