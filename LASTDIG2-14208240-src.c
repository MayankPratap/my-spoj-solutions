int power(int base,int expo)
{if(expo==0) return 1;
 if(expo%2==0){
        int m=power(base,expo/2); return m*m;
  }
    return  base*power(base,expo-1);
}
int main(){
int t;
scanf("%d",&t);
while(t--){
char a[1005];
long long int b;
int rem;
scanf("%s %lld",a,&b);
int len=strlen(a);
if(b==0)
printf("1\n");
else if(a[len-1]=='0'||a[len-1]=='1'||a[len-1]=='5'||a[len-1]=='6')
printf("%d\n",(int)a[len-1]-48);
else if(a[len-1]=='2'||a[len-1]=='3'||a[len-1]=='7'||a[len-1]=='8'){
rem=b%4;
printf("%d\n",(power((int)a[len-1]-48,rem))%10);
}
else if(a[len-1]=='4'||a[len-1]=='9'){
rem=b%2;
printf("%d\n",(power((int)a[len-1]-48,rem))%10);
}
}
return 0;
}
