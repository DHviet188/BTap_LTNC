#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j]) {
              int tmp = a[i];
              a[i] = a[j];
              a[j] = tmp;
            }
    int s = 0,tmp = 0;
    for(int i = 1; i < n; i++)
    {
        tmp += a[i - 1];
        s += tmp;
    }
    cout << s;
    return 0;
}
