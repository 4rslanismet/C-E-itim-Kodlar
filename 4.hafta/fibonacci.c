#include <stdio.h>


// 1 1 2 3 5 8 13 21 34 ......


int main ()
{

 int num1=1 , num2=1 , sum=0;	
 int n,i;

 printf("fibonacci dizisinin kaç elemanını yazdırmak istersiniz:");
 scanf("%d",&n);

 if(n<0)
 {
	 printf("hatalı giriş\n");
 	 return 1;
 }

 for(i=0;i<n;i++)
 {

        if(n==1)
	{ printf("%d\n",num1);}

	else if(i==0)
	{ printf("%d %d ",num1,num2);
	  if(n==2)
            return 0;

	}

	else 
	{
	 sum=num1+num2;
	 num1=num2;
	 num2=sum;
	 printf("%d ",sum);

	}


			
	                

}	

	return 0;




}
