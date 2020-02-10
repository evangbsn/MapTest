#include "MapTest.h"
#include <cstdio>

MapTest::MapTest(unsigned int x) :
	keys(std::vector<std::string>())
{
	keys.reserve(x);
	for (unsigned int i = 0; i < x; i++)
	{
		MakeRandomKey();
	}
}

MapTest::~MapTest()
{
}

std::string MapTest::MakeRandomKey()
{
	std::string randomKey = "";

	unsigned int rn = rand() % 4 + 7;

	for (unsigned int i = 0; i < rn; i++)
	{
		char x = rand() % 57 + 65;
		randomKey += x;
	}

	keys.push_back(randomKey);

	return randomKey;
}

void MapTest::GenerateUMap()
{
	unsigned int x = keys.size() - 1;

	for (unsigned int i = 0; i < x; i++)
	{
		generatedUMap.insert(std::pair<std::string, void*>(keys[x], 0));
	}
}

void MapTest::GenerateMap()
{
	unsigned int x = keys.size() - 1;

	for (unsigned int i = 0; i < x; i++)
	{
		generatedMap.insert(std::pair<std::string, void*>(keys[x], 0));
	}
}

void MapTest::URandomAccess()
{
	unsigned int randomIndex = rand() % (keys.size() - 1);

	for (unsigned int i = 0; i < keys.size(); i++)
	{
		randomIndex = rand() % (keys.size() - 1);
		generatedUMap.find(keys[randomIndex]);
	}

}

void MapTest::RandomAccess()
{
	unsigned int randomIndex = 0;
	
	for (unsigned int i = 0; i < keys.size(); i++)
	{
		randomIndex = rand() % (keys.size() - 1);
		generatedMap.find(keys[randomIndex]);
	}
	
}
