#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int move,min,G[3],B[3],C[3],i;
    char ans[6][4]={"BCG","BGC","CBG","CGB","GBC","GCB"};
    
    while(scanf("%d%d%d%d%d%d%d%d%d",&B[0],&G[0],&C[0], &B[1],&G[1],&C[1], &B[2],&G[2],&C[2])!=EOF)
    {
        /*BCG*/
        {
            move=B[1]+B[2]+C[0]+C[2]+G[0]+G[1];
            min=move;
            i=0;
        }
        
        /*BGC*/
        {
            move=B[1]+B[2]+G[0]+G[2]+C[0]+C[1];
            if(min>move)
                {
                min=move;
                i=1;
                }
        }
        /*CBG*/
        {
            move=C[1]+C[2]+B[0]+B[2]+G[0]+G[1];
            if(min>move)
                {
                min=move;
                i=2;
                }
        }
        /*CGB*/
        {
            move=C[1]+C[2]+G[0]+G[2]+B[0]+B[1];
            if(min>move)
                {
                min=move;
                i=3;
                }
        }
        /*GBC*/
        {
            move=G[1]+G[2]+B[0]+B[2]+C[0]+C[1];
            if(min>move)
                {
                min=move;
                i=4;
                }
        }
        
        /*GCB*/
        {
            move=G[1]+G[2]+C[0]+C[2]+B[0]+B[1];
            if(min>move)
                {
                min=move;
                i=5;
                }
        }
        
        printf("%s %d\n",ans[i],min);
        
    }
    
                
    return 0;

}
