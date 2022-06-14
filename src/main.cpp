#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double a, b;
	cin >> a >> b;

	auto c = static_cast<int>((a * (100 - b)) / 100);
	if (c < 100) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}