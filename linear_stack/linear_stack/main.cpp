//
//  main.cpp
//  linear_stack
//
//  Created by KJ on 17/9/25.
//  Copyright © 2017年 KJ. All rights reserved.
//

#include <iostream>
using namespace std;
struct Lstack{
    int *base;
    int *top;
    int length;
    
};
int newStack(Lstack &L)
{
    L.base = new int ;
    if(L.base == NULL)
        return 0;
    else
    {
        L.top =  L.base;
        L.length = 20 ;
        return 1;
    }
    
    
    
    
}
void Push(Lstack &L ,int e)
{
    *L.top = e;
    L.top++;
    
    
    
}
void Get(Lstack L)
{
    cout << *(L.top-1);
}
void pop(Lstack &L)
{
    L.top--;
}
void print(Lstack L)
{
    while (L.top!=L.base)
    {
        Get(L);
        L.top--;
        
    }
}
int main ()
{
   Lstack L;
    newStack(L);
    Push(L,5);
    Push(L,6);
    Push(L,7);
    Push(L,8);
    Push(L,9);
    Push(L,10);
    Push(L,11);
    Push(L,12);
    Push(L,13);
    print(L);
}