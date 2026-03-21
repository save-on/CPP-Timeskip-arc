#include <iostream>
// - pointer to const may not be used to change the object
// to which the pointer points;
// int main() {
//     const double pi = 3.14;
//     // will cause an error only const to const
//     double *ptr = &pi;
//     // Is legal syntax
//     const double *cptr = &pi;
//     // will cause an error
//     *cptr = 42;
//     return 0;
// }

// in the case of let's say a variable
// double dval = 3.14;
// switching pointer cptr to
// cptr = &dval;
// would be legal syntax
// although you now cant change the value of dval

// int main() {
//     double dval = 3.14;
//     std::cout << "dval before: " << dval << '\n';
//     const double *cptr = &dval;
//     std::cout << "*cptr before: " << *cptr << '\n';
//
//     // the object itself can be changed, and that change
//     // reflects to the const pointer
//     dval = 4.67;
//
//     std::cout << "*cptr after: " << *cptr << '\n';
//     std::cout << "dval after: " << dval << '\n';
//
//     return 0;
// }
//

int main() {
    // pointers are objects. Which means they themselves
    // can be const. Although it must be initialized.
    int i = 102;
    // - will always point to i
    int *const       pI  = &i;
    const int *const cpI = pI;

    return 0;
}
