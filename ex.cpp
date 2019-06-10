#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){

    cin.sync();
    char str[50];
    
    int n = sizeof(str)/sizeof(str[0]);
    cout<<"input : \n";
    cin.getline(str,50);
    
    int start=0,end=49;
    while(end>start){
        char temp = str[start];  
        str[start] = str[end]; 
        str[end] = temp; 
        start++; 
        end--; 
    }
    
    for(auto c :str){
        cout<<c;
    }
    // cout<<endl<<str; 

    cout<<"\n\n\n\n-----------------------\n";
    return 0;
}