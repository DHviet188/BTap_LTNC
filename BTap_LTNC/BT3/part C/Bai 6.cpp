#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n] = {};
    int y = n /2;
    int x = 0;
    for (int i = 1; i <= n * n; i++) {
        if (a[x][y] == 0) 
            a[x][y] = i;
        else {
            x += 2;
            y--;
            if (x >= n)
                x -= n;
            if (y < 0)
                y += n;
            a[x][y] = i;
        }
        x--;
        y++;
        if (x < 0) 
            x += n;
        if (y >= n)
            y -= n;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}
