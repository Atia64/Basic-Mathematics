#include<iostream>
using namespace std;
int main(){
int num,sum=0;
cout<<"Enter a number:";
cin>>num;
for(int i=1;i<num;i++){
    if(num%i==0){
        sum=sum+i;
    }
}
if(num==sum){
    cout<<"This number is a perfect number.";
}
else{
    cout<<"This number is not perfect number.";
}
return 0;
}
