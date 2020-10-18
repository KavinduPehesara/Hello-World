#include<stdio.h>
int main()
{
    int hourno;
    double pay,rpay,opay,gpay;
    printf("Number of hours worked:\n");
    scanf("%d",&hourno);
    printf("Rate of pay:\n");
    scanf("%lf",&pay);
    if(hourno<=40){
            rpay=hourno*pay;
            opay=0;
    }
    else
    {
        rpay=40*pay;
        opay=(hourno-40)*rpay*1.5;
    }
    gpay=rpay+opay;
    printf("Regular pay:%f\n",rpay);
    printf("Overtime pay:%f\n",opay);
    printf("Gross pay:%f\n",gpay);
}
