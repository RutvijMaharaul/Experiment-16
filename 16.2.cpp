//Program-2
#include<iostream>
#include<cmath>
using namespace std;

int main() 
{
    double num, result;
    cout << "Enter a number: ";
    cin >> num;

    try 
      {
        if(num < 0) 
        {
            throw num;   // Throwing invalid input
        } 
        else 
        {
            result = sqrt(num);
            cout << "Square root of " << num << " = " << result << endl;
        }
    }
    catch(double n) 
      {
        cout << "\nERROR: Cannot calculate square root of negative number (" << n << ")" << endl;
    }

    return 0;
}
