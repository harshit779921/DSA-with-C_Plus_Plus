#include <bits/stdc++.h>
using namespace std;

void swapnum(int a[], int l, int r) {
    if (l >= r) {
        return;
    }
    swap(a[l], a[r]);
    swapnum(a, l + 1, r - 1);
}

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    swapnum(array, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
