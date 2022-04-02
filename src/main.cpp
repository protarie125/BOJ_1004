#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		double x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int n;
		cin >> n;

		auto ct = int{ 0 };
		while (0 < (n--)) {
			double cx, cy, r;
			cin >> cx >> cy >> r;

			const auto& d1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy) - r * r;
			const auto& d2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy) - r * r;

			if (d1 * d2 < 0) {
				++ct;
			}
		}

		cout << ct << '\n';
	}

	return 0;
}