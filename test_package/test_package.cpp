#include <boost/beast.hpp>

int main() {
	// io_service was renamed to io_context in Boost 1.66, make sure we have the right dependency
	boost::asio::io_service ios;
	return 0;
}
