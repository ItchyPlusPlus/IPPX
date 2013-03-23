objects = ippx.o comms.o listener.o
headers = version.h comms.h listener.h
binary = ippx

MY_INCLUDE_DIRS :=
MY_LIBRARY_DIRS :=
MY_LIBRARIES := $(BOOST_SYSTEM_LIB) boost_system  boost_thread

CPPFLAGS += $(foreach includedir,$(MY_INCLUDE_DIRS),-I$(includedir))
CPPFLAGS += -Wall -g
LDFLAGS += $(foreach librarydir,$(MY_LIBRARY_DIRS),-L$(librarydir))
LDFLAGS += $(foreach library,$(MY_LIBRARIES),-l$(library))

$(binary): $(objects) 
	g++ -o $@ $(objects)

$(objects): $(headers)

.PHONY: clean
clean:
	rm -f $(objects) $(binary)

