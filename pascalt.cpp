#include <iostream>
using namespace std;

int pt(int a){
    int x=1;
    cout<<x<<" ";

for (int i=1;i<a;i++){
    int curr=x*(a-i)/i;
    cout<<curr<<" ";
    x=curr;

}

}
int main(){
    int h;
    cout<<"enter ";
    cin>>h;
    pt(h);
    return 0;

}