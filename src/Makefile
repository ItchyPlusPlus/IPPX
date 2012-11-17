objects = main.o
headers = 
binary = ippx

$(binary): $(objects) 
	g++ -o $@ $(objects) `pkg-config --cflags --libs cairo` `sdl-config --cflags --libs`

$(objects): $(headers)

.PHONY: clean
clean:
	rm -f $(objects) $(binary)

