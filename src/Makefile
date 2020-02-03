# auto generated makefile by satch
# 2010. 04. 27. (ȭ) 20:33:50 KST

.SUFFIXES : .c .o

PKGS_INCS = -I../libtdk/include -I../libpadd
PKGS_LIBS = -L../../lib

DEBUG := ${TDK_DEBUG}
INC = ${PKGS_INCS}
override LIBS += ${PKGS_LIBS} -lpadd
override CFLAGS += -L. $(INC) $(DEBUG) ${PKGS_INCS} -lpthread
TARGET = ../../bin/termstat
SRCS = \
	./main.c \

OBJS = \
	./main.o \

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

clean :
	rm -rf $(OBJS) $(TARGET) ./core
