#include<iostream>
#include<string>
using namespace std;

class Account{
private:
    string username;
    string bio;
    int post = 0;
    bool isprivate = false;
    int  follower = 0;
    int following = 0;
public:
    Account(){
        cout << "Account privacy:" << isprivate << endl;
    }

    void addFollower(int amount = 1){
        if(amount < 0){
            cout << "Follower cannot be negative" << endl;
        }
        else{
        follower += amount;
    }
}
    void addFollowing(int number = 1){
        if(number < 0){
            cout << "Following cannot be negative!!" << endl;
        }
        else{
        following += number;
    }
}
    void setPrivacy(bool privacy){
        isprivate = privacy;
    }
    void setUsername(string u){
        if(u.empty()){
            cout << "Username cannot be empty!!" << endl;
        }
        else{
        username = u;
    }
}
    void setBio(string b){
        bio = b;
    }

    string getUsername(){
        return username;
    }

    string getBio(){
        return bio;
    }

    void showprofile(){
        cout << "Username: " << username << endl;
        cout << "Bio: " << bio << endl;
        cout << "Posts: " << post << endl;
        cout << "Following: " << following << endl;
        cout << "Followers: " << follower << endl;
        cout << "Account Type: " << (isprivate ? "Private" : "Public") << endl;
        }
};

int main(){
    
    Account A1;
    A1.setUsername("Raffaysheikh07");
    A1.addFollower(65);
    A1.addFollowing(32);
    A1.setPrivacy(false);
    A1.setBio("Student | BSCS | Coder\nLahore | Pakistan");
    A1.showprofile();
}