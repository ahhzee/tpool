.PHONY: clean

example: tpool.c example.c
	gcc $^ -o $@ -pthread -DDE_BUG

clean:
	rm example
