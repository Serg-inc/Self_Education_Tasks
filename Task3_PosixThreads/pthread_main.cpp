#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int  main()
{
    WIN32_FIND_DATAA data;
    std::string dir = "c:\\* ";
    HANDLE hFind = FindFirstFileA(dir.c_str(), &data);      // DIRECTORY

    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            std::cout << data.cFileName << std::endl;
        } while (FindNextFileA(hFind, &data));
        FindClose(hFind);
    }
}


