//Recognize these old friends?
#include <iostream>
#include <string>
using std::cout;
using std::endl; //I'm new! endl is short for END OF LINE.
using std::string;

//Declare AND define!
int add(int a, int b){
   int result = a;
   result = result + b;
   return result;
}

//Declare
int multiply(int, int);

//Declare
float divide(int dividend, int divisor);

void main(){
   cout << "Our main() function is starting.." << endl;
   cout << "add(4,5) = " << add(4,5) << endl;
   cout << "add(1,3) = " << add(1,3) << endl;
   cout << "divide(10,2) = " << divide(10,2) << endl;
   cout << "divide(1,2) = " << divide(1,2) << endl;
   cout << "Our main() function is complete.." << endl << endl;
}

//Define
int multiply(int a, int b){
   return a * b;
}

float divide(int dividend, int divisor){
   return dividend / divisor;
}