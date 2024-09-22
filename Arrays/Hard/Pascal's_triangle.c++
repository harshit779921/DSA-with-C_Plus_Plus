#include <bits/stdc++.h>
using namespace std;

// Variation 1
// In this case, we are given the row number r and the column number c, and we need to find out the element at position (r,c).

// int nCr(int n, int r)
// {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// int pascalTriangle(int r, int c)
// {
//     int element = nCr(r - 1, c - 1);
//     return element;
// }

// int main()
// {
//     int r = 5; // row number
//     int c = 3; // col number
//     int element = pascalTriangle(r, c);
//     cout << "The element at position (r,c) is: "
//          << element << "n";
//     return 0;
// }

// Variation 2
// Our first observation regarding Pascal’s triangle should be that the n-th row of the triangle has exactly n elements. With this observation, we will proceed to solve this problem.

// void pascalTriangle(int n)
// {
//     long long ans = 1;
//     cout << ans << " "; // printing 1st element

//     // Printing the rest of the part:
//     for (int i = 1; i < n; i++)
//     {
//         ans = ans * (n - i);
//         ans = ans / i;
//         cout << ans << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }

// Variation 3
// The naive approach is basically a combination of variation 1 and variation 2. Here, for every row from 1 to n, we will try to generate all the row elements by simply using the naive approach of variation 2. So, we will use the same code as variation 2(naive approach), inside a loop (i.e. row runs from 1 to n).

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}