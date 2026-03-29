#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c;
float S,A;
cout<<"Enter three sides of triangle:";
cin>>a>>b>>c;
S=(a+b+c)/2;
cout<<"S = "<<S<<endl;
A=sqrt(S*(S-a)*(S-b)*(S-c));
cout<<"Area of triangle:"<<A;
return 0;
}



