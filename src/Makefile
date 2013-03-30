objects = ippx.o comms.o listener.o
headers = version.h comms.h listener.h
binary = ippx

$(binary): $(objects) 
	g++ -o $@ $(objects) -l boost_system -l pthread

$(objects): $(headers)

.PHONY: clean
clean:
	rm -f $(objects) $(binary)

