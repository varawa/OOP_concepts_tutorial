#include <iostream>
#include <string>

using namespace std;

//FUNCTION OVERLOADING :
//Function overloading is a feature of object-oriented programming where two or more functions can have the same name but 
//different parameters.
//When a function name is overloaded with different jobs it is called Function Overloading. 
//In Function Overloading “Function” name should be the same and the arguments should be different. 
//Function overloading can be considered as an example of a polymorphism feature in C++.

class Overload{
    public:
        // Function with two integer parameters
        int add(int a, int b) {
            return a + b;
        }

        // Function with three double parameters
        double add(double a, double b, double c) {
            return a + b + c;
        }

        // Function with a string parameter
        string add(string str1, string str2) {
            return str1 + str2;
        }
};

int main() {
    Overload me;

    // Call the function with two integer parameters
    int result1 = me.add(3, 5);
    cout << "Result of adding two integers: " << result1 << endl;

    // Call the function with three double parameters
    double result2 = me.add(2.5, 3.2, 1.8);
    cout << "Result of adding three doubles: " << result2 << endl;

    // Call the function with two string parameters
    string result3 = me.add("Hello, ", "world!");
    cout << "Concatenated string: " << result3 << endl;

    return 0;
}
