// Write a program which accept file name from user and count the number of capital letters from that file.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CapitalCount(char source[])
{ 
    char data[FILESIZE];
    int i=0,fd = 0,iRet=0,iCnt=0;
    
    fd = open(source,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    while((iRet = read(fd,data,FILESIZE)) != 0)
    {
        for(i=0;i<=iRet;i++)
        {
            if((data[i]>='A') && (data[i]<='Z'))
            {
                iCnt++;
            }
        }
    }
    close(fd);
    return iCnt;
}

int main()
{
    char fname[20];
    int iRet = 0;
    
    printf("Enter file name to open:\n");
    scanf("%s",fname);
    
    iRet=CapitalCount(fname);
    printf("Count of capital characters is: %d\n",iRet);
    
    return 0;
}
