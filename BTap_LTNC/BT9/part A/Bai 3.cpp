#include <iostream>

using namespace std;

int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // s? d?ng l?nh delete v?i 1 con tr? kh�ng ph?i du?c c?p ph�t d?ng, c?n ph?i x�a a
    cerr << "a after deleting c:" << "-" << a << "-" << endl; // Sau khi th?c hi?n l?nh delete c, con tr? a tr? d?n m?t v�ng nh? d� b? gi?i ph�ng n�n s? kh�ng ki?m so�t du?c
}
