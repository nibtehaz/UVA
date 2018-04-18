#include<stdio.h>
#include<string.h>

int main()
{
    char field[105][105],inp,result[105][105];
    int Case=0,bomb,i,j,n,m,cnt;  /*n=row  m=colomn */

    for(;;)
    {
        scanf("%d %d",&n,&m);


        if((n==0)||(m==0)) break ;

        else

        {
            Case++;

            for(i=0;i<n;i++)
                scanf("%s",field[i]);



            for(i=0;i<n;i++)
                for(j=0;j<m;j++)
                {
                    if(field[i][j]=='*') result[i][j]=field[i][j] ;

                    else
                    {
                        cnt=0;
                        if((i<n-1)&&(j!=0)&& (field[i+1][j-1]=='*')) cnt++ ;  /* not for last row 1st column */
                        if((i<n-1)&& (field[i+1][j]=='*')) cnt++ ;                /*not for last row*/
                        if((i<n-1)&&(j<m-1) &&(field[i+1][j+1]=='*')) cnt++ ;             /*not for last row last column*/
                        if((j!=0) &&(field[i][j-1]=='*')) cnt++ ;                              /*not for 1st column*/
                        if((j<m-1) &&(field[i][j+1]=='*')) cnt++ ;                           /*not for last column*/
                        if((i!=0)&&(j!=0)&& (field[i-1][j-1]=='*')) cnt++ ;       /*not for 1st row 1st column*/
                        if((i!=0)&&(field[i-1][j]=='*')) cnt++ ;                /*not for 1st row */
                        if((i!=0)&&(j<m-1)&& (field[i-1][j+1]=='*') ) cnt++ ;               /*not for 1st row last column*/

                        result[i][ j]=  '0' +cnt ;


                    }


                }
             if(Case>1) printf("\n");
            printf("Field #%d:\n",Case);
            for(i=0;i<n;i++)
                {{for(j=0;j<m;j++)

                    printf("%c",result[i][j]);
                     }
                     printf("\n");}










        }
    }



    return 0;
}
