# data-structure
#include <iostream>
using namespace std;
/*
typedef struct{
ElemType* elem; //存储空间基址
int length;         //当前长度
int listsize;       //当前分配的存储容量（以sizeof(ElemType)为单位）
} SqList;
*/
typedef struct List{
int  *base;
int length ;
int listsize;

}Link;
void initlist (List &L)
{
/*
L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
if(!L.elem) exit(OVERFLOW); //存储分配失败
L.length = 0;
L.listsize = LIST_INIT_SIZE;
return OK;
*/
L.base= new int ;
L.length = 10;
L.listsize = 0;

}
int  insert (List &L ,int i , int e)
{
/*
if(i < 1 || i>L.length+1) return ERROR;   //i值不合法
if(L.length >= L.listsize) {
ElemType * newbase = (ElemType *)realloc(L.elem, (L.listsize+LISTINCREMENT)*sizeof(ElemType));
if(!newbase) exit(OVERFLOW);
L.elem = newbase;
L.listsize += LISTINCREMENT;
}
ElemType * q = &(L.elem[i-1]);  //q为插入位置
ElemType * p;
for(p=&(L.elem[L.length-1]);p>=q;--p)
*(p+1) = *p;    //右移

*q = e;
++L.length;
return OK;
*/

if (i > L.length || i < 1)
{
cout <<"插入位置有误"<<endl;
return 0 ;

}
int *q = &L.base[i-1];//i－1是因为 下标从0开始 插入第i个元素的前一位插入后此元素在L.base［i］
int *p ;
for (p = &L.base[L.length]; p >= q ; p-- )
*(p+1) = *p;
*q = e ;
L.listsize++;
return 1 ;



}
int get(List L , int i) //取第i个数的值
{
/*
if(i < 1  ||  i>=L.length) return ERROR;
e = L.elem[i-1];
return OK;
*/
if(i<1||i>L.listsize)
{
cout <<"取值位置错误"<<endl;
return 0 ;
}
int e ;
e = L.base[i-1];
return e ;


}
void print(List L)
{
int i ;
for(i = 1 ; i <= L.listsize ; i++)
cout << get(L,i)<<endl;

}
int main()
{
Link L;
initlist(L);
insert(L, 1, 6);
insert(L, 2, 6);
insert(L, 3, 9);
//cout<<get(L,2)<<endl;
print(L);


return 0;
}


