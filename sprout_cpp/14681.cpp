#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	x, y;

	cin >> x >> y;
	if (x > 0 && y > 0)
		cout << '1';
	else if (x > 0 && y < 0)
		cout << '4';
	else if (x < 0 && y < 0)
		cout << '3';
	else
		cout << '2';
	return 0;
}
