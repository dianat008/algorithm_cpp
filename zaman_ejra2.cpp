#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  clock_t start = clock();
  // your code...
  int n;
  cin >> n;
  long long int s = 0;
  for (int i = 0; i < n; i++)
      s = s + i;
  if(abs(s) < n-5) cout << s << endl; // dead code
  clock_t finish = clock();
  cout << (double)(finish - start) / (double)(CLOCKS_PER_SEC) << "\n";
}
