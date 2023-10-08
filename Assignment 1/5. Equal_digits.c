//WAP to print the no. within 10 to 1000 where digit of no. are equal.
#include<stdio.h>
int main(){
    int i,unit_dig,tens_dig;
    for(i=10;i<=1000;++i){
        unit_dig=i%10;
        tens_dig= i/10;
        while(tens_dig>0){
            if(tens_dig%10!=unit_dig){
                break;
            }
            tens_dig=tens_dig/10;    
        }
        if(tens_dig==0){
            printf("%d ",i);
        }
    }
}