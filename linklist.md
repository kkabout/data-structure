#include <iostream>
using namespace std;
struct Link {
Link *next ;
int data ;

};
int init(Link * &L)
{
L = new Link ;
if (L == NULL)
{
cout << "error" <<endl;
return  0 ;
}
L->next = NULL;
return 1;



}
void insert (Link * &L, int a)
{
Link *q , *p;
init(p);

q = L;
while (q->next!=NULL)
q = q->next ;
p->data = a ;
q->next = p;
//q = p ;


}
void print (Link * L)
{
Link *q;
q = L->next;
while (q != NULL) {
cout << q->data<<endl;
q = q->next;
}
}
int Ldelete(Link * &L ,int a )
{
Link *p , *q;
p = L;
while (p->next->data != a&&p->next->next!=NULL)
p = p->next;
if(p->next->next==NULL&&p->next->data!=a)
{
cout<<"error"<<endl;
return 0;
}
q = p->next;
p->next = p->next->next;
delete q;
return 1;





}
int serch(Link *L,int a)
{
Link *p;
p = L;
while(p->data !=a && p->next!=NULL)
{
p = p->next ;

}
if(p->next == NULL && p->data !=a)
{

cout << "error"<<endl;
return 0 ;
}
cout<<p->data<<endl;
return 1;


}

int main ()
{
Link *L ;
init(L);
insert(L, 3);
insert(L, 5);
insert(L, 7);
insert(L, 1);
print(L);
Ldelete(L,3);
print(L);
serch(L,1);


}