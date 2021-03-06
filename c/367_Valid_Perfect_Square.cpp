#include <iostream>

using namespace std;


#include <iostream>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1 || num==4)
            return true;
        else
            return power(1,num,num);
    }


    bool power(int a,int b,int c){
        if(b<=a)
            return false;
        long int k = (a+b)/2;
        if(k==a)
            return false;
        if(k*k==c ||(k+1)*(k+1)==c)
            return true;
        if(k*k>c)
            return power(a,k,c);
        else
            return power(k,b,c);
    }
};


class Solution2 {
public:
    bool isPerfectSquare(int num) {
        return power(0,num,num);
    }


    bool power(int a,int b,int c){
        while(a<=b){
            long int mid= (a+b)/2;
            if(mid*mid>=c)
                b=mid-1;
            else
                a=mid+1;

        }
        return a*a==c;
    }


};

int main() {
    cout << "Hello, World!" << endl;
    Solution a;
    bool re= a.isPerfectSquare(2147483647);
    cout <<re;
    bool re2= a.isPerfectSquare(16);
    cout <<re2;
    return 0;
}
