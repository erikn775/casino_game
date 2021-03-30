#include <iostream>
#include <stdlib.h>   
#include <time.h>
#include <unistd.h>

using namespace std;

int main(){
    string name, ready;
    
    int num1, num2, num3;

    cout << "!!!!!!!!!!!Welcome!!!!!!!!!!! \n";
    cout << "Hello! What is your name: ";
    cin >> name;
    cout << name << " Are you ready to play?(Y/n) \n";
    cin >> ready;

    srand (time(NULL));
    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    num3 = rand() % 10 + 1;

    while (ready != "Y"){
        cout << "Booooooooo =/ \n";
        sleep(5);
        cout << "You ready now?(Y/n) \n";
        cin >> ready;
    }
    
    sleep(2);
    cout << "///////// " << num1 << " " << num2 << " " << num3 << " /////////\n";

    return 0;
}