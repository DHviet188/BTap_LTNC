#include <iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in d?a ch? c?a x t?i d�y
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   cout << &y;
   // in d?a ch? c?a y t?i d�y
}
int main()
{
   f(7);
   g(11);
   return 0;
} 
//2 bi?n c� c�ng d?a ch? 
//v? tr� c?a stack frame cho h�m f khi n� ch?y tr�ng v?i v? tr� c?a h�m g khi n� du?c g?i (d?u b?t d?u tr�n d?nh stack c?a h�m main), c? hai h�m f v� g c�ng c� 1 tham s? ki?u int, c�ng ki?u tr? v?, x v� y c�ng l� bi?n d?a phuong d?u ti�n c?a h�m, do d� kh? nang l?n l� tr�nh bi�n d?ch x?p x v� y ? c�ng m?t d?a ch?.
