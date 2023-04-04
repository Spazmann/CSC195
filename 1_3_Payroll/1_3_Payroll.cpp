// 1_3_Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>

int main()
{
    const unsigned short MAXDAYS = 7;
    const float TAX = 0.1f;

    cout << "1_3_Payroll Hello World!\n";
    
    string name;
    unsigned short shDaysWorked = 0; // Get from user
    unsigned short hours[MAXDAYS]; // Get from user
    float fGrossPay = 0; // Pay before taxes ** Calc by total hours * wage
    float fWage = 0; // Hourly pay rate ** Get from user
    float fNetPay = 0; // Gross - Taxes
    float fTotalTaxes = 0; // Gross pay times Tax rate

    cout << "\n Enter your name: ";
    cin >> name;
    cout << "\n Enter days worked: ";
    cin >> shDaysWorked;
    cout << "\n Enter your hourly wage: ";
    cin >> fWage;

    if (shDaysWorked > MAXDAYS) shDaysWorked = MAXDAYS;

    for (int iCount = 0; iCount < shDaysWorked; iCount++) {
        cout << "\n Enter the hours worked for day " << (iCount + 1) << ": ";
        cin >> hours[iCount];
        // Calc running totals here
        fGrossPay += fWage * hours[iCount];
    }

    fTotalTaxes = fGrossPay * TAX;
    fNetPay = fGrossPay - fTotalTaxes;

    // Somewhere above calc gross, net, etc.
    cout << "\n Gross pay is: " << fGrossPay;
    cout << "\n Total Tax is: " << fTotalTaxes;
    cout << "\n Net Pay is: " << fNetPay;
    cout << "\n Pay to: " << name;


    std::cout << "\n\n ** End of Program ** \n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
