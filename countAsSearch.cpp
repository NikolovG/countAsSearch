#include<iostream>
#include<map>

using namespace std;


void printMap(map<int, double> M) {
	for (auto itr : M) {
		cout << itr.first << " : " << itr.second;
	}  // Print out any map
}

int main(){
	string notes = "Pineapple";
	map<string, int> map1; 
	map1["Pineapple"] = 42;

	if (map1.count(notes) == 1) { // count() returns bool value, is search tool
		cout << "Key has been found!" << endl;
		cout << "Value to key is : " << map1[notes] << endl;
	}

	return 0;
}