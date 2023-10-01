#include <iostream>

using namespace std;

int	main()
{
	string arr;
	int	len_counter;

	cin >> arr;
	len_counter = 0;
	for (int i = 0; arr[i] != '\0'; i++)
		len_counter ++;
	cout << len_counter << '\n';
	return 0;
}
