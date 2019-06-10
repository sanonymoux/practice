#include <iostream>
using namespace std;

int main(){

    class Vector {
    public:
        Vector(int s):element{new int[s]},sz{s}{};
        int size(){ return sz;};
        int& operator[](int i){ return element[i];};

    private:
        int* element;
        int sz;
    };

    Vector v(5);
    cout<<v.size();
    v[1]=5;
    cout<<"==="<<v[1];

}

