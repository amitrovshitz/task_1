int count(int num)
{   int count=0;
if(num==0)
{
    return 1;
}
    while(num!=0)
    {
    count++;
    num/=10;
    }
   return count;
}
int isPalindrome(int num)
{ 
    int current_num=0;
     int num_1=num;
     int i=10;
    if(num%10==0)
    return 0;
    while(num_1!=0)         
    {
        int z=num_1%10;
        current_num=current_num*i+z;
        num_1/=10;
    }
    if(current_num==num)
    {
        return 1;
    }
    return 0;

}
int isArmstrong(int num)
{  
    int sum_digit=1;
    int sum=0;
    int count_digit=0;
    int num_1=num;
    int num_2=num; 
    while(num_1!=0)
    {
        count_digit++;
        num_1/=10;
    }
    while(num_2!=0)
    {     int digit=num_2%10;
        for(int i=1;i<=count_digit;i++)
        {
          sum_digit*=digit;
        }
        sum+=sum_digit;
        sum_digit=1;
        num_2/=10; 
    }
    if(sum==num)
    {
    return 1;
    }
    return 0;
}
