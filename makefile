FLAGS= -Wall -Wextra -Werror -pedantic -g
OBJS=pow.o
BINS=tests

tests: tests.c  $(OBJS)
	cc -Wall -Wextra -pedantic -g -o tests tests.c $(OBJS)

pow.o:
	cc $(FLAGS) -c pow.c

clean:
	rm $(OBJS) $(BINS)
