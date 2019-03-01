/*************************************************************************
	> File Name: default_template_param.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月01日 星期五 17时11分35秒
 ************************************************************************/
#include <iostream>
using namespace std;
template<typename T> void t(T a) {
    cout << a << endl;
}

int main () {
    t<int>(3);
}
