#pragma once
#include <iostream>

class Resource {
public:
	int m_data[100];

	Resource() {
		std::cout << "Resource constructed" << std::endl;
	}
	~Resource() {
		std::cout << "Resource destroyed" << std::endl;
	}
};