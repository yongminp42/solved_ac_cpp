#include <iostream>

using namespace std;

int	main()
{
	string arr;

	cin >> arr;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] -= 32;
		else if (arr[i] >= 'A' && arr[i] <= 'Z')
			arr[i] += 32;
	}
	cout << arr << '\n';
	return 0;
}
