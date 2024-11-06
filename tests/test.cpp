/*
	24.10.17
*/

#include <iostream>

#include <pbrp/pbrp.hpp>

int main() {

	std::cout << "1\n";

	pbrp::GameDataUnit testunit("https://www.google.com");

	std::cout << "2\n";

	char buf[201]{};

	testunit.NetUpdate(buf, 200);
	buf[200] = 0;
	
	std::cout << buf;
	
	return 0;
}