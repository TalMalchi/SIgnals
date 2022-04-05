# Signals

* Written by Guy Azoulay - 207709734 
             Tal Malchi -  208278556

In this assigment we asked to built a program which will create several signals
which lead to other signals and so on,we chose to implement this assigment in CPP languge.

## Main Goal Of The Project
The main goal of this project is deep understanding of how the
world of signals actually works.

Signals are taking place in the daily life of anyone who is using computers, 
most of the time they are appearing in different ways which maybe seems
like a program was shut down or somthing else, but it turns out that this is
the computer's way to tell us that there is somthing wrong with our program.

In this program we generated 5 different signals:
* SIGCHLD - Child stopped or terminated
* SIGFPE - Floating-point exception happaning in the computer's core
* SIGABRT - abort - cause abnormal process termination
* SIGALRM - Timer signal from: set an alarm clock for delivery of a signal
* SIGUSR1 - User-defined signal 1
 
 All of the program start when SICHLD starts the process, inside the SIGCHLD
 we try to divide by zero and in that way we create more and more differnet signals.
 
## How to run

So how do we run this project?

first of all we need to compile the cpp file:
* In aim compile the signal class : g++ signal.cpp -o signal


Now we create an exe file, we simply type in the terminal "   ./signal    "
and the program will generate for us those signals.


We attaching a simple video which explain how to run this program:
 
 

https://user-images.githubusercontent.com/87694635/161815243-7633c2f7-9488-442b-9b00-e6b8913b282a.mp4


 
 
 
 
 
 
 
 
 
 
 
 

