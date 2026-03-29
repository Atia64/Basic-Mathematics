#include<iostream>
#include<cmath>
using namespace std;
int main(){
float a,b,c;
double pi=3.1416;
cout<<"Enter three sides:";
cin>>a>>b>>c;
double A,B,C;
A=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
B=acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
C=acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));

//radian degree
A=((A*180)/pi);
B=((B*180)/pi);
C=((C*180)/pi);
cout<<"Angle of A = "<<A<<endl;
cout<<"Angle of B = "<<B<<endl;
cout<<"Angle of C = "<<C<<endl;
return 0;
}

