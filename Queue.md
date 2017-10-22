# data-structure
#include <iostream>
using namespace std;
typedef  int  Elemtype;
struct node{
Elemtype data;
node *next;

};
struct Queue{
node *head;
node *tail;
int size;
};
void init(Queue &Q)
{
Q.tail = new node ;

if(Q.tail!=NULL)
{

Q.head = Q.tail;
Q.size = 0;
Q.tail->next = NULL;
}

}
void sert(Queue &Q,Elemtype e)
{
node *q;
q = new node ;
q->data = e ;
q->next = NULL;
Q.tail->next = q;
Q.tail = q;
Q.size++;





}
void outQ(Queue &Q)
{
Q.head = Q.head->next;
Q.size--;
}
Elemtype Gethead(Queue Q)
{
return Q.head->next->data;
}
Elemtype Gettail(Queue Q)
{
return Q.tail->data;
}
void print(Queue Q)
{
while(Q.head!=Q.tail)
{
cout<<Gethead(Q)<<endl;
outQ(Q);



}

}



int main(int argc, const char * argv[]) {
Queue Q;
init(Q);
sert(Q,1);
sert(Q,2);
sert(Q,3);
sert(Q,4);
print(Q);
cout << "hello"<<endl;

return 0;
}
