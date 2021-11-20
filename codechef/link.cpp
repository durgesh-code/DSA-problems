#include<bits/stdc++.h>
using namespace std;
struct node{
    int ele;
    struct node* next;
};
struct node* head = NULL;
void addNode(int ele)
{
    struct node* temp;
    struct node *ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr == NULL)
      cout<<"memory overflow";  
    else{
        ptr->ele = ele;

        if(head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            cout<<" node add sucessfull 1"<<endl;
        }
        else{
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            ptr->next = NULL;
            temp->next = ptr;
            cout<<"add node sucessfull"<<endl;

        }
    }
}
void travers()
{
    if(head == NULL)
        cout<<"head null";
    struct node* temp = head;
   do{
       cout<<temp->ele<<" ";
       temp = temp->next;
   }while (temp->next != NULL);
   cout<<temp->ele;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i<n;i++)
    {
        int ele;
        cin>>ele;
        addNode(ele);
    }
    travers();
}