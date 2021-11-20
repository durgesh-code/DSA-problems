#include<bits/stdc++.h>
using namespace std;
struct  node
{
    int ele;
    struct node* next;
};
class linkLinst{
    struct node *head = NULL;
    
    public:
    void add(int ele)
    {

        struct node *temp = head , *ptr;
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->ele = ele;
        if(ptr == NULL)
            cout<<" node creation fail";
        else
        {
            if(head == NULL)
            {
                ptr->next == NULL;
                head = ptr;
                cout<<"pass 2"<<endl;
            }
            else{
                    
                while(temp->next != NULL)
                {
                    temp = temp->next; 
                }
                temp->next = ptr;
                ptr->next = NULL;
            }
        }
        cout<<" node insetion sucessfull"<<endl;
    }
    void addFront(int ele)
    {
        struct node* ptr;
        ptr = (struct node*)malloc(sizeof(struct node));
        if(ptr == NULL)
            cout<<"memory overflow";
        else{
            ptr->ele = ele;
            ptr->next = head;
            head = ptr;
        }
        cout<<"add node at front sucessfull"<<endl;
    }
    void travers()
    {
        struct node* temp = head;
        while(temp->next != NULL)
        {
            cout<<temp->ele<<" ";
            temp = temp->next;
        }
        cout<<temp->ele;
    }
};
int main()
{
    int n;
    cout<<" enter how many node add"<<endl;
    cin>>n;
    linkLinst l;
    for(int i = 0;i<n;i++)
    {
        int ele;
        cout<<" enter element";
        cin>>ele;
        l.add(ele);

    }
    l.travers();
    int front;
    cout<<" enter element to add front"<<endl;
    cin>>front;
    l.addFront(front);
    l.travers();
}
