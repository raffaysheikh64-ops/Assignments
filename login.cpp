#include<iostream>
#include<string>
using namespace std;

int main(){

    string username = "Raffaysheikh07";
    string userPassword = "doctor strange";
    string userEmail = "raffaysheikh64@gmail.com";
    string password , name, email;
    int choice, attempt = 0;
    bool loginSuccess = false;

    cout << "Enter your choice: " << endl;
    cout << "1.Login through username." << endl;
    cout << "2.Login through Email." << endl;
    cin >> choice;
    cin.ignore();

    switch(choice){
    case 1:
    while(attempt < 3){
        cout << "enter name: ";
        getline(cin,name);
        cout << "Enter Password: ";
        getline(cin,password);
        if(username == name && userPassword == password){
            cout << "Hello " << username << "!" << endl;
            loginSuccess = true;
            break;
        }
        else{
            cout << "Wrong username and password!! try again" << endl;
            attempt++;
        }
        
    }

    break;

    case 2:
    while(attempt < 3){
        
        cout << "Enter Email: ";
        getline(cin,email);
        cout << "Enter password: ";
        getline(cin,password);
        if(userEmail == email && userPassword == password){
            cout << "Hello " << username << "!" << endl;
            loginSuccess = true;
            break;
        }
        else{
            cout << "Wrong username and password!! try again" << endl;
            attempt++;
        }
    }
    break;
    
    default:
    cout << "Invalid Choice!!" << endl;
    return 1;
    }

if(loginSuccess){
    cout << "Login sucessfull!! Hello " << username << endl;
}
else{
    cout << "Account locked. Too many incorrect attempts." << endl;
}

return 0;

}
