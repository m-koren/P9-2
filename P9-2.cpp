#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	string str;
	while (true) {
		cout << "Enter a string here: ";
		getline(cin, str);
		if (str == "Q") {
			break;
		}
		cout << "Total Words: " << countWords(str) << endl;

	}
}

int countWords(string str) {
	int count = 0;
	bool inWord = false;
	for (int x = 0; x < str.length(); x++)
	{
		if (str.at(x) == ' ') {
			inWord = false;
		}
		else
		{
			if (!inWord) {
				count++;
				inWord = true;
			}
		}
	}
	if (str.length() == 0) {
		return 0;
	}
	return count;
}