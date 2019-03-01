/*************************************************************************
	> File Name: init.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月01日 星期五 16时30分34秒
 ************************************************************************/
#include <iostream>
using namespace std;
class B  {
    public:
        B(int a) {}
};
class A {
    public:
    private:
        int a = 3;
        double b = 103.2;
        int c {10};
        int e {0 };
        string s = "abcd";
        B bb = B(10);
        B bb1 {10};
};

int main() {
    A a;
    return 0;
}
