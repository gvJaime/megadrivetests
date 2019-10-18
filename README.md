# MegaDrive tests

## Description

This is a collection of unpurposed tests that seek exploring the Sega MegaDrive SGDK potential.

## Compiling

As I work exclusively in linux, this is done using [kubilus1's gendev toolchain](https://github.com/kubilus1/gendev), that conveniently packages [Stephane-D's SGDK](https://github.com/Stephane-D/SGDK) for the gcc toolchain.

For the sake of consistency and to elliminate dependencies, here are links to [my personal fork of SGDK](https://github.com/gvJaime/SGDK), [and GENDEV](https://github.com/gvJaime/gendev).

### Installing GENDEV

There are instructions in the original repo, but it didn't work right away for me. Here's what worked for me:
* Acquire root privileges.
* Clone the Gendev repo into ```/opt/gendev```.
* Go to the terminal and into that folder, and ```make install```.
* Open ```~/.bashrc``` and write ```export GENDEV=/opt/gendev/build``` at the end of the file.

### Building a project

* Go into the project folder
* Use this command, which you can hopefully copy and paste: 
	* ```make -f $GENDEV/sgdk/mkfiles/makefile.gen clean all```