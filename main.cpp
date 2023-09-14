//
//  main.cpp
//  p4-2
//
//  Created by Jakob Hammond on 9/14/23.
//

#include <iostream>
using namespace std;

int main(void){
    double number1;
    double number2;
    double number3;
    double largestNumber;
    
    cout << "Please enter three numbers: ";
    cin >> number1 >> number2 >> number3;
    
    //check if number1 is the largest
    if(number1 > number2 && number1 > number3){
        largestNumber = number1;
    }
    //check if number2 is the largest
    else if(number2 > number1 && number2 > number3){
        largestNumber = number2;
    }
    //check if number3 is the largest
    else if(number3 > number2 && number3 > number1){
        largestNumber = number3;
    }
    cout << "The largest number is " << largestNumber << endl;
}
