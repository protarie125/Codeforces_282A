#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto x = int{ 0 };
	for (int i = 0; i < n; ++i) {
		string line;
		cin >> line;

		if (line.npos != line.find("++")) {
			x += 1;
		}
		else {
			x -= 1;
		}
	}

	cout << x;

	return 0;
}