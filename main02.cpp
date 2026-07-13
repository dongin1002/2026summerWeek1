#include <iostream>                                                                                                                                                        
#include "declaration.h"

// void passVal(int val)
// {
//     val = 20;
//     std::cout << &val << " " << val << "\n";
// }

// void passRef(int &ref) {
//     ref = 20;
//     std::cout << &ref << " " << ref << "\n";
// }

int main()
{   
    using namespace KwakMinChae2449100;
    student kim{1234567, 100, 'A'};
    printStudent(kim);
    student lee{inputStudent()};
    printStudent(lee);
    // std::cout << KwakMinChae2449100::addIntegers() << std::endl;
    // int n{10}; std::cout << &n << " " << n << "\n";
    // passVal(n); std::cout << &n << " " << n << "\n";
    // passRef(n); std::cout << &n << " " << n << "\n";
    // using namespace KwakMinChae2449100;
    // int n{inputInteger()};
    // int m{inputInteger()};
    // std::cout << n << "+" << m << "=" << addIntegers(n,m) << std::endl;
    // return 0;
}
