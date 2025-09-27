#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0;i < 10;i++){
        printf("%d x %d = %d\n",n,i + 1,n * (i + 1));
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}