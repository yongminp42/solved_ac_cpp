#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	n;

	cin >> n;
	for (int i = 1; i <= 9; i++)
		cout << n <<" * "<< i << " = " << n * i << '\n';
	return 0;
}
