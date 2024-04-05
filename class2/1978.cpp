#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	n, count;
	cin >> n;
	int	arr[n];
	count = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1 || arr[i] == 0)
			continue;
		else if (arr[i] == 2)
			count ++;
		else
		{
			for (int x = 2; x <= 100 && x < arr[i]; x++)
			{	
				if (arr[i] % x == 0)
					break;
				else if (x + 1 >= arr[i] || x == 100) // 이 부분에서 x == 100을 추가 안하여 100이상의 소수를 인식 못함
					count ++;
			}
		}
	}
	cout << count << '\n';
	return 0;
}
/*
	오답 이유 위에 주석으로 적어둠, 예외처리를 확실하게 확인해둘것!
*/