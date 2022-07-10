// Write a program which accept file name and one character from user and count number of occurances of that character from that file

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

int CharacterCount(char source[],char ch)
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
            if(data[i]==ch)
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
    char ch = '\0';
    
    int iRet = 0;
    
    printf("Enter file name to open:\n");
    scanf("%s",fname);
    
    printf("Enter character:\n");
    scanf(" %c",&ch);
    
    iRet=CharacterCount(fname,ch);
    printf("\nFrequency of character %c is:%d\n",ch,iRet);
    
    
    return 0;
}
