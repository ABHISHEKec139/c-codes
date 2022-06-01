#include<stdio.h>
main()
{
    float income,tax_rate,slab_code,tax;
    printf("enter the income and tax_rate and ");
    scanf("%f%f%f",&income,&tax_rate);
    if(income<10000)
    {
    tax=income*0;
    printf("slab_code=0");

    }
    else if(income>=10000&&income<20000)
    {
    tax=income*0.1;
    printf("slab_code=1");
    }
    else if(income>=20000&&income<30000)
    {
    tax=income*0.15;
    printf("slab_code=2");
    }
    else if(income>=30000&&income<50000)
    {
    tax=income*0.2;
    printf("slab_code=3");
    }
    else(income>=50000);
    {
    tax=income*2.5;
    printf("slab_code=4");
    }
}


