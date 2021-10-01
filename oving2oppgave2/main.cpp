#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i < 21; i++) {
        cout << i;
        if(i<20){
            cout << ",";
        }
    }
    cout << "\n";
    for(int i = 20; i > 0 ; i--){
        cout << i;
        if(i>1){
            cout << ",";
        }
    }

    cout << "\n" <<"[";
    for(int i = -5; i <= 5; i++){
        cout << i;
        if(i<5){
            cout << ",";
        }
    }
    cout << "]";

    cout << "\n";

    int i = 0;
    while(i<=20){
        cout << i;
        i++;
        if(i<=20) {
            cout << ",";
        }
    }

    return 0;
}
