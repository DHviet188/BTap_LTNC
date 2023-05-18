#include <iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in d?a ch? c?a x t?i dây
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   cout << &y;
   // in d?a ch? c?a y t?i dây
}
int main()
{
   f(7);
   g(11);
   return 0;
} 
//2 bi?n có cùng d?a ch? 
//v? trí c?a stack frame cho hàm f khi nó ch?y trùng v?i v? trí c?a hàm g khi nó du?c g?i (d?u b?t d?u trên d?nh stack c?a hàm main), c? hai hàm f và g cùng có 1 tham s? ki?u int, cùng ki?u tr? v?, x và y cùng là bi?n d?a phuong d?u tiên c?a hàm, do dó kh? nang l?n là trình biên d?ch x?p x và y ? cùng m?t d?a ch?.
