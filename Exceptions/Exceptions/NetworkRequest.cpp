#include <iostream>
#include "NetworkRequest.h"

bool randomBool() {
	return rand() > (RAND_MAX / 2);
}

void NetworkRequest::makeRequest(std::string url, std::string filename)
{
	std::cout << "http://" << url  << " file: " << filename << std::endl;
	if (randomBool()) {
		throw "Network not available for: " + filename;
	}
}
