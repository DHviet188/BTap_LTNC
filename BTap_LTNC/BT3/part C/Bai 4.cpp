#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    char a[m + 2][n + 2];
    for(int i = 0; i < n + 2; i++)
        a[0][i] = '0';
    for(int i = 0; i < n + 2; i++)
        a[m + 1][i] = '0';
    for(int i = 0; i < m + 2; i++)
        a[i][0] = '0';
    for(int i = 0; i < m + 2; i++)
        a[i][n + 1] = '0';
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == '.')
                a[i][j] = '0';
        }
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] == '*')
                for(int k = i - 1; k <= i + 1; k++)
                    for(int l = j - 1; l <= j + 1; l++)
                        if(a[k][l] >= '0' && a[k][l] <= '9')
                            a[k][l] = char(a[k][l] + 1);
        }
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
