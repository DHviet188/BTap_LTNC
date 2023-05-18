#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	double tb = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		tb += a[i];
	}
	sort(a,a+n);
	cout << "Mean: " << tb/n << '\n' << "Max: " << a[n - 1] << '\n' << "Min: " << a[0];
	return 0; 
}
