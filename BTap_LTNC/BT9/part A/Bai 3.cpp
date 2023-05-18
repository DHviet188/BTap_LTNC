#include <iostream>

using namespace std;

int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // s? d?ng l?nh delete v?i 1 con tr? không ph?i du?c c?p phát d?ng, c?n ph?i xóa a
    cerr << "a after deleting c:" << "-" << a << "-" << endl; // Sau khi th?c hi?n l?nh delete c, con tr? a tr? d?n m?t vùng nh? dã b? gi?i phóng nên s? không ki?m soát du?c
}
