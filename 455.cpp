#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

    char str[10005];
    int n;

int stringcheck(int k);

int main()
{
    int t,m,i,j,k,l,test,tp;

    scanf("%d",&t);

    for(tp=0;tp<t;tp++)
    {
        if(tp!=0) printf("\n");
        scanf("%s",str);
        n=strlen(str);

        if(n<2) {printf("%d\n",n); continue;}
        for(i=1;i<n;i++)
        {
            k=i+1;
            if(str[i]==str[0])
            {
                test=stringcheck(k-1);

                if(test==1) {k--; break;}
                else  continue;
            }
        }

        printf("%d\n",k);
    }

    return 0;
}


int stringcheck(int k)
{
    int i,j;
    int test=1;

    if(n%k!=0) return 0;

    for(i=0;i<n;i=i+k)
    {
        for(j=0;j<k;j++)
        {
            if(str[i+j]==str[j]) continue;

            else {test=0; break;}
        }
    }

    return test;

}


