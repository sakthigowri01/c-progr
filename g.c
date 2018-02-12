 #include<stdio.h>
    #include<math.h>
    int main(){
                   int n, z, small, array[20];
                   printf(" How many Integer numbers : ");
                   scanf("%d", &n);
                   z=n;
                   if(n>0){
                   printf("\n Enter the numbers one by one : ");
                   for(;n>=1;n--)
                   scanf("%d", &array[n]);
                   small = array[1];
                   n=z;
                   for(;n>=1; n--){
                   if(small > array[n])
                   small = array[n];
                   }
    printf("\n The smallest of %d numbers is %d", z, small);
    return(0);
    }
