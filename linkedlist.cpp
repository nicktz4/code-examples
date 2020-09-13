#include <iostream>
#include <string.h>

 using namespace std;


class node {
 public:
  int datum;
  const char *name;
  node *next;
};

void printlist(node *head) {  // prints only datum
    while(head!=NULL) {
    cout << head->datum<<endl;
    head = head->next;
  }
}
    
void traversal (node *head) { //Access. +1 to datum
      while(head != NULL) {
        head->datum++;
      head = head->next;
      }
}

void printList(node *head) { //prints datum and name
  
  for( ; head ; head=head->next) {
    cout << head->datum <<endl;
    cout << head->name <<endl;
  }
}

int  Numberoflists(node *head) { 
  node *x;
  int result=0;
  for(x=head;x;x=x->next){
    result++;
  }
  return result ;
}

node*  FindNameList(node *head,const char *key) {
  node *x ;
  for(x=head ;x;x=x->next) {
    if(strcmp(x->name,key)==0) {
      
      return x;
            }
         }
  return (node *)NULL;
  }


node  *AddListInStart(node *,int  ,const char * );
node   *InsertAfterNList(node *,int,const char *);
node *AddListOnTail(node *,int,const char *);
node *RemoveHeadList(node *);
node *RemoveList (node *);


int main()
{
  node *head= NULL;
  node *sec=NULL;
  node *third=NULL;
  
  int ListsNum;
  const char *Myname = "petros";

   head =new node();
   sec = new  node();
   third  = new  node();
   
   
  head->datum = 5;
  head->name = "nikos";
  head->next = sec ;
  sec->datum = 18;
  sec->name = "stavros";
  sec->next = third;
  third->datum = 22;
  third -> name = "geros";
  third -> next = NULL;
     
  
  


   InsertAfterNList(sec,66,"perpitas");
 
 
 
 
  head = AddListInStart(head,99,"papagalos");
  AddListOnTail(head,199,"prezakias");
  head =  RemoveHeadList(head);
  RemoveList(sec);
  printList(head);
  
   
  return 0;
}
