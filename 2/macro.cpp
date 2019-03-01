/*************************************************************************
	> File Name: macro.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月01日 星期五 15时55分46秒
 ************************************************************************/
#include <iostream>
#include <cstdio>
using namespace std;
#define LOG(fmt,args...) printf(fmt, ##args)
#define LOG2(fmt,...) printf(fmt, __VA_ARGS__)

int main() {
    LOG("%s,%d\n", "asdf",213);
    LOG2("%s,%d\n", "asdf",213);
}
