#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void countword() {
	string str;
	cin >> str;
	for (uint i = 0; i < str.length(); i++) {
		cout << tolower(str[i]) - 'a' + 1 << " ";
	}
}

int main() {
	fstream fs("wordsEn.txt", fstream::in);
	string str;
	while (fs >> str) {
		int count = 0;
		for (uint i = 0; i < str.length(); i++) {
			count += (int) (str[i] - 'a' + 1);
		}
		if (count == 100)
			cout << str << endl;
		//      else
		//	cout << "x " <<str<< " " <<count<<endl;
	}
	fs.close();
	return 0;
}
