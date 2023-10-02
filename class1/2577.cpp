#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int a, b, c;
	long long result;
	int	arr[10];

	cin >> a >> b >> c;
	result = a * b * c;
	
	for (int i = 0; i < 10; i++)
		arr[i] = 0;
	
	while (result != 0)
	{
		arr[result % 10] ++;
		result /= 10;
	}
	
	for (int i = 0; i < 10; i++)
		cout << arr[i] << '\n';
	
	return 0;
}
