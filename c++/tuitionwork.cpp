#include <iostream>
using namespace std;

int main()
{
     
    float math, sci, eng, sst, hin, sum, avg ;
    cout << "enter your math marks :" << endl;
    cin>> math;
    cout<< "enter your sci marks :" << endl;
    cin>> sci;
    cout<<"enter your eng marks :" <<endl;
    cin>>eng;
    cout<<"enter your sst marks :" <<endl;
    cin>>sst;
    cout<<"enter your hin marks :" <<endl;
    cin >> hin;
    sum = math+sci+eng+sst+hin;
    avg = sum/5;
    cout << "total marks of all sub =" << sum << endl;
    cout<< "total marks of avg ="<< avg << endl; 

}