#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num,originalnum,remainder,n=0;
double result=0.0;
cout<<"Enter a number:";
cin>>num;
originalnum=num;
while(originalnum!=0){
    originalnum=originalnum/10;
    n++;
}
originalnum=num;
while(originalnum!=0){
    remainder=originalnum%10;
    result=result+pow(remainder,n);
    originalnum/=10;
}
if((int)result==num){
    cout<<num<<"is an armstrong number."<<endl;
}
else{
cout<<num<<"is not armstrong number."<<endl;
}
return 0;
}

