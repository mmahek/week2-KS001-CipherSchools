#include<iostream>
using namespace std;

int compare(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int compare(int a){
    if(a==5){
        return 1;
    }return 0;
    // else{
    //     return 0;
    // }
}


int main(){
    cout << "Answer = " << compare(10,20);
    cout << "\nIs it true that a==5 ? --> " << compare(24);
    return 0;
}