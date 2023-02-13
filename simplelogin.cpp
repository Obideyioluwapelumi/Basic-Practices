

//simple login

/* The following program represents a simple login process. 
The user is prompted to enter his username and password. 
Subsequently, the user entries are checked. 
If they match the stored data, the user receives the message “successfully logged in”.
*/

#include <iostream>
using namespace std;

bool checkUserInput(string username, string password) {
    string pw = "123456", name = "user";

    if (username.compare(name) == 0 && password.compare(pw) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string username, password;

    cout << "Enter username: " << endl;
    cin >> username;
    cout << "Enter password: " << endl;
    cin >> password;

    if (checkUserInput(username, password)) {
        cout << "Successfully logged in";
    } else {
        cout << "Wrong username or password";
    }

    return 0;
}