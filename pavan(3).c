#include<stdio.h>
#include<conio.h>
#include<pthread.h>
#include<unistd.h>
void *thread1(void *arg);
void main()
{
	int n;
	printf("\n Input Thread \n");
	printf("\n----------------\n");
	printf("Enter a number: ");
	scanf("%d",&n);

	pthread_t th1;
	pthread_create(&th1,NULL,thread1,&n);
	pthread_join(th1,NULL);
	
}
void *thread1(void *arg)
{
	printf("\n Output Thread \n");
	printf("\n----------------\n");
	printf("\nThe prime numbers less than or equal to the input number is : \n");
	int *number=(int *) arg;
	int n,b,j;
	
	for(b=2;b<=*number;b++)
	{
	
 	 i=2;
 	while(b%j!=0)
  	{
  		j++;
  	}
  	
 	if(j==b)
  	{
		printf("%d\n",b) ;
		}
		
  }

}

	
