# Simple Shell
![Holberton logo](https://camo.githubusercontent.com/04a8a9a456b8ecafad2eb4f2cff6803cd0194496/687474703a2f2f7777772e686f6c626572746f6e7363686f6f6c2e636f6d2f686f6c626572746f6e2d6c6f676f2e706e67)
---
This is a simple UNIX command interpreter based on bash and sh.
---

## Abstract

This example of shell run into GNU/Linux environment, and was written in C language, and execute basic programs for command interpreter, like ls.

#### what is a shell

>Simply put, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. In the old days, it was the only user interface available on a Unix-like system such as Linux. Nowadays, we have graphical user interfaces (GUIs) in addition to command line interfaces (CLIs) such as the shell.
[linuxcommand.org](http://linuxcommand.org/lc3_lts0010.php)

In linux the shell is the most "basic" (the basic only have the name) and most powerful program because can execute a admin services like graphics, and sound, in my personal experience when you install Arch-Linux you learn and view the power of the shell, where you config much parameters, before you install the graphical user interface, even her is execute in the shell.



---

![shell banner](/Resources/hsh.png)

---

# First steps
Steps for use and test this shell.
### 1. Clone repo
Clone this repo for downloads all resources.
```bash
$ git clone https://github.com/Cris-Mur/simple_shell.git
```
### 2. Compile resources
using this comand or execute this script
```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
or
```bash
$ ./compile.sh
```
### 3. Execute this shell
```bash
$ ./hsh
```
### 4. Enjoy
Type your first command and anymore commands.
```bash
$ ls
add_envi_end.c  AUTHORS  compile.sh  error_msg.c  getname.c  handler.c  _itoa.c  _mkbuffer.c   print_vari.c  Resources  shell.h    _strcopy.c  _strlen.c add_vari_end.c  born.c   envars.c    getcont.c    halo.h     hsh        Main.c   print_envi.c  README.md     shell.c    _strcmp.c  _strdup.c   zelda.h
```
![GIF TERMINAL IMGUR](https://i.imgur.com/ehzmrh3.gif?noredirect)

---
## Authors
* **Cristian A. Murcia T.** - [Cris-Mur](https://github.com/Cris-Mur/)
* **Michael O. Cocuy G.** - [TzStrikerYT](https://github.com/TzStrikerYT)
