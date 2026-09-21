// 3. Write a code that will input for two numbers. Compute and display for the sum, difference, product, and quotient.

#include <iostream>
using namespace std;

int main() 
{
    int num_1, num_2, sum, dif, pro, quo;

    cout << "Enter the first number: ";
    cin >> num_1;
    cout << "Enter the second number: ";
    cin >> num_2;
    
    sum = num_1 + num_2;
    dif = num_1 - num_2;
    pro = num_1 * num_2;
    quo = num_1 / num_2;
    
    cout << endl << "Results --------------------" << endl;
    cout << "Sum         :  " << sum << endl;
    cout << "Difference  :  " << dif << endl;
    cout << "Product     :  " << pro << endl;
    cout << "Quotient    :  " << quo << endl;

    return 0;
}
