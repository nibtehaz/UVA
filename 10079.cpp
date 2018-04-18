/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include<math.h>
#include<string.h>


int main(void) 
{
    long long int N;
    unsigned long long int M;
    
    while(1)
    {
        scanf("%lld",&N);
        if(N<0) break;
        
        M=1+N+(N*(N-1)/2);
        printf("%llu\n",M);
    } 
    
    return 0;
}

