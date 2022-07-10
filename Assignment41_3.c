// Write a program which accept file name from user and count the whiteSpaces from that file.

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

int WhiteSpace(char source[])
{
    char data[FILESIZE];
    int fd = 0,iRet=0,i = 0,iCnt = 0;
    
    
    fd = open(source,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    while((iRet=read(fd,data,FILESIZE)) != 0)
    {
        for(i=0;i<=iRet;i++)
        {
            if(data[i]==' ')
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
    
    
    iRet=WhiteSpace(fname);
    printf("\nFrequency of white spaces is:%d\n",iRet);
    
    
    return 0;
}
