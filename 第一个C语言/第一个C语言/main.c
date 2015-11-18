//
//  main.c
//  第一个C语言
//
//  Createddefaults write com.apple.finder AppleShowAllFiles -bool true
//by scjy on 15/9/14.
//  Copyright (c) 2015年 cn.sk. All rights reserved.
//

//注释：两种方式
//1，单行注释:  //  快捷键 command + /
//2，多行注释:  /* 需要注释的内容 */ 多行注释不能相互嵌套使用

//#是C语言中的预处理命令表示符号
//#include 是一个预处理命令，作用是将<stdio.h>中的stdio.h文件的内容拷贝到该地方
//stdio.h  是一个系统文件
//预处理命令：此处不讲，后面单独讲解预处理命令的时候讲解预处理命令
#include <stdio.h>

/*
 main函数：
 1，main函数是C语言的入口函数,C语言中必须要有main函数，当且仅当只有一个main函数
 2，main函数必须要有返回值，一般的情况下为int类型的返回值
 3，main可以没有形参
 
 
 int：是main函数一个返回值类型，如果函数要想正常返回，那么必须要有一个返回值，而且该返回值的类型要和函数的返回值类型int类型保持一直，不然会报错，或者警告
 (形参列表....)
 {
    函数体，用来实现函数功能的地方，也就是写功能代码的地方
 }
 */
int main(int argc, const char * argv[]) {
    // insert code here...
    //printf 是一个输出函数
    //函数：是C语言运行的基本功能单元
    printf("Hello, World!\n");//在控制台答应一段话，Hello, World!
    
    //return 返回函数的，后面跟着一个数据必须要和函数返回值类型保持一致，一般的情况函数都需要一个return，但是如果函数的返回值类型为空（void），return可以省略不写
    //1 在main函数中是必须要有的，代表的是一个正常返回，如果是0代表的是一个非正常返回
    return 1;
}
