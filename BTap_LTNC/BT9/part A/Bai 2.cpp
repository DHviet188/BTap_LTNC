#include <iostream>

using namespace std;

int main(){
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    *p2 = 100;
    cout << *p2; // l?i do p2 du?c tr? d?n p d� b? x�a b? nh? 
    delete p2;
}
