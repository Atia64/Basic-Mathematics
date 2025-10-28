#include<iostream>
using namespace std;
int main(){
int num1,num2,hcf,lcm;
cout<<"Enter first number:";
cin>>num1;
cout<<"Enter second number:";
cin>>num2;
int a=num1;
int b=num2;
while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
}
hcf=a;
lcm=(num1*num2)/hcf;
cout<<"HCF IS: "<<hcf<<endl;
cout<<"LCM IS: "<<lcm<<endl;
return 0;
}
