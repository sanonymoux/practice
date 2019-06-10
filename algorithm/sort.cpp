#include <iostream>
#include <vector>
#include <math.h>


/** کد داخل کتاب
void _merge(std::vector<int> A,int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    std::vector<int> L;
    std::vector<int> R;
    for(int i=0 ; i < n1;i++){
        L.push_back(A[i]);
    }
    for(int i=0 ; i < n2;i++){
        R.push_back(A[i]);
    }
    L.push_back(9999999);
    R.push_back(9999999);
    int i=1,j=1;
    for(int k=p ; k<=r ; k++){
        (L[i]<=R[j])?(A[k]=L[j],i++):(A[k]=R[j],j++);
    }

}
*/

/* merge sort*/
void merge(int *A,int low,int mid,int high){
    int min = low;
    // اینجا نوع ادغام درجاست میاد با توجه به
    // low high mid
    // که بهش پاس دادیم میخاد ارایه رو مرتب بریزه تو ارایه اصلی
    //انگار میاد از نیمه سمت راست یه عضو رو میگیزه 
    // میبینه از کدوم عضو سمت چپ کوچیکتره میره میزارش قبل اون
    // البته قبلش اونای دیگه رو یه خونه اورده حلو
    for(int i= mid+1;i<=high;i++){
        
        while(A[min]<A[i]){
            min++;
        }
        if(min==i)
        break;
        
        int key = A[i];
        for(int j=i ; j>min ; j--){
            A[j]=A[j-1];
        }
        A[min]=key;

    }
}

//اینجا میاد ارایه رو به عناصر تک عضویش میشکنه 
void mergeSort(int *A,int low,int high){
    if(low<high){
        int mid=floor((low+high)/2);
        // کار این دوتابع بازگشتی اینه که فقط تابع رو بشکنن به تک عضوی
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        // اینجا میاد بر اساس همین شکستای بالا به ترتیب شروع میکنه دوتا دوتا ادغام کردن
        merge(A,low,mid,high);
    }
}


int main(){
    srand(time(0));
    int input;
    int v[1000000];
    // while(std::cin >> input){
    //     v.push_back(input);
    // }

    for(int i = 0 ; i <999999 ; i++){
        v[i]=(rand()%9999);
    }


    /* merge sort*/
    mergeSort(v,0,999999);


    /* Insertion sort */

    // for(int j=1; j<v.size() ; j++){
    //     int key = v[j];
    //     int i = j -1;
    //     for(i = j-1 ; i>=0 && v[i]>key ; i--){
    //         v[i+1]=v[i];
    //     }
    //     v[i+1]=key;
    // }
    
    

    /* Selection sort */

    // for(int i =0 ; i < v.size()-1 ; i++){
    //     int key = v[i];
    //     int minIndex=i;   
    //     for (int j = i ; j <v.size() ; j++){
    //         if (v[j]<v[minIndex]) {
    //             minIndex=j;
    //         }
    //     }
    //     v[i]=v[minIndex];
    //     v[minIndex]=key;
    // }



    /* Pritning sorted array */
    for(auto _v : v){
        std::cout<<"\n === " << _v;
    }
    std::cout<<"\n\n\n";
}