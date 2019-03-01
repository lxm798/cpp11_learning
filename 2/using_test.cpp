/*************************************************************************
	> File Name: using_test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月01日 星期五 17时41分34秒
 ************************************************************************/
class A {
    public:
        int f(int a) {
            return 1;
        }
};

class B : public A {
    public:
        using A::f;
          int f(A a) {
            return 1;
        }
};
int main () {
    B b;
    b.f(3);
}
