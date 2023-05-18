#include<iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    int n = a.length();
    for (int i = 0; i < n; i++)
        if (a[i] != a[n - 1 - i]) {
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;
}
