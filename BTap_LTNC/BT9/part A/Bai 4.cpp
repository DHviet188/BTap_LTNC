#include <iostream>

using namespace std;

int main() {
int a = 10;
int* p = &a;
delete p; // gi?i ph�ng con tr? p
// sau khi gi?i ph�ng con tr? p, v�ng nh? m� n� tr? t?i (d?a ch? c?a bi?n a) s? b? gi?i ph�ng.
// d?a ch? c?a bi?n a l� kh�ng x�c d?nh s? d?n t?i 1 s� l?i
return 0;
}
