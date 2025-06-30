#include <iostream>
#include <limits>
#include <string>


using namespace std;
int main()
{

    // Operator will be stored in "oper" variable
    string oper;
    int num1;
    int num2;

    cout << "Enter the Operator (+, -, /, *): " << endl;
    cin >> oper;
    cout << "Enter the first Number: " << endl;
    cin >> num1;
    cout << "Enter the second Number: " << endl;
    cin >> num2;

    if (cin.fail())
        {
            cin.clear();                                         
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cerr << "Invalid Input! Please enter a valid number between 1 and 100." << endl;
            return 0;
        }

    if (oper == "+")
    {
        cout << "Answer: " << num1 + num2 << endl;
        cout << endl;
    }
    else if (oper == "-")
    {
        cout << "Answer: " << num1 - num2 << endl;
        cout << endl;
    }
    else if (oper == "/")
    {
        if (num2 != 0)
        {
            cout << "Answer: " << num1 / num2 << endl;
            cout << endl;
        }
        else
        {
            cout << "Error: Division by zero!" << endl;
            cout << endl;
        }
    }
    else if (oper == "*")
    {
        cout << "Answer: " << num1 * num2 << endl;
        cout << endl;
    }
    else
    {
        cout << "Invalid operator!" << endl;
        cout << endl;
    }
    main();

    return 0;
}