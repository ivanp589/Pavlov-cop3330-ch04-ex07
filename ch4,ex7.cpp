#include<iostream>
#include<stdio.h>
#include<cstring>
#include <string>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ivan Pavlov
 */

//chapter 4, ex 7
//Write a program that performs as a very simple calculator. Your calculator 
//should be able to handle the four basic math
//operations — add, subtract, multiply, and divide — on two input values. 
//Your program should prompt the user to enter
//three arguments: two double values and a character to represent an operation. 
//If the entry arguments are 35.6, 24.1, and
//'+', the program output should be The sum of 35.6 and 24.1 is 59.7. 
//In Chapter 6 we look at a much more sophisticated simple calculator

double calculator(char value1[],char value2[],char operation[]);
double convert(char value[]);

using namespace std;
int main(){
	char value1[10],value2[10], op[10];
	double output;
	cout << "Please input a value: ";//<<endl;
	cin >> value1;
	cout << "Please input another value: ";//<< endl;
	cin >> value2;
	cout << "Please enter an operation: ";
	cin >> op;
	
	output = calculator(value1,value2,op);
	
	if(output == -999){
		cout << "The input was invalid sorry";
	}else cout << output;
	
	
	return 0;
}

double calculator(char value1[10],char value2[10],char operation[10]){
	
	double first = convert(value1);
	double second = convert(value2);
	
		if(operation[0] == '*' || operation[0]== 'm' || operation[0] =='M'){
			//multiply
			return first * second;
		}
		else if(operation[0] == '+' || operation[0]== 'a' ||
		 operation[0] =='A' || operation[0] =='p'|| operation[0] =='P'){
			//add
			return first + second;
		}
		else if(operation[0] == '-' || operation[0]== 's'|| operation[0] =='S'){
			//subtract
			return first - second;
		}
		else if(operation[0] == '/' || operation[0]== 'd' || operation[0] =='D'){
			//divide
			return first/second;
		}
		else return -999;
}


double convert(char value[10]){
	if(value[0] >= 48 && value[0] <= 57){
		return stoi(value);
	}
	
	else if(value[0] == 'o' || value[0] == 'O'){
		return 1;
	}
	else if(value[0] == 't' || value[0] == 'T'){
		if(value[1] == 'e' || value[1] == 'E'){		//check for ten
			return 10;
		}
		else if(value[1] == 'h' || value[1] == 'H'){//check for three
			return 3;
		}
		else return 2;						//check for two
	}
	else if(value[0] == 'f' || value[0] == 'F'){
		if(value[1] == 'i' || value[1] == 'I'){		//check for five
			return 5;
		}
		else return 4;								//check for four
	}
	else if(value[0] == 's' || value[0] == 'S'){
		if(value[1] == 'e' || value[1] == 'E'){//check for seven
			return 7;
		}
		else return 6;								//check for six
	}
	else if(value[0] == 'e' || value[0] == 'E'){
		return 8;
	}
	else return 9;
	
	
	
}




