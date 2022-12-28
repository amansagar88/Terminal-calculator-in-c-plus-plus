#include <iostream>
using namespace std;
#include <conio.h>
#include <math.h>

int Add(int num)
{
    float sum = 0, number;
    for (int i = 1; i <= num; i++)
    {
        cout << "Enter the " << i << " number: ";
        cin >> number;
        sum += number;
        cout << "The Sum is " << sum << endl;
    }
    cout << "The answer is " << sum << endl;
    cout << "----*----*----*----*----*----*----*----*----*----*----*----*----*" << endl
         << endl;
}

int mul(int num)
{
    float ans = 1, number;
    for (int i = 1; i <= num; i++)
    {
        cout << "Enter the " << i << " number: ";
        cin >> number;
        ans *= number;
        cout << "The Sum is " << ans << endl;
    }
    cout << "The answer is " << ans << endl;
    cout << "----*----*----*----*----*----*----*----*----*----*----*----*----*" << endl
         << endl;
}

int Calculation()
{
    int choice, num;
    while (true)
    {
        cout << "1. Calculation" << endl;
        cout << "2. Advance calculation" << endl;
        cout << "3. Quit" << endl;
        cout << "Choose what you want to do from the list and enter the number coressponding to your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            while (true)
            {
                int C2;
                cout << "1. Addition" << endl;
                cout << "2. Substraction" << endl;
                cout << "3. Division" << endl;
                cout << "4. Multiplication" << endl;
                cout << "5. Go back to Main Menu" << endl;
                cout << "6. Quit the program" << endl;
                cout << "Enter the number coressponding to the opration you want to do: ";
                cin >> C2;
                if (C2 == 5)
                {
                    Calculation();
                }
                else if (C2 == 1)
                {
                    int num;
                    float sum;
                    cout << "How many number you want to add: ";
                    cin >> num;
                    Add(num);
                }
                else if (C2 == 2)
                {
                    float a, b;
                    cout << "Enter the first number: " << endl;
                    cin >> a;
                    cout << "Enter the second number: " << endl;
                    cin >> b;
                    if (a > b)
                    {
                        cout << "The substraction of " << a << " and " << b << " is: " << a - b << endl;
                        cout << "----*----*----*----*----*----*----*----*----*----*----*----*----*" << endl
                             << endl;
                    }
                    else if (b > a)
                    {
                        cout << "The substraction of " << b << " and " << a << " is: " << b - a << endl;
                        cout << "----*----*----*----*----*----*----*----*----*----*----*----*----*" << endl
                             << endl;
                    }
                    else
                    {
                        cout << "The substraction of " << a << " and " << b << " is: 0" << endl;
                        cout << "----*----*----*----*----*----*----*----*----*----*----*----*----*" << endl
                             << endl;
                    }
                }
                else if (C2 == 3)
                {
                    float a, b;
                    cout << "Enter the first number: " << endl;
                    cin >> a;
                    cout << "Enter the second number: " << endl;
                    cin >> b;
                    cout << "The Division of " << a << " and " << b << " is: " << a / b << endl;
                    cout << "----*----*----*----*----*----*----*----*----*----*----*----*----*" << endl
                         << endl;
                }
                else if (C2 == 4)
                {
                    int num;
                    cout << "How many numbers you want to multiply: " << endl;
                    cin >> num;
                    mul(num);
                }
                else if (C2 == 6)
                {
                    exit(1);
                }
                else
                {
                    cout << "You have entered the number " << C2 << " out of choice" << endl
                         << "Try again" << endl;
                }
            }
        }
        else if (choice == 2)
        {
            while (true)
            {
                int C2;
                cout << "1. Power of a number." << endl;
                cout << "2. Square root of a number." << endl;
                cout << "3. Go back to Main Menu." << endl;
                cout << "4. Quit the program" << endl;
                cout << "Enter the number coressponding to the opration you want to do: ";
                cin >> C2;
                if (C2 == 1)
                {
                    float a, b;
                    cout << "Enter the base number: ";
                    cin >> a;
                    cout << "Enter the power number: ";
                    cin >> b;
                    cout << "The " << b << " times of the number " << a << " is: " << pow(a, b) << endl;
                    cout << "----*----*----*----*----*----*----*----*----*----*----*----*----*" << endl
                         << endl;
                }
                else if (C2 == 2)
                {
                    float a;
                    cout << "Enter the base number: ";
                    cin >> a;
                    cout << "The square root of the number " << a << " is " << sqrt(a) << endl;
                    cout << "----*----*----*----*----*----*----*----*----*----*----*----*----*" << endl
                         << endl;
                }
                else if (C2 == 3)
                {
                    Calculation();
                }
                else if (C2 == 4)
                {
                    exit(1);
                }
            }
        }
        else if (choice == 3)
        {
            exit(1);
        }
        else
        {
            cout << "You have entered the number " << choice << " out of choice" << endl
                 << "Try again" << endl;
        }
    }
}

int main()
{
    Calculation();
    getch();
}