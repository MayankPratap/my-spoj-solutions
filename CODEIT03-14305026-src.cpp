#include<bits/stdc++.h>
int leapcheck(int year){

if(year%400==0) return 1;
else if(year%100==0) return 0;
else if(year%4==0) return 1;
else return 0;
}
void checkday(int sum){

    if(sum==0) printf("Sunday\n");
    else if(sum==1) printf("Monday\n");
    else if(sum==2) printf("Tuesday\n");
    else if(sum==3) printf("Wednesday\n");
    else if(sum==4) printf("Thursday\n");
    else if(sum==5) printf("Friday\n");
    else if(sum==6) printf("Saturday\n");
}
int main(){

     int t;
     scanf("%d",&t);
     while(t--){


         int date,month,year,i,sum=0;
         scanf("%d %d %d",&date,&month,&year);
         int dmonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

            for(i=2012;i<year;++i){

                if(leapcheck(i)) sum+=366;
                else sum+=365;
            }
            for(i=1;i<month;++i){

                if(i==2){
                    if(leapcheck(year))
                        sum+=29;
                    else
                        sum+=28;
                }
                else
                    sum+=dmonth[i];
            } 
             sum=sum+date-11;
             sum=(sum+3)%7;
             checkday(sum);
    }
    return 0;
}
