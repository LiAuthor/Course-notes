#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
int main(){
    vector<int> num={1,2};
    int k=3;
    int len=num.size();
    k%=len;
    reverse(num.begin(),num.end());
    reverse(num.begin(),num.begin()+k);
    reverse(num.begin()+k,num.end());
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;
}