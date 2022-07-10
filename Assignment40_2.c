// Write application which accept file name from user and create that file.

#include<stdio.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    char fname[20];
    int fd = 0;
    printf("Enter file name to create: ");
    scanf("%s",fname);
    
    fd = creat(fname,0777);
    
    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }
    
    printf("File Successfully created with fd :%d\n",fd);
    
    return 0;
}
