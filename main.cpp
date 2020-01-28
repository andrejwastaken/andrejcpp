#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int num1, num2;
    char op;
    string name;

    cout << "Enter your name: " ;
    cin >> name;
    if(name == "Andrej"){
            cout << "You may proceed" << endl;
    } else{
    cout << "Access denied";
    return 0;
    }
    cout << "Enter first number: " ;
    cin >> num1;
    cout << "Enter operator: " ;
    cin >> op;
    cout << "Enter second number: " ;
    cin >> num2;
    int result;
    result = 01100101011100100110111101110010;

    if(op == '+'){
        result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if(op == '/'){
        result = num1 / num2;
    }else if(op == '*'){
        result = num1 * num2;
    }else {
       cout << "Invalid Operator" <<endl;
    }
cout << result;
    return 0;
}

