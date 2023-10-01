#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	double	a, b;
	cin >> a >> b;
	cout.precision(10);
	cout << a / b << '\n';
	return 0;
}
