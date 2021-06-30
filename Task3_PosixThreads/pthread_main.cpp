#include <iostream>
#include <string>
#include <Windows.h>
#include <pthread.h>


using namespace std;


void ShowFilesCountIn(char * _dir){
    int _file_count = 0;
    WIN32_FIND_DATAA data;
    HANDLE hFind = FindFirstFileA(_dir, &data);      // DIRECTORY

    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            _file_count++;
        } while (FindNextFileA(hFind, &data));
        FindClose(hFind);
    }    
    cout << "Files count: " <<_file_count << endl;
}

void ShowFilesNameIn(char * _dir){

    WIN32_FIND_DATAA data;
    HANDLE hFind = FindFirstFileA(_dir, &data);      // DIRECTORY

    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            cout << data.cFileName << endl;
        } while (FindNextFileA(hFind, &data));
        FindClose(hFind);
    }
}

void *_ShowFilesCountIn( void *ptr )
{
     char *message;
     message = (char *) ptr;
     ShowFilesCountIn(message);
}


void *_ShowFilesNameIn( void *ptr )
{
     char *message;
     message = (char *) ptr;
     ShowFilesNameIn(message);

}


int  main()
{

     string sdir = "c:\\*";
     cout << "Program which count and print file names is some folder. "<< endl;
     cout << "Enter folder name (example - c:\\* or c:\\folder\\*): "<< endl;
     cin >> sdir;
     pthread_t thread1, thread2;
     const char *dir = &sdir[0];
     int  iret1, iret2;    

 
     iret1 = pthread_create( &thread1, NULL, _ShowFilesCountIn, (void*) dir);
     if(iret1)
     {  
         cerr << "Error - pthread_create() return code " << iret1 << endl;

         exit(EXIT_FAILURE);
     }
 
     iret2 = pthread_create( &thread2, NULL, _ShowFilesNameIn, (void*) dir);
     if(iret2)
     {
         cerr << "Error - pthread_create() return code " << iret2 << endl;
         exit(EXIT_FAILURE);

     }
     cout << endl;   
     cout << "pthread_create() for thread 1 returns: " << iret1 << endl;
     cout << "pthread_create() for thread 2 returns: " << iret2 << endl;
     cout << endl;   

     pthread_join( thread1, NULL);
     pthread_join( thread2, NULL);
     exit(EXIT_SUCCESS);
    return 0;
}   




