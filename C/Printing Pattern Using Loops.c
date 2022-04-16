#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);   
    for(int i=n;i>=1;i--){
        for(int j=n;j>i;j--)
        {
         printf("%d ",j); 
        }
        for(int j=0;j<2*i-1;j++)
        {
         printf("%d ",i); 
        }       
        for(int j=i;j<n;j++)
        {
         printf("%d ",j+1); 
        }
         printf("\n"); 
    }
    
        for(int i=2;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
         printf("%d ",j); 
        }
        for(int j=0;j<2*i-1;j++)
        {
         printf("%d ",i); 
        }       
        for(int j=i;j<n;j++)
        {
         printf("%d ",j+1); 
        }
         printf("\n"); 
    }
      
    return 0;
}
