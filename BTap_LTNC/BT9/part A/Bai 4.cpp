#include <iostream>

using namespace std;

int main() {
int a = 10;
int* p = &a;
delete p; // gi?i phóng con tr? p
// sau khi gi?i phóng con tr? p, vùng nh? mà nó tr? t?i (d?a ch? c?a bi?n a) s? b? gi?i phóng.
// d?a ch? c?a bi?n a là không xác d?nh s? d?n t?i 1 só l?i
return 0;
}
