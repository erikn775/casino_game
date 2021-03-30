#include <iostream>
#include <stdlib.h>   
#include <time.h>

using namespace std;

int main(){
    string name;
    int num1, num2, num3;

    srand (time(NULL));
    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;

    cout << "!!!!!!!!!!!Welcome!!!!!!!!!!!" << endl;
    cout << "Hello! What is your name: ";
    cin >> name;
    

    return 0;
}