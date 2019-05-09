#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>


void getSize(const char *dir_name)
{
    DIR *dir;
    struct dirent *ent;
    struct stat s;
    int size=0;
    

//if directory cannot be opened return -1
if(!(dir=opendir(dir_name)))
{
    return;
}
//if directory cannot be read return -1
if(!(ent=readdir(dir)))
{
    return;
}

//open directory    
dir=opendir(".");

    //if entry is not null get size
    if(ent!=NULL)
    {
        while((ent=readdir(dir)))
        {
           stat(ent->d_name,&s);
            size=s.st_size;
            
            printf(" %s ",ent->d_name);
            printf("%d\n",size);
        }
            
        
     }
    
    
//close directory
closedir(dir);

}

int main()
{

getSize(".");


    return 0;
}