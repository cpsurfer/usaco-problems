#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> flowers(n);
	for (int &f : flowers) { cin >> f; }

	int valid_photos = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			// find the average petal # in the range i - j
			double avg_petals = 0;
			for (int f = i; f <= j; f++) { avg_petals += flowers[f]; }
			avg_petals /= j - i + 1;

			for (int index = i; index <= j; index++) {
				if (flowers[index] == avg_petals) {
					// we found an average flower
					valid_photos++;
					break;
				}
			}
		}
	}

	cout << valid_photos << endl;
}