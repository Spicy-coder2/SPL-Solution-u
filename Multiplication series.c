 #include <stdio.h>
 void main()
 {  int x,z=0,n,i,sum=0;    //Here x , z, n,i Indicate Eventually = Expected input Number , Multiplication, i for loop sequence , n is for Limit.
    float floatMult, floatSum;

 printf("Enter the Number for Multiplication : ");
    scanf("%d",&x);
    printf("Enter the Maximum Limit Of nth :");
    scanf("%d",&n);

            //First Programme Solution

            while(i<=n){
    z=x*i;
    printf("%d*%d=%d\n",x,i,z);
    sum+=z;
    i++;
}
    printf("Sum of all multiplication : %d\n\n",sum);

/*
   for(i=0;i<=n;i++){
        z = i*x;
        printf("%d*%d=%d\n",x,i,z);
        sum+=z;
    }

printf("Sum of the Multiplication Sequence:%d",sum);


      //  I have been fall in some implementation problem in this code, please sir suggest me the answer thank you*/



    //Second Programme Solution ->

    z=0;
    sum=0;

   for(i=0;i<=n;i++){
        z = i*x;
        printf("%d*%d=%d\n",i,x,z);
        sum+=z;
    }

    printf("Here's The sum of Multiplication : %d\n\n",sum);


    //Third Programme Solution



    for(i=1;i<=n;i++)
    {
    floatMult=(float)x*1/i;

    printf("%d*1/%d=%.2f\n",x,i,floatMult);

    floatSum+=floatMult;
    }
printf("Sum of all quotient is : %.2f\n",floatSum);

}

/*
        Name : Lamim Rahman
        ID : 221010003
        Batch : 11

*/
