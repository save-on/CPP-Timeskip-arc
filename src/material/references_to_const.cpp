#include <iostream>

// int main() {
//     double dval = 3.14;
//     // references change the reference into the
//     // same type if can be converted
//     const int   &ri   = dval;
//
//     return 0;
// }
// - Compiler transform dval to int using a temporary object
// and then has ri refer the temporary object

// int main() {
//     int i = 42;
//     // r1 reference is okay, r1 is mutable
//     int &r1 = i;
//     // r2 reference is okay, r2 is immutable
//     const int &r2 = i;
//
//     // i now equals 0
//     r1 = 0;
//
//     // will result in an error
//     r2 = 0; // error
//
//     return 0;
// }
