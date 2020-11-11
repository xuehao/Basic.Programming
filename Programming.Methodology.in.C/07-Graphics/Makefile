# Makefile for 07-Graphics
# ***************************************************************

PROGRAMS = \
    arc1 \
    arc2 \
    drawcirc \
    drawcbox \
    oneline \
    drawbox \
    house

# ***************************************************************
# Parameters to control Makefile operation
# Note that the gccx command script must be defined

CC = gcc
CFLAGS=-I${HOME}/root/include/cs -g -Wall -std=gnu11 -O3
LDLIBS=-L${HOME}/root/lib -lcs -lm

# ***************************************************************
# Entry to bring the package up to date

all: $(PROGRAMS)

# ***************************************************************
# Standard entries to remove files from the directories
#    tidy    -- eliminate unwanted files
#    scratch -- delete derived files in preparation for rebuild

tidy:
	rm -f ,* .,* *~ core a.out graphics.ps

scratch: tidy
	rm -rf *.o *.a *.dSYM $(PROGRAMS)
