#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios::sync_with_stdio(false);

  long long n, m, b, result_len, result_time, temp_time, temp_high_b, temp_low_b;
  cin >> n >> m >> b;
  int arr[n * m];

  for (int i = 0; i < n * m; i++)
    cin >> arr[i];

  result_len = 0;
  result_time = 999999999;

  for (int i = 256; i >= 0; i--) {
    temp_high_b = 0;
    temp_low_b = 0;
    temp_time = 0;
    for (int x = 0; x < n * m; x++) {
      if (arr[x] != i) {
        if (arr[x] > i)
          temp_high_b += arr[x] - i;
        else if (arr[x] < i)
          temp_low_b += i - arr[x];
      }
    }
    if (temp_high_b + b >= temp_low_b) {
      temp_time = temp_high_b * 2 + temp_low_b;
      if (result_time > temp_time) {
        result_len = i;
        result_time = temp_time;
      }
    }
  }
  cout << result_time << " " << result_len;
  return 0;
}

    

}
