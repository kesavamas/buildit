#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int low,high;
    scanf("%d %d",&low,&high);
    int res = 0;
    for(int i = low;i <= high;i++){
        res += i;
    }
    printf("%d",res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}