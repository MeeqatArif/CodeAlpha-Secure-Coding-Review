#include <iostream>
#include <string>
using namespace std;

int main()
{
    string correctUsername = "admin";
    string correctPassword = "admin123";

    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword)
    {
        cout << "\nLogin Successful!" << endl;
    }
    else
    {
        cout << "\nInvalid Username or Password!" << endl;
    }

    return 0;
}
