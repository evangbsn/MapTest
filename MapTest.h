#ifndef MapTest_h
#define MapTest_h

#include <unordered_map>
#include <map>



class MapTest
{

public:

	MapTest(unsigned int x);

	~MapTest();

	MapTest(const MapTest&) = delete;

	MapTest& operator=(const MapTest&) = delete;

	MapTest(const MapTest&&) = delete;

	MapTest& operator=(const MapTest&&) = delete;

	std::string MakeRandomKey();
	
	void GenerateUMap();

	void GenerateMap();

	void URandomAccess();

	void RandomAccess();

private:

public:

private:

	std::unordered_map<std::string, void*> generatedUMap;

	std::map<std::string, void*> generatedMap;

	std::vector<std::string> keys;

};






























#endif