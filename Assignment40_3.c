// Write application which accept file name from user and read all data from that file and display contents on screen.

#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    char fname[20];
    char Data[10];
    int fd = 0;
    int iRet = 0;
    
    printf("Enter file name to open:\n");
    scanf("%s",fname);
    
    fd = open(fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    printf("file successfully opened with fd :%d\n",fd);
    
    
    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
         write(1,Data,iRet);
    }
    
    close(fd);
    
    return 0;
}
