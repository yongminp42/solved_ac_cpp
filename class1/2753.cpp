#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	years;

	cin >> years;
	if (years % 4 == 0 && years % 100 != 0)
		cout << '1';
	else if (years % 400 == 0)
		cout << '1';
	else
		cout << '0';
	return 0;
}
