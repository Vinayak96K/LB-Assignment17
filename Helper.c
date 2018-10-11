#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern[QuesNumber]
//  Description: All the below functions accepts base address of a string and displays a paricular pattern on the screen.
//  Input: char[IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int GetStrLen(char *str)
{
    int iCnt=0;

    if(str==NULL)
    {
        return-1;
    }

    while((*str!='\0')&&(*str!=' '))
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

void Pattern1(char *str)
{
    int iStrLen=GetStrLen(str);
    int iCnt1,iCnt2;
    if(iStrLen==-1 || iStrLen==0)
    {
        printf("Invalid string input!");
        return;
    }

    for(iCnt1=0;iCnt1<iStrLen;iCnt1++)
    {
        for(iCnt2=0;iCnt2<iStrLen;iCnt2++)
        {
            printf("%c\t",str[iCnt2]);
        }
        printf("\n");
    }
}

void Pattern2(char *str)
{
    int iStrLen=GetStrLen(str);
    int iCnt1,iCnt2;
    if(iStrLen==-1 || iStrLen==0)
    {
        printf("Invalid string input!");
        return;
    }

    for(iCnt1=iStrLen-1;iCnt1>=0;iCnt1--)
    {
        for(iCnt2=0;iCnt2<=iCnt1;iCnt2++)
        {
            printf("%c\t",str[iCnt2]);
        }
        printf("\n");
    }
}

void Pattern3(char *str)
{
    int iStrLen=GetStrLen(str);
    int iCnt1,iCnt2;
    if(iStrLen==-1 || iStrLen==0)
    {
        printf("Invalid string input!");
        return;
    }

    for(iCnt1=0;iCnt1<iStrLen;iCnt1++)
    {
        for(iCnt2=0;iCnt2<=iCnt1;iCnt2++)
        {
            printf("%c\t",str[iCnt2]);
        }
        printf("\n");
    }
}

void Pattern4(char *str)
{
    int iStrLen=GetStrLen(str);
    int iCnt1,iCnt2;
    if(iStrLen==-1 || iStrLen==0)
    {
        printf("Invalid string input!");
        return;
    }

    for(iCnt1=0;iCnt1<iStrLen;iCnt1++)
    {
        for(iCnt2=0;iCnt2<iStrLen;iCnt2++)
        {
            if((iCnt1==0)||(iCnt1==(iStrLen-1))||(iCnt2==0)||(iCnt2==(iStrLen-1)))
            {
            printf("%c\t",str[iCnt2]);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

void Pattern5(char *str)
{
    int iStrLen=GetStrLen(str);
    int iCnt1,iCnt2;
    if(iStrLen==-1 || iStrLen==0)
    {
        printf("Invalid string input!");
        return;
    }

    for(iCnt1=0;iCnt1<iStrLen;iCnt1++)
    {
        for(iCnt2=0;iCnt2<iStrLen;iCnt2++)
        {
            if(iCnt2<=iCnt1)
            {
            printf("%c\t",str[iCnt2]);
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}