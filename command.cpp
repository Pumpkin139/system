#include<iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    char key_word;
    key_word = [];
    cin>>key_word;
    if (key_word = "nf-0")
    {
        fstream f;
        char f_name;
        f_name = []
        cout<<"file name:"<<endl;
        cin>>f_name;
        f.open(f_name,ios::out);
        if (file.is_open()) {          // 判断文件是否打开成功
            //输入你想写入的内容 
            cout<<"\n"<<
            char f_write;
            f_write = []
            cout<<"\\n for break line"
            cout<<"write:"<<endl;
            cin>>f_write;
            f<<f_write<<endl;
            f.close();
            cout << "Write to file successfully!" << endl;
        }else{
            cout << "Failed to open file." << endl;
        }
    }
    if (key_word = "nf-1")
    {
        fstream f;
        //追加写入,在原来基础上加了ios::app 
        cout<<"file name:"<<endl;
        cin>>f_name;
        f.open(f_name,ios::out|ios::app);
        if (file.is_open())
        {
            //输入你想写入的内容 
            cout<<"write:"<<endl;
            cin>>f_write;
            f<<f_write<<endl;
            f.close();
        }
    }
    return 0
}