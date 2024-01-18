#include <iostream>

int main()
{
    using namespace std;

    int hourlyWage;
    int oneYearSalary;

    cout << "What is the hourly wage?" << endl;
    cin >> hourlyWage;

    oneYearSalary = hourlyWage * 40 * 50;

    cout << "Annual salary is: " << oneYearSalary << endl;

    return 0;
}