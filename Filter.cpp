#include <iostream>
using namespace std;

class FileFilter {
public:
    virtual char transform(char ch) = 0; 
    void doFilter(string text) {
        for (int i = 0; i < text.length(); i++) {
            char encryptedChar = transform(text[i]); 
            cout << encryptedChar;
        }
        cout << endl;
    }
};

class EncryptionFilter : public FileFilter {
private:
    int key; 
public:
    EncryptionFilter(int k) { key = k; }

    char transform(char ch) {
        return ch + key; 
    }
};

int main() {
    EncryptionFilter filterObject(3); 
    
    string message;
    cout << "Enter a message to encrypt: ";
    getline(cin, message);
    
    cout << "Original: " << message << endl;
    cout << "Encrypted: ";
    
    filterObject.doFilter(message); 

    return 0;
}