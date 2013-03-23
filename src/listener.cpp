#include "listener.h"
#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

void start_listener() {

	try {
	    boost::asio::io_service io_service;

	    tcp::acceptor acceptor(io_service, tcp::endpoint(tcp::v4(), LISTEN_PORT));

	    for (;;) {
	      tcp::socket socket(io_service);
	      acceptor.accept(socket);

	      std::string message = "test";

	           boost::system::error_code ignored_error;
	           boost::asio::write(socket, boost::asio::buffer(message), ignored_error);
	    }
	  }
	  catch (std::exception& e) {
	    std::cerr << e.what() << std::endl;
	  }
}



