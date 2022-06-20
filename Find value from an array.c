// WAP to find or identify an  array value from inside of an Array.


#include <stdio.h>
void main(){
    int a[5],i,sn,found=0;   //sn = search number,i=index

    for(i=0;i<=4;i++){

        printf("Enter the Number of index%d:",i);
        scanf("%d",&a[i]);
        };//Array sorting Done



    printf("Enter Your Number:");
    scanf("%d",&sn); //user friendly input done

    for(i=0;i<=4;i++){
        if (a[i]==sn){
        printf("%d number is in the position of index  %d",sn,i);
        found=1;
        break;
        }
    }
    if (found==0)
        printf("%d is not not found in this Array",sn);


}

