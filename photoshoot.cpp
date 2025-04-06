#include <cassert>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
	int cow_num;
	string cows;
	std::cin >> cow_num >> cows;
	assert(cows.size() == cow_num && cow_num % 2 == 0);

	int flips = 0;
	for (int c = cow_num - 2; c >= 0; c -= 2) {
		string sub = cows.substr(c, 2);
		if (sub[0] == sub[1]) { continue; }
		if ((sub == "GH" && flips % 2 == 0) || (sub == "HG" && flips % 2 == 1)) {
			flips++;
		}
	}

	cout << flips << endl;
}