#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    digits[digits.size()-1]+=1;
    //两位数及以上进入for循环
    for(int i=digits.size()-1;i>0;i--){
        if(digits[i]==10){
            digits[i]=0;
            digits[i-1]+=1;
            if(digits[i-1]!=10) break;
        }   
        else{
            break;
        }
    }
    if(digits[0]==10){
        digits[0]=0;
        digits.insert(digits.begin(),1);
    }

    for(int num:digits)
        cout<<num<<" ";
    cout<<endl;

    return digits;
}
int main(){
    vector<int> nums={9,9,9,9,9};
    /*
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
    */
    plusOne(nums);
    return 0;
}