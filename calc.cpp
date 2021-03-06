#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Calculator
{
private:                      //access specifier
    char operation;           //attributes
    double num1,num2, answer; //attributes

public: //access specifier
    void selection()
    {
        cout << "\n\nEnter First Number ";
        cin>> num1;

        bool operation_ready = false; // initialize bool value

        while (operation_ready == false)
        {
            cout << "Enter Operator: "; // Just incase if wrong operator
            cin>> operation;

            //conditon to validate if the input is not a operator
            if (operation != '+' && operation != '-' && operation != '*'&& operation != '/' )
            {
                 operation_ready = false;
            cout << "Please Enter a Valid Operation from the Options"<<endl;
            }
        else
        {
            operation_ready = true;
        }
        }
     cout << "Enter Second Number: ";
        cin>> num2;
        }
    double getAnswer()
    {
        switch (operation)
        {
        case '+':
            answer = num1 + num2;
            break;
            case '-':
            answer = num1 - num2;
            break;
            case '*':
            answer = num1 * num2;
            break;
            case '/':
            answer = num1 / num2;
            break;
        }
        return answer;
    }
};


void myHeader() //Method
{
    cout << "======Basic Calculator====="<<endl;
    cout << "Options" << endl;
    cout << "[+] - Addition " << endl;
    cout << "[-] - Subtraction " << endl;
    cout << "[*] - Multiplication " << endl;
    cout << "[/] - Division " << endl;
}

int main()
{
    char choice; //Do you want to re-calculate? choice
    bool ready_exit = false; // for the answerable question
    while(ready_exit == false) // loop
    {
        myHeader ();

        Calculator _calc;
        _calc.selection();

        cout<< "\nAnswer: "<< _calc.getAnswer() << endl;

        bool continue_ready = false;
        while (continue_ready == false)
        {
        cout << "\n\n Do you want to re-calculate?(Y/n N/n): ";
        cin>> choice;
        if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
            {
            continue_ready = false;
            cout << "Please Enter a valid Key from the choices only :)" << endl;
            }
            else
            {
                continue_ready = true;

                if (choice == 'Y' || choice =='y')
                {
                    ready_exit = false;
                    system("cls"); // to clear screen before using the calculator again
                }
                else
                {
                    ready_exit = true;
                }
            }
        }
    }


    system ("cls");
    system("pause");
    return 0;
}
