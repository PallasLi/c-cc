#pragma once
#include<utility>
using namespace std;
class Collections
{
public:
	Collections();
	~Collections();
	pair<int, char*> createPair(int key,char* value);
	int printPair(pair<int, char*> p);

private:

};

Collections::Collections()
{
}

Collections::~Collections()
{
}

pair<int, char*> Collections::createPair(int key, char* value)
{
	pair<int, char*> list(key, value);
	return list;
}
int Collections::printPair(pair<int, char*> p)
{
	printf("%i", p.first);
	printf(p.second);
	return 0;
}