#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

int main() {

    int employeeCount;
    cout << "Enter the number of employees: ";
    cin >> employeeCount;

    Employee* employees = new Employee[employeeCount];

    for (int i = 0; i < employeeCount; i++) {
        cout << "Enter the ID for Employee " << (i + 1) << ": ";
        cin >> employees[i].ID;

        cout << "Enter the First Name for Employee " << (i + 1) << ": ";
        cin >> employees[i].FirstName;

        cout << "Enter the Last Name for Employee " << (i + 1) << ": ";
        cin >> employees[i].LastName;

        cout << "Enter the Hours Worked for Employee " << (i + 1) << ": ";
        cin >> employees[i].HoursWorked;

        cout << "Enter the Hourly Rate for Employee " << (i + 1) << ": ";
        cin >> employees[i].HourlyRate;

        cout << "\n";
    }

    cout << "Pay Report\n----------\n";

    float totalPay = 0;

    for (int i = 0; i < employeeCount; i++) {
        cout << employees[i].ID << ". " << employees[i].FirstName << " " << employees[i].LastName << ": $" << (employees[i].HourlyRate * employees[i].HoursWorked) << "\n";
        totalPay += (employees[i].HourlyRate * employees[i].HoursWorked);
    }
    cout << "Total Pay: $" << totalPay;

    (void)_getch();
    return 0;
}
