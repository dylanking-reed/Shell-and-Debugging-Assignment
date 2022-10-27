FLAGS= -Wall -Wextra -Werror -pedantic -g
OBJS=pow.o
BINS=tests point

tests: tests.c  $(OBJS)
	cc -Wall -Wextra -pedantic -g -o tests tests.c $(OBJS)

point: point.c
	cc $(FLAGS) -o point point.c 

pow.o:
	cc $(FLAGS) -c pow.c

clean:
	rm $(OBJS) $(BINS)
