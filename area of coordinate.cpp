#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x1,x2,x3;
cout<<"Enter X values:";
cin>>x1>>x2>>x3;
int y1,y2,y3;
cout<<"Enter Y values:";
cin>>y1>>y2>>y3;
double A;
A=0.5*abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
cout<<"Area of Coordinates of the vertex = "<<A;
return 0;
}
