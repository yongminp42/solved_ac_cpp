#include <iostream>

using namespace std;

int	main()
{
	int	n, v, result;
	cin >> n;

	int	arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	cin >> v;
	result = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == v)
			result ++;
	}
	cout << result << '\n';
	return 0;
}
