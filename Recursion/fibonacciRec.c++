#include <bits/stdc++.h>
using namespace std;

// Normal method

// int main()
// {
//   int n;
//   cin >> n;
//   if (n == 0)
//   {
//     cout << 0;
//   }
//   else if (n == 1)
//   {
//     cout << 0 << " " << 1 << "\n";
//   }
//   else
//   {
//     int fib[n + 1];
//     fib[0] = 0;
//     fib[1] = 1;
//     for (int i = 2; i <= n; i++)
//     {
//       fib[i] = fib[i - 1] + fib[i - 2];
//     }
//     cout << "The Fibonacci Series up to " << n << "th term:" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//       cout << fib[i] << " ";
//     }
//   }
// }

// using recursion

int fibonacci(int n)
{
  if (n <= 1)
  {
    return n;
  }

  int last = fibonacci(n - 1);
  int slast = fibonacci(n - 2);

  return last + slast;
}

int main()
{
  int n;
  cin >> n;
  cout << fibonacci(n) << endl;
}