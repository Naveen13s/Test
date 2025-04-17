//Break and Continue.
#include<iostream>
using namespace std;

int main(){
    int pocketMoney=3000;
    for(int date=1;date<=30;date++){
        
        if(date%2==0){
            continue;  //Continue statement is used to skip to the next iternatioon of loop.
        }
        if(pocketMoney==0){
            break; // break statement is used to terminate a loop.
        }
        cout<<"Go Out today!"<<endl;
        pocketMoney=pocketMoney-300;
    }
    

    return 0;

   
    
}




// Skip the digit which is divisible by 6 upto 100.
#include<iostream>
using namespace std;

int main(){
    
    for(int i = 0; i<100; i++){
        if(i%3==0){
            continue; //Continue statement is used to skip to the next iternatioon of loop.

        }
        cout<<i<<endl;
    }

    return 0;

   
    
}


// Check the number given by user is prime or not.
#include<iostream>
using namespace std;

int main(){
   
   int n;
   cin>>n;
   int i;
   for(i=2;i<n;i++){
       if(n%i==0){
           cout<<"Non Prime Number"<<endl;
           break;
       }
   }
   if(i==n){
       cout<<"Prime number"<<endl;
   }

    return 0;

   
    
}



// Find all prime number between a and b.
#include<iostream>
using namespace std;

int main(){
   
   int a,b;
   cin>>a>>b;
   
   for(int num=a;num<=b;num++){
       int i;
       for(i=2;i<num;i++){
           if(num%i==0){
               break;
           }
       }
       if(i==num){
           cout<<num<<endl;
       }
   }
    

    return 0;

   
    
}