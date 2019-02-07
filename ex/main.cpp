#include <iostream>
#include <dirent.h>
#include <windows.h>

using namespace std;

int main() {
    char runPath;
    char result[ MAX_PATH ];
    GetModuleFileName( NULL, result, MAX_PATH );
    cout<<result;

    return 0;
}