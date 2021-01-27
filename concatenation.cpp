#include <iostream>
using namespace std;

int main()

{
    string firstname = "Alamin", lastname = "Arafat";
    string fullname = firstname + lastname;
    cout << fullname << endl;

    string fullname2 = firstname + " " + lastname;
    cout << fullname2 << endl;

    string fullname3 = firstname.append(lastname);
    cout << fullname3 << endl;

}
