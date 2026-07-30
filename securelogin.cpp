#include <iostream>
#include <string>
using namespace std;

int main()
{
    string correctUsername = "admin";
    string correctPassword = "admin123";

    string username, password;

    int attempts = 3;

    while (attempts > 0)
    {
        cout << "\nRemaining Attempts: " << attempts << endl;

        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if (username.empty() || password.empty())
        {
            cout << "Username and Password cannot be empty.\n";
            continue;
        }

        if (username == correctUsername && password == correctPassword)
        {
            cout << "\nLogin Successful!" << endl;
            return 0;
        }

        attempts--;

        if (attempts > 0)
            cout << "\nInvalid Username or Password!\n";
    }

    cout << "\nAccount Locked! Too many failed login attempts." << endl;

    return 0;
}