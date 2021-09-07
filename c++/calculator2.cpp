#include <iostream>
using namespace std;
int main()
{
    char op ;
    float num1, num2, num3;
    cout << "enter + :"<<endl;
    cin >> op;
    cout << "enter your 1st no :"<<endl;
    cin >> num1;
    cout << "enter your 2nd no : "<<endl;
    cin>> num2;
    cout << "enter your 3nd no : " <<endl;
    cin>> num3;
    switch (op)
  { case '+':
      cout << num1 << "+" << num2 <<"+"<< num3 <<"=" << num1+num2+num3 ;
      break;
       default:
            // If the operator is other than +, error message is shown
            cout << "Error! operator is not correct";
            break; }
}