//
//  main.cpp
//  MathCalculation
//
//  Created by Alicia Dale on 2/25/16.
//  Copyright © 2016 Alicia Dale. All rights reserved.
//

#include <iostream>

using namespace std;

void displayMenu()
{
    cout<< "*****************"<< endl;
    cout << "\t Math on two numbers "<< endl;
    cout << "Programmer: Alicia Dale " << endl;
    cout << "This program asks the user to input first number, math operator, and second number." << endl;
    cout << "Enter A to add two numbers. " << endl;
    cout << "Enter S to subtract two numbers. " << endl;
    cout << "Enter M to multiply two numbers. " << endl;
    cout << "Enter D to divide two numbers. " << endl;
    cout << "Enter U to find modulus of two numbers. " << endl;
    cout << "Enter H to display help menu. " << endl;
    }

void addNumbers(int N1, int N2)
{
    int answer;
    answer = N1 + N2;
    cout << "The sum of two numbers = " << answer << endl;
}

void subtractNumbers(int N1, int N2)
{
    int answer;
    answer = N1 - N2;
    cout << "The difference of the two numbers = " << answer << endl;
}

void multiplyNumbers(int N1, int N2)
{
    int answer;
    answer = N1 * N2;
    cout << "The product of the two numbers = " << answer << endl;
}

void divideNumbers(int N1, int N2)
{
    int answer;
    answer = N1 / N2;
    cout << "The dividend of the two numbers = " << answer << endl;
}

void remainderNum(int N1, int N2)
{
    int answer;
    answer = N1 % N2;
    cout << "The remainder of the two numbers = " << answer << endl;
}







void addNumbers();

void subtractNumbers();

void multiplyNumbers();

void divideNumbers();

void reaminderNum();

int main(int argc, const char * argv[]) {
 
    displayMenu();
    
    
    //Declare Variables
    int firstNum, secNum;
    char mathOper;
    
    //Prompt the user the enter first number
    cout << "Please enter first number: \a\a" ;
    
    //Read first number
    cin >> firstNum ;
    
    //Prompt the user to enter math operator and read to console
    cout<< "Please enter math operator(A,S,M,D,U,& H): \a\a" ;
    cin >> mathOper ;
    mathOper = toupper(mathOper);
    
    //Prompt the user to enter 2nd number and read to console
    cout << "Please enter second number: \a\a" ;
    cin >> secNum ;
    
    //Use switch case to check math operator
    switch (mathOper)
    {
        case 'A':
            addNumbers(firstNum,secNum);
            break;
            
        case 'S':
            subtractNumbers(firstNum, secNum);
            break;
            
        case 'M':
            multiplyNumbers(firstNum,secNum);
            break;
            
        case 'D':
            divideNumbers(firstNum, secNum);
            break;
            
        case 'U':
            remainderNum(firstNum, secNum);
            break;
            
        case 'H':
            displayMenu();
            break;
         
        default:
            displayMenu();
            break;
            
    
    }
    
    
    
    
    
    return 0;
}
