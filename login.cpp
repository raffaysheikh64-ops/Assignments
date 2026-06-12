#include<iostream>
#include<string>
using namespace std;

class Login {
    private:
    string username;
    string userPassword;
    string userEmail;
    int maxAttempt;
    public:
    Login(){
        username = "Raffaysheikh07";
        userPassword = "Doctor strange";
        userEmail = "raffaysheikh64@gmail.com";
        maxAttempt = 3;
    }

    bool authenticate(){
        int choice, attempt = 0;
        string inputID, inputPassword;
        cout << "Enter your choice:" << endl;
        cout << "1.Login by username." << endl;
        cout << "2.Login by Email." << endl;
        cin >> choice;
        cin.ignore();

        if(choice != 1 && choice != 2){
            cout << "Invalid Choice!!" << endl;
            return false;
        }
        
        while (attempt < maxAttempt){
            if(choice == 1){
                cout << "Enter username: ";
            }else{
                cout << "Enter Email: ";
            }
        
        getline(cin,inputID);

        cout << "Enter Password: ";
        getline(cin,inputPassword);

        if(choice == 1 && inputID == username && inputPassword == userPassword){
            return true;
        }
    else if(choice == 2 && inputID == userEmail  && inputPassword == userPassword){
            return true;
        }
        else{
            attempt++;
            cout << "Wrong details are given, try again!! Attempt left: " << maxAttempt - attempt << endl;
        }
    }
    return false;

    }
};
    int main(){

        Login user1;
        if(user1.authenticate()){
            cout << "Login successful!! Welcome Back." << endl;
        }else {
            cout << "Account locked. Too many incorrect attempts!!" << endl;
        }

        return 0;
    }




