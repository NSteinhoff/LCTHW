CFLAGS=-Wall -g  # Set global compiler flags
TARGETS=$(shell ls | egrep 'ex[[:digit:]]+.c$$' | sed 's/\.c//')  # Collect targets from source files

all: ${TARGETS}

clean:
	find -E . -type f -regex '\./ex[[:digit:]]+$$' -print -delete  # Delete binaries
	find -E . -type d -regex '\./ex[[:digit:]]+\.dSYM$$' -print -exec rm -r {} +  # Delete helper files
