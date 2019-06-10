// eshtebaham in bood ke fekr kardam

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> mouses;
    mouses.push_back(0);

    int i=0;
    for( i=0 ; i < 50 ; i++){
        for(int m=0; m< mouses.size();m++){
            if(mouses[m]==0){
                mouses[m]++;
            }else if (mouses[m]==1){
                mouses[m]++;
                mouses.push_back(0);
                mouses.push_back(0);
                mouses.push_back(0);
            }else if (mouses[m]==2){
                mouses[m]++;
                mouses.push_back(0);
                mouses.push_back(0);
            }else if (mouses[m]==3){
                mouses.push_back(0);
            }
        }
        cout<<i<<" "<<mouses.size()<<" "<<endl;

        if(i>=4) {
            for (int o = 1; o < 131; o++) {
//                cout<<o<<" --->"<<mouses.size()<<endl;
                if (find(mouses.begin(), mouses.end(), 0) != mouses.end()) {
                    auto index=find(mouses.begin(), mouses.end(), 0);
                    mouses.erase(index);
                } else if (find(mouses.begin(), mouses.end(), 1) != mouses.end()) {
                    auto index=find(mouses.begin(), mouses.end(), 1);
                    mouses.erase(index);
                } else if (find(mouses.begin(), mouses.end(), 2) != mouses.end()) {
                    auto index=find(mouses.begin(), mouses.end(), 2);
                    mouses.erase(index);
                } else if (find(mouses.begin(), mouses.end(), 3) != mouses.end()) {
                    auto index=find(mouses.begin(), mouses.end(), 3);
                    mouses.erase(index);
                } else if(mouses.size()==0) {
                    cout << " engheraz " << endl;
                    return 0;
                }

            }
        }
    }



}

