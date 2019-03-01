/*************************************************************************
	> File Name: construct_test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月01日 星期五 17时56分26秒
 ************************************************************************/
#include <iostream>
using namespace std;
class A  {
    public:
        A(int i) {
            cout << i << endl;
        }
};

class B {
    public:
    B(){
    }
    B(int a): B() {
    }
    A a { 1};
};

int main() {
    B b;
    B (3);
    return 0;
}
