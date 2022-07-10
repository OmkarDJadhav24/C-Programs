// Write application which accept file name from user and display size of file

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char fname[20];
    int fd = 0;
    int iRet = 0;
    
    printf("Enter name of file to open:\n");
    scanf("%s",fname);
    
    fd = open(fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open a file\n");
        return -1;
    }
    
    printf("File opened successfully\n");
    
    iRet = sizeof(fd);
    printf("SIze of file is:%d Bytes\n",iRet);
    
    close(fd);
    
    return 0;
}
