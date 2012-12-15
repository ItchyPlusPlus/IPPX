objects = func.o main.o
headers = func.h
binary = ippx

$(binary): $(objects) 
	g++ -o $@ $(objects)

$(objects): $(headers)

.PHONY: clean
clean:
	rm -f $(objects) $(binary)

