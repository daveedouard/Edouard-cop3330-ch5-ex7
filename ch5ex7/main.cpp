/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dave Edouard
 */
#include "std_lib_facilities.h"	
#include <iostream>
using namespace std;

int main(){
	double a,b,c,xPos,xNeg,rootCheck;

  cout << "Enter the values of a, b, and c: ";
  cin >> a >> b >> c;

  rootCheck = (b*b)-(4*a*c);

  if(rootCheck>=0){
    xPos = (-b+sqrt(rootCheck))/(2*a);
    xNeg = (-b-sqrt(rootCheck))/(2*a);
    cout << "The + quadratic formula = " << xPos << " and the - quadratic formula = " << xNeg;
  }
  else error("Error");
}