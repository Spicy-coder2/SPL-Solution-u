//WAP that can that can implement the sequence of fibonacci. where user input two initial value and user can find the nth term of series.

#include <stdio.h>
void main()

{ int a,b,c,i,limit;

    printf("Enter the First Number:");
    scanf("%d",&a);
    printf("Enter the Last Number:",&b);
    scanf("%d",&b);
    printf("Enter the Limit:");
    scanf("%d",&limit);

    //while(i<limit)

    for(i=0;i<limit;i++){

        c = a+b;
        printf("%d\n",c);
        a=b;
        b=c;


    }

}
