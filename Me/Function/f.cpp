//This is the implementing file
//Code the body of the function in here

#include <string> //to use string type
#include <iostream>
#include <iomanip>
using namespace std;

double pow(double base, int exp) //pow function is first implementing function
                                 //double pow is the return type of pow function is double
                                 //double base, int exp is the type of the parameter
{
    double result = 1;
    for(int i = 0; i < exp; i++)
    	result *= base;
    return result;               //pow function return a value "result"
}

string pow(string s, int exp)    //second implementing function 
{
	string result;

	for(int i = 0; i < exp; i++)
	{
		result += s;
	}
	return result;
}
