// Write a program which accept file name and one count from user and read that number of characters from starting position

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

void ReadFile(char source[],int iNo)
{
    char data[FILESIZE];
    int fd = 0,iRet = 0;
    
    fd = open(source,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return;
    }
    
    iRet = read(fd,data,iNo);
    printf("%d bytes data read successfully\n",iRet);
    printf("%s\n",data);
    
    close(fd);
}
int main()
{
    char fname[20];
    int Value = 0;
    
    printf("Enter file name to open:\n");
    scanf("%s",fname);
    
    printf("Enter the amount to read the data:\n");
    scanf("%d",&Value);
    
    ReadFile(fname,Value);
    
   
    return 0;
}
