#include <iostream>
#include "header.h"

using namespace std ;
int main(){
        int num1,num2,result = 0 ;
        char oper;
        cout << "Enter your equation ex (2 + 3)\n" ;
        cin >> num1 >> oper >> num2 ;
        // TODO: add logic for calculating result
        
        if(oper == '+')
        	result = add(num1, num2);
        else if(oper == '-')
        	result = sub(num1, num2);
        else if(oper == '*')
        	result = mul(num1, num2);
        else if(oper == '/')
        	result = div(num1, num2);
        else if(oper == '%')
        	result = mod(num1, num2);
        cout << num1 << " " << oper << " " << num2 << " = " << result << endl;
        return 0 ;
}

int add(int a, int b){
        return a + b ;
}

int multiply(int a, int b) {
    return a * b;
}
