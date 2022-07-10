// Write application which accept file name from user and open that file in read mode.

#include<stdio.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    char fname[20];
    int fd = 0;
    
    printf("Enter the file name you want to open: ");
    scanf("%s",fname);
    
    fd = open(fname,O_RDONLY);
    if(fd == -1)
    {
         printf("Unable to open file\n");
         return 0;
    }
    
    printf("File successfully opened with fd :%d\n",fd);
    
    return 0;
}
