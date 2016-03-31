#include <iostream>
#include <string> // so we can use the string ADT

using namespace std;

int main()
{
  // this next line declares a variable of type int
  // after declaring a variable, we never have to precede it with the data type again (int in this case)
  int whole_number;
  
  // whole_number is defined as an int already, so now we can assign it a value
  whole_number = 15;
  
  // we can change the value of our variable any time now!
  whole_number = 32;
  
  // let's print out the value contained in whole_number!
  cout << whole_number << endl;
  
  // now let's declare a decimal number
  float decimal_number = 1.532;
  
  // and print it out!
  cout << decimal_number << endl;
  
  // and a boolean
  bool is_true_or_false = true;
  
  cout << is_true_or_false << endl;
  
  // in C++ true = 1, false = 0
  is_true_or_false = false;
  
  cout << is_true_or_false << endl;
  
  // let's declare a character
  char a_char = 'k';
  
  cout << a_char << endl;
  
  // and a string of characters!
  string mystring = "Hello there!";
  
  cout << mystring << endl;
  
  return 0;
}
