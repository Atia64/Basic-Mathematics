#include<iostream>
#include<cmath>
using namespace std;
int main(){
float root;
int nearest,n;
cout<<"Enter n number:";
cin>>n;
root=sqrt(n);
nearest=round(root);
cout<<"Integer part of the square root = "<<nearest;
return 0;
}
