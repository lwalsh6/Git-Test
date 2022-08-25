/**
 * @file main.cpp
 * @author Logan Walsh
 * @date 2022-08-25
 * @brief Git test 
 * 
 * this is a test program for github
 */


#include <iostream>

using namespace std;


/**
 * Used to add up all of the numbers from 1 to a given limit
 *
 * @param int n the limit to the values
 * @return int Returns the sum of all the numbers
 * @post The numbers have all been added
 * 
 */
int sum(int n);

int main() {
  int n;
  int result;
  //Opening statement 
  cout << "Give me a number: ";
  //reads in a number
  cin >> n;
  //calls function and retrieves result variable
  result = sum(n);
  //Prints out variable
  cout << result << endl;
  return 0;
}

int sum(int n){
  int i = 0;
  //Used to retain previous i values that have already been added up
  int i2 = 0;
  for(i=0; i<=n; i++){
    //Adds up previous value by the new one
    i2 = i2+i;
  }
  //returns the full value
  return i2;
}
