#include<iostream>
#include<string>
using namespace std;
 
  int main (){
    double marks;
    cout<<"enter your marks:";
    cin >> marks;
    string  result = (marks>=40)?"passed":
                                "failed";
   cout <<"you"<<result<<"the exam";
    return 0;
  }
  