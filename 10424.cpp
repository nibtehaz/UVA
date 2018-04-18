#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30];
    int n1,n2,m1,m2,sum,i;
    double love;

    while((scanf ("%[^\n]%*c %[^\n]%*c",str1,str2))!=EOF)
    {
        n1=strlen(str1);
        n2=strlen(str2);

        sum=0;

        for(i=0;i<n1;i++)
        {
            if((str1[i]<='z')&&('a'<=str1[i])) { m1=str1[i] -'a' +1 ; sum+=m1;  }
            else if((str1[i]<='Z')&&('A'<=str1[i])) { m1=str1[i] -'A' +1 ;   sum+=m1; }

        }


        for(;;)
        {
            if(sum>100) sum=(sum/100) + ((sum%100)/10) + (sum%10);
            else if(sum<10) break ;
            else sum=(sum/10) + (sum%10);
        }
        m1=sum;



        sum=0;


         for(i=0;i<n2;i++)
        {
            if((str2[i]<='z')&&('a'<=str2[i])) {m2=str2[i] -'a' +1 ; sum+=m2; }
            else if((str2[i]<='Z')&&('A'<=str2[i])) {m2=str2[i] -'A' +1 ;   sum+=m2; }

        }


        for(;;)
        {
            if(sum>100) sum=(sum/100) + ((sum%100)/10) + (sum%10);
            else if(sum<10) break ;
            else sum=(sum/10) + (sum%10);
        }
        m2=sum;


       if(m1>m2) love=(m2*100.0)/m1;
       else  love=(m1*100.0)/m2;

       printf("%.2lf %\n",love);


    }


    return 0;
}


