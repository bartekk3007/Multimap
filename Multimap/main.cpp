#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<int, string> stringMap;

	stringMap.insert({1, "jeden"});
	stringMap.insert({2, "dwa"});
	stringMap.insert({2, "dwojka"});
	stringMap.insert({2, "dwojeczka"});
	stringMap.insert({3, "trzy"});
	stringMap.insert({3, "cztery"});

	auto range = stringMap.equal_range(2);

	for (auto i = range.first; i != range.second; i++)
	{
		cout << i->first << ' ' << i->second << '\n';
	}

	return 0;
}