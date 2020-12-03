#include <iostream>
using namespace std;
int main()
{
    
    int password;
    int affordableAmount = 0;
    int retry;
    cout << "Write new password: " << endl;
    cout << "WARNING!\n Dont write password like 000000 or 100000\n write only that password, where will be 6 numbers" << endl;
    cin>>password;
    cout << password % 5 << endl;
    if (password % 5 > 0 && password % 5 < 10) {

        cout << "Write password again: " << endl;
        cin >> retry;
        if (password == retry) {
           cout << "Hello!" << endl;
        }
        else {
            cout << "It isnt" << endl;
            while (affordableAmount < 3) {
                cin >> retry;
                if (retry == password) {
                    cout << "that one is right" << endl;
                    break;
                }
                else {
                    affordableAmount++;
                }

            
            }
        }

    }
    else if(password%100000 < 0 || password%100000>10) {
        cout << "invalid syntax" << endl;
    }
    return 0;
}
