#include<stdio.h>
#include<math.h>
//Improved assesment-q1 to input 20 numbers using while and count.
int main()
{
    int x ,sqno, i, m;
printf("Enter an integer as count: \n");
scanf("%d", &m);
printf("Enter the %d integers: \n", m);
for( i = 1; i <= m; i = i + 1){
    printf("Enter a number:");
    scanf("%d",&x);
    sqno=x*x;
    printf("The given number is %d and square of the given number is %d\n",x,sqno);
    }
    printf("\n");
    //the system time
     time_t ti;
    time(&ti);
printf("The system time: %s", ctime(&ti));
//mac address to be displayed
    system("getmac");
	getch();
	return 0;
}





