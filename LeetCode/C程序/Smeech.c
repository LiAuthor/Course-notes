#include <iostream>
#include<stdio.h>  
#include <cstdio>  
#include <cstring>  
#include <algorithm>  
using namespace std;  
const int maxn = 10005;  
  
char str[maxn];  
int cur, len;  
  
double cal() {  
    double op = 1;  
    while (!(str[cur]=='(' || (str[cur]>='0'&&str[cur]<='9') || str[cur]=='-') && cur < len)  
        cur++;  
  
    if (str[cur] == '-') {  
        cur++;  
        op = -1;  
    }  
  
    if (str[cur] == '(') {  
        cur++;  
        double w = 0.1, p = 0;  
        if (str[cur] == '.' || str[cur+1] == '.') {  
            if (str[cur+1] == '.')  
                cur++;  
            for (int i = cur+1; str[i] >= '0' && str[i] <= '9' && str[i]; i++, cur = i) {  
                p = p + (str[i] - '0') * w;  
                w *= 0.1;  
            }  
        }  
        else p = str[cur++] - '0';  
        double a, b;  
        a = cal();  
        b = cal();  
        return (a + b) * p + (a - b) * (1 - p);  
    }  
    else {  
        double p = 0;  
        for (int i = cur; str[i] >= '0' && str[i] <= '9' && str[i]; i++, cur = i)  
            p = p * 10 + str[i] - '0';  
        return op * p;  
    }  
}  
  
int main() {  
    double p, a, b;  
    while (gets(str) && strcmp(str, "()")) {  
        len = strlen(str);  
        cur = 0;  
        printf("%.2lf\n", cal());  
    }  
    return 0;  
}  
