# This is a Makefile
# It automates build tasks for C (and other languages) easily

# Tell make that the targets test and clean are abstract (not actual files)
.PHONY : test clean

# Default target: this is executed if nothing else is specified
# As written, this descends into subdirectories src and test
# and executes "make" in those directories, respectively
all:
	$(MAKE) -C src/
	$(MAKE) -C test/

# test target: this is executed upon a "make test"
test: 
	$(MAKE) -C test/ test

# clean target: this is executed upon a "make clean"
clean:
	$(MAKE) -C src/ clean
	$(MAKE) -C test/ clean
