#include <bits/stdc++.h>

using namespace std;

string a[11];

int main()
{
    a[0]="a"; cout << "a\n";
    a[1]="b"; cout << "b\n";
    for(int i=2; i<=10; i++){
        a[i]=a[i-1]+a[i-2];
        cout << a[i] << "\n";
    }
    return 0;
}
