#include<iostream>
using namespace std;

int main() {
    int number;  // for inpur any value 
   string result; // to check +ve , -ve , and zero 
    cout << "Enter any number: ";
    cin >> number;

    // Ternary to check if the number is positive, negative or zero
  result = (number > 0) ? "Positive" : (number < 0) ? "Negative" : "Zero";
		cout << "The number is: " << result << endl;
 return 0;
}

