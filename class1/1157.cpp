#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

    string n;
    cin >> n;

    int arr[26];
    int max = -1;
    char result = 0;

    for (int i = 0; i < 26; i++)
        arr[i] = 0;

    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] >= 'A' && n[i] <= 'Z')
            arr[n[i] - 'A']++;
        else if (n[i] >= 'a' && n[i] <= 'z')
            arr[n[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            result = i + 'A';
        }
        else if (arr[i] == max)
            result = '?';
    }

    cout << result;

    return 0;
}