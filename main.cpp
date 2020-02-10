#include "MapTest.h"
#include <iostream>
#include <chrono>

int main()
{
	unsigned int size = 10000000;
	
	MapTest mt(size);

	std::chrono::time_point<std::chrono::steady_clock> before = std::chrono::high_resolution_clock::now();

	mt.GenerateUMap();

	std::chrono::time_point<std::chrono::steady_clock> after = std::chrono::high_resolution_clock::now();

	std::cout << size << " Unordered Map Inserts Took: " << 
		std::chrono::duration<double>(after - before).count() << "s" << std::endl;

	before = std::chrono::high_resolution_clock::now();

	mt.GenerateMap();

	after = std::chrono::high_resolution_clock::now();

	std::cout << size << " Map Inserts Took: " <<
		std::chrono::duration<double>(after - before).count() << "s" << std::endl;

	before = std::chrono::high_resolution_clock::now();

	mt.URandomAccess();

	after = std::chrono::high_resolution_clock::now();

	std::cout << size << " Unordered Map Random Accesses Took: " <<
		std::chrono::duration<double>(after - before).count() << "s" << std::endl;

	before = std::chrono::high_resolution_clock::now();

	mt.RandomAccess();

	after = std::chrono::high_resolution_clock::now();

	std::cout << size << " Map Random Accesses Took: " <<
		std::chrono::duration<double>(after - before).count() << "s" << std::endl;


	return 0;
}