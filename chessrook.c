#include<stdio.h>
#include<string.h>
int main()
{
    int a[8][8],i=8,j=0,k,t=1,s=0,x,d[8][8],l,m,e,f;
    char b[100],c;
     scanf("%[^\n]",&b);
     m=strlen(b);
    for(k=0;k<m;k++)
    {
        if(b[k]=='/')
        {
            i--;
            t=1;
        }
        else if(64<b[k])
        {
            a[i][t]=b[k];
            t++;
        }
        else
        {
      x=b[k]-'0';
         for(j=0;j<x;j++)
               {
                   s=t+j;
                   a[i][s]='\0';
               }
               t=t+j;
        }
    }
if(b[m-1]=='b')
{
    c='r';
}
else
{
    c='R';
}
    for(i=8;i>=1;i--)
    {
        for(j=1;j<=8;j++)
        {
        if(a[i][j]==c)
        {
            e=i;
            f=j;
            t=j;
            l=i;
            d[i][j]=c;

                for(s=t+1;s<=8;s++)
                {
                    if(a[i][s]=='\0')
                    {
                        d[i][s]=c;
                      // printf("%d %d",i,s);
                    }
                    else
                    {
                        s=8;
                    }
                }

                for(s=t-1;s>=1;s--)
                {
                    if(a[i][s]=='\0')
                    {
                        d[i][s]=c;
                    }
                    else
                    {
                    s=0;
                    }
                }
                for(s=l+1;s<=8;s++)
                {
                    if(a[s][j]=='\0')
                    {
                        d[s][j]=c;
                       // printf("%d %d\n",s,j);
                    }
                    else
                    {
                        s=8;
                    }
                }
                 for(s=l-1;s>=1;s--)
                {
                    if(a[s][j]=='\0')
                    {
                        d[s][j]=c;
                    }
                    else
                    {
                        s=1;
                    }
                }
            }
        }
        }
         for(i=8;i>=1;i--)
    {
        for(j=1,k='a';j<=8,k<'i';j++,k++)
        {
            if(j==f)
        {
            f=k;
        }
            
            d[i][k]=d[i][j];
        }
    }
    for(i=8;i>=1;i--)
    {
        for(j='a';j<='h';j++)
        {
        
            if(d[i][j]==c)
            {
               printf("%c%d%c%d,",f,e,j,i);
            }
        }
    }
    return 0;
}