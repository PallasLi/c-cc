//
//  main.cpp
//  cppTest
//
//  Created by lyt1987 on 16/2/27.
//  Copyright © 2016年 lyt1987. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;//std::cout<<       std::cin>>

#include <stdio.h>
#define PI 3.14
const int I=1;


double area(){
    static int D=1;
    double areas= I*PI*D*D;
    D++;
    return areas;
    
}
#undef PI
#define PI 3.1415926
#include <cstring>

void testCstring(){
    bool b=strcmp("aaa", "aaa");
    cout<<"len:"<<strlen("sdaf");
    cout<<b<<" "<<PI<<"\n";
    
}



#include <fstream>


void testFile(){
    ifstream inFileStream;
    ofstream outFileStream;
    inFileStream.open("/Users/lyt1987/Desktop/mypcsoft/addJar.bat");
    char c;
    string str="";
    if(inFileStream){
        while(inFileStream.get(c)){
            str=str+c;
        }
        cout<<str<<"\n";
    }
    outFileStream.open("");
    if(outFileStream){
        outFileStream<<str;
        outFileStream.close();
    }
    char filename[100];
    cin>>filename;
    outFileStream.close();
    remove(filename);
    
}


void testExit(){
    exit(0);
}
 



namespace newname {
    class exception1{};
    class exception2{};
}
using namespace newname;
void testException(){
    
    throw exception1();
}
int main(int argc, const char * argv[]) {
    // int afteruse();//先声明后定义不友好
    
    try{
        testException();
    }catch(exception1){
        cout<<"溢出"<<"\n";
    }catch(...){
        cout<<"其他错误"<<"\n";
    }
    
    //  cout<<afteruse()<<"\n";
    for(int i=0;i<10;i++){
        printf("r=%d area=%f\n", i+1,area());
        cout<<"r="<<i+1<<" area="<<area()<<"\n";
        
        
    }
    int i;
    cout<<"输入:";
    cin>>i;
    cout<<"输入值为："<<i;
    testCstring();
    testFile();
    testExit();
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

int afteruse(){
    return 1;
}

