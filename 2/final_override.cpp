/*************************************************************************
	> File Name: final_override.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月01日 星期五 17时08分04秒
 ************************************************************************/
class A {
    public:
        virtual int a() = 0;
        virtual int a(int b) = 0;
};

class B : public A {
    public:
        int a() {return 0;}
        int a(int b) {return b;}
};

class C : public B {
    public:
        int a() override {return 1;}
};

int main() {
    C c;
}
