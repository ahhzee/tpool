.PHONY: clean

example: tpool.c example.c
	gcc $^ -o $@ -pthread

clean:
	rm example
