// 01_Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "01_Week Hello World!\n";

    int iVal1 = -1;
    short shVal2 = 0;
    int iVal3 = 42;
    float fVal = 34;
    char chVal = 'a';
    fVal = 3.14f;

    std::cout << "iVal1 = ";
    std::cout << iVal1 << " address = " << &iVal1;
    std::cout << "\nshVal2 = " << shVal2 << " address = " << &shVal2;

    std::cout << "\n\n ****** Size of int = " << sizeof(iVal1);
    std::cout << "\n\n ****** Size of short = " << sizeof(shVal2);

    int* iPtr = NULL; //Into iPrt var
    iPtr = &iVal1; // Set pointer to address of variable
    char* myCharPointer = (char*)iVal1;

    *iPtr = 18; // Change value of location pointed to
    std::cout << " value pointed to by iPtr = " << *iPtr; //Value that iPtr points to
    std::cout << "\n Value of iPtr = " << iPtr; //value insode of var IPtr
    std::cout << "\n address of iPtr is " << &iPtr;

    //std::cout << "\n\n |||||| Some values is " << *(iPtr + 12);
    //std::cout << "\n strange stuff = " << *(myCharPointer + 12);

    //  Below is heap stuff
    char* cTemp = NULL;
    cTemp = (char*) malloc(20); // 20 bytes of Heap
    memset(cTemp, NULL, 20);
    // Do stuff
    free(cTemp);



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
