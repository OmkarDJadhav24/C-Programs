// Write a program which accept file name from user and count the number of small letters from that file.

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#define FILESIZE 1024

int SmallCount(char source[])
{
    char data[FILESIZE];
    int fd = 0;
    int iRet = 0;
    int i = 0;
    int iCnt = 0;
    
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
            if((data[i]>='a') && (data[i]<='z'))
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
    
    iRet = SmallCount(fname);
    printf("\nFrequency of small letters is:%d\n",iRet);
    
    return 0;
}
