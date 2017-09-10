#include "iostream"
using namespace std;s
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


}
void print (Link *L)
{
while (L != NULL) {
cout << L->data<<endl;
L = L->next;
}
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

}