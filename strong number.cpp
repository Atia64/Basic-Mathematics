#include<iostream>
using namespace std;
int main(){
int num,originalnum,remainder,fact,sum=0;
cout<<"Enter a number:";
cin>>num;
originalnum=num;
while(num!=0){
    remainder=num%10;
    fact=1;
for(int i=1;i<=remainder;i++){
    fact=fact*i;
}
 sum=sum+fact;
 num=num/10;
}
if(originalnum==sum){
    cout<<"This number is strong number.";
}
else{
    cout<<"This number is not strong number.";
}
return 0;
}
