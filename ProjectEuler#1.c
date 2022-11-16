
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,temp1,temp2,res1,res2,res3,noOfThree,noOfFive,noOfAll;
        scanf("%lld",&n);
        temp1=temp2=n;
        if(temp1%3==0){
            temp1-=3;
        }
        else{
            while(temp1%3!=0){
                temp1--;
            }
        }
        if(temp2%5==0){
            temp2-=5;
        }
        while(temp2%5!=0){
            temp2--;
        }
        
        n--;
        while(n%5!=0 && n%3!=0){
            n--;
        }
        noOfThree=temp1/3;
        noOfFive=temp2/5;
        noOfAll=n/15;
        res1=(noOfThree*(6+(noOfThree-1)*3))/2;
        res2=(noOfFive*(10+(noOfFive-1)*5))/2;
        res3=(noOfAll*(30+(noOfAll-1)*15))/2;
        printf("%lld\n",res1+res2-res3);
    }
    
    return 0;
}
