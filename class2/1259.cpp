#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	string	n;
	int		len;

	while (cin >> n)
	{
		if (n == "0")
			break ;
		else
		{
			len = 0;
			for (int i = 0; n[i]; i++)
				len ++;
			if (len == 1)
				cout << "yes" << '\n';
			else
			{
				for (int i = 0; i < (len / 2); i++)
				{
					if (n[i] != n[len - i - 1])
					{
						cout << "no" << '\n';
						break ;
					}
					else if (i == (len / 2) - 1)
						cout << "yes" << '\n';
				}
			}
		}
	}
	return 0;
}
/*
	틀린이유:
	숫자 한자리만 적을경우 출력이 안되었다.
	예외처리 꼭 확인 할 것!
*/