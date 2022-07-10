// Write application which accept file name and one string from user and write that string at the end of the file.

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char fname[20];
    char str[20];
    int fd = 0;
    int iRet = 0;
    
    printf("Enter file name to open:\n");
    scanf("%s",fname);
    
    printf("Enter the string to write:\n");
    scanf(" %[^'\n']s",str);
    
    fd = open(fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open\n");
        return -1;
    }
    
    printf("File opened successfully\n");
    
    iRet = write(fd,str,strlen(str));
    printf("%d bytes data written in file successfully\n",iRet);
    
    return 0;
}
