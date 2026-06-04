#include<iostream>
#include<string>
using namespace std;

class Account{
private:
    string username;
    string Bio;
    int post = 0;
    bool isprivate = false;
    int  follower = 98;
    int following = 168;
public:
    Account(){
        cout << "Account is Public!!" << endl;
    }

    void  follow(){
        following++;
    }

    void gainfollower(){
        follower++;
    }

    void addFollower(int amount){
        if(amount < 0){
            cout << "Follower cannot be negative" << endl;
        }
        else{
        follower += amount;
    }
}
    void addFollowing(int followingnumber){
        if(followingnumber < 0){
            cout << "Following cannot be negative!!" << endl;
        }
        else{
        following += followingnumber;
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
        Bio = b;
    }

    string getUsername(){
        return username;
    }

    string getBio(){
        return Bio;
    }

    void showprofile(){
        cout << "Username: " << username << endl;
        cout << "Bio: " << Bio << endl;
        cout << "Posts: " << post << endl;
        cout << "Following: " << following << endl;
        cout << "Followers: " << follower << endl;
        cout << "Account Type: " << (isprivate ? "Private" : "Public") << endl;
        }
};

int main(){
    int  amount = 90 , number = 78;
    Account A1;
    A1.setUsername("Raffaysheikh07");
    A1.addFollower(amount);
    A1.addFollowing(number);
    A1.setPrivacy(false);
    A1.setBio("Student | BSCS | Coder\nLahore | Pakistan");
    A1.showprofile();
}