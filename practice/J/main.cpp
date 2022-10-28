#include <iostream>

using namespace std;

int main()
{
    cout<< "ring 1 : A => C\n" << "ring 2 : A => B\n"
        << "ring 1 : C => B\n" << "ring 3 : A => C\n"
        << "ring 1 : B => A\n" << "total=5 steps\n" ;
    return 0;
}
