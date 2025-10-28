//Program-1
#include<iostream>
using namespace std;

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter array index (0-4): ";
    cin >> index;

    try 
      {
        if(index < 0 || index >= 5) 
        {
            throw index;   // Throwing invalid index
        } 
        else 
        {
            cout << "Value at index " << index << " = " << arr[index] << endl;
        }
    }
    catch(int i) 
      {
        cout << "\nERROR: Invalid array index " << i << endl;
    }

    return 0;
}
