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
 * @return int the sum of all the numbers
 * @post The numbers have all been added
 *
 */
int sum(int n);

/**
 * Used to multiply up all of the numbers from 1 to a given limit
 *
 * @param int n the limit to the values
 * @return int the product of all the numbers
 * @post The numbers have all been multiplied
 *
 */
int product(int n);

int main() {
  int n;
  int result;
  int result2;
  //Opening statement
  cout << "Give me a number: ";
  //reads in a number
  cin >> n;
  //calls functions and retrieves result variables
  result = sum(n);
  result2 = product(n);
  //Prints out variables
  cout << "Sum: " << result << endl;
  cout << "Product: " << result2 << endl;
  return 0;
}

int sum(int n){
  int i = 0;
  //Used to retain previous i values that have already been added up
  int i2 = 0;
  for(i=1; i<=n; i++){
    //Adds up previous value by the new one
    i2 = i2+i;
  }
  //returns the full value
  return i2;
}

int product(int n){
  int i;
  //Used to retain previous i values that have already been added up
  int i3 = 1;
  for(i=1; i<=n; i++){
    //multiplies up previous value by the new one
    i3 = i3*i;
  }
  //returns the full value
  return i3;
}
