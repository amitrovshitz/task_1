
int count(int num)
{ 
      int count=0;
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

    int rev(int num,int rev_num)
{
    if (num == 0)
     return rev_num; 
    rev_num = (rev_num * 10) + (num % 10);
    return rev(num / 10, rev_num);
}

int isPalindrome(int num)
{
    return (rev(num,0)-num)==0;
}

int pow_1(int num ,int b)
{  int sum=1;
    for(int i=1;i<=b;i++)
    sum*=num;
    return sum;

}

int isArmstrong_1(int num,int sum,int p)   
{                          
                                
  if(sum==0 && num==0)      
  return 1;
  else if(sum<0|| num==0)
  return 0;  
  int _digit= num%10;
   num=num/10;
  int x=pow_1(_digit,p);
    sum=sum-x;
  return isArmstrong_1(num,sum,p);
}
int isArmstrong(int num_1)
{  int c=count(num_1);
    return isArmstrong_1(num_1,num_1,c);
}

