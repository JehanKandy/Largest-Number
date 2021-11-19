#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter First Number : ";
    cin >> num1;

    cout << "Enter Second Number : ";
    cin >> num2;

    cout << "Enter Third Number : ";
    cin >> num3;

    if(num1 >= num2){
        if( num1 >= num3){
            cout << "Largest Number is : " << num1;
        }else{
            cout << "Largest Number is : " << num3;
        }
    }else{
        if(num2 >= num3){
            cout << "Largest Number is : " << num2;
        }else{
            cout << "Largest Number is : " << num3;
        }
    }
    return 0;
}
