#include<iostream>
int main()
{
    int size = 5;
    for (int i = 0; i< size;++i){
    for (int j =size-i; j >1; --j){
std::cout<<"";}
for (int j=0; j<=i; ++j){
    
std::cout<<"*";
}
std::cout<<"\n";
}
    return 0;
    
}