#include <iostream>
using namespace std;

int main()
{
    const int number = 20;
    cout << number << endl;

    ///number = 25;  -> This line will show error. constant number can not change twice.
    cout << number;


    return 0;
}
