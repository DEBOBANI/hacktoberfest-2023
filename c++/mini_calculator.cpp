// Takes two integer operands and one operator form the user, performs the operation and the user,
//performs the operation and then prints the result

# include <iostream>
using namespace std;

int main() 
{
    char op;
    float num1, num2;
    cout << "Enter operator: +, -, *, /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(op) 
    {

        case '+':
            cout <<  num1 + num2;
            break;

        case '-':
            cout <<  num1 - num2;
            break;

        case '*':
            cout <<  num1 * num2;
            break;

        case '/':
            cout <<  num1 / num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
