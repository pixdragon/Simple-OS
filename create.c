//To create a file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
int fd1;
char buf[50];
char name[20];
printf("Enter file name : ");
scanf("%s",name);
int n;
if((fd1=open(name,O_WRONLY|O_CREAT,0644))==-1)
{
printf("error");
}
else{
printf("Start typing...\n");
//system("gedit $name");
while((n=read(0,buf,1))>0)
{
write(fd1,buf,1);
}
close(fd1);
}
return 0;
}
