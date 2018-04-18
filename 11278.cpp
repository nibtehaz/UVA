#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,j,n;
    char inp[100005],line1[14]={"`1234567890-="},line2[14]={"qwertyuiop[]\\"},line3[12]={"asdfghjkl;'"},line4[11]={"zxcvbnm,./"},lines1[14]={"~!@#$%^&*()_+"},lines2[14]={"QWERTYUIOP{}|"},lines3[12]={"ASDFGHJKL:\""},lines4[11]={"ZXCVBNM<>?"}  ;
    char ans1[14]=             {"`123qjlmfp/[]"},ans2[14] ={"456.orsuyb;=\\"}, ans3[12]={"789aehtdck-"},ans4[11] ={"0zx,inwvg'"},anss1[14] ={"~!@#QJLMFP?{}"},anss2[14] ={"$%^>ORSUYB:+|"},anss3[12] ={"&*(AEHTDCK_"}, anss4[11]={")ZX<INWVG\""};

    while(gets(inp))
    {
        n=strlen(inp);

        for(i=0;i<n;i++)
        {
            if(inp[i]==' ')
            printf(" ");

            for(j=0;j<14;j++)
                if(inp[i]==line1[j])
                {
                    printf("%c",ans1[j]);
                    continue;
                }

            for(j=0;j<14;j++)
                if(inp[i]==lines1[j])
                {
                    printf("%c",anss1[j]);
                    continue;
                }
            for(j=0;j<14;j++)
                if(inp[i]==line2[j])
                {
                    printf("%c",ans2[j]);
                    continue;
                }
            for(j=0;j<14;j++)
                if(inp[i]==lines2[j])
                {
                    printf("%c",anss2[j]);
                    continue;
                }
            for(j=0;j<12;j++)
                if(inp[i]==line3[j])
                {
                    printf("%c",ans3[j]);
                    continue;
                }

            for(j=0;j<12;j++)
                if(inp[i]==lines3[j])
                {
                    printf("%c",anss3[j]);
                    continue;
                }
            for(j=0;j<11;j++)
                if(inp[i]==line4[j])
                {
                    printf("%c",ans4[j]);
                    continue;
                }
            for(j=0;j<11;j++)
                if(inp[i]==lines4[j])
                {
                    printf("%c",anss4[j]);
                    continue;
                }

        }
        printf("\n");
    }

    return 0;
}
