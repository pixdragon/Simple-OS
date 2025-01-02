//To open a file

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
char name[20];
int fd;
printf("Enter file name : ");
scanf("%s",name);
if((fd=open(name,O_RDONLY))==-1)
printf("File does not exist.\nPlease enter correct file name.\n");
else{
if(!fork())
execlp("gedit","gedit",name,NULL);}
return 0;
}
