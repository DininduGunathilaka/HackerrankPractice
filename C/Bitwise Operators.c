#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int maxand=0;
int k;
void calculate_the_maximum(int n, int k) {
int maxand=0;
int maxor=0;
int maxxor=0;
  for(int i=1;i<n;i++){   
      for(int j=i+1;j<=n;j++){
        (maxand<(i&j))&&((i&j)<k)?(maxand=(i&j)):(maxand=maxand);
        (maxor<(i|j))&&((i|j)<k)?(maxor=(i|j)):(maxor=maxor);
        (maxxor<(i^j))&&((i^j)<k)?(maxxor=(i^j)):(maxxor=maxxor);
      }   
      
  }
 printf("%d \n",maxand);
 printf("%d \n",maxor);
 printf("%d \n",maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
