#include "whatever.hpp"

using std::cout;
using std::endl;
using std::string;


int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

//int main (void) {
//    string a = "bb";
//    string b = "aaaa";
////    cout << "a: " << a << " b: " << b << endl;
////    ::swap(a,b);
////    cout << "a: " << a << " b: " << b << endl;
//
//    cout << "a: " << a << " b: " << b << endl;
//    cout << "max( a, b ) = " << *::max( &a, &b ) << endl;
//    cout << "min( a, b ) = " << *::min( &a, &b ) << endl;
//
//
//}