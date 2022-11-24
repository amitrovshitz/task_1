
int isPrime(int num)
{    if (num-1==0)
return 1;
    if(num<2)
    return 0;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}
 
 int isStrong(int num)
 {   int current_digit=0;
      int same_name=num;
    int sum=0;
    if(num==0)
    sum=1;
    while(num!=0)
    {
     current_digit=num%10;
     if(current_digit==0)
     sum+=1;
     int sum_digit=1;
     for(int i=1;i<=current_digit;i++)
     {
       sum_digit*=i;
     }
     sum+=sum_digit;
     num/=10;
    }
    if(sum==same_name)
    return 1;
    return 0;
 }

