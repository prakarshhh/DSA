#include <iostream>
#include <string>
using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void traverse(node *head)
// {
//     if (head == NULL)
//         return;
//     node *curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->data << endl;
//         curr = curr->next;
//     }
// }

// void insert(node *head, int data, int pos)
// {
//     node *to_add = new node(data);
//     if (pos == 0)
//     {
//         to_add->next = head;
//         head = to_add;
//     }
//     node *prev = head;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         prev = prev->next;
//     }
//     to_add->next = prev->next;
//     prev->next = to_add;
// }

// int mid(node *head)
// {
//     int count = 0;
//     node *temp=head;
//     while(temp!=NULL)
//     {
//         count++;
//         temp=temp->next;
//     }
//     node* current=head;
//     for(int i=0;i<count/2;i++)
//     {

//         current=current->next;

//     }
//     return current->data;
// }

// int main()
// {
//     node *n1 = new node(5);
//     node *n2 = new node(10);
//     node *n3 = new node(15);
//     node *n4 = new node(20);
//     node *head = n1;
//     head->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = NULL;
//     // traverse(head);
//     cout << endl;
//     // insert(head, 111, 3);
//     int res=mid(head);
//     // traverse(head);
//     // cout << endl;
//     cout << res;

// }

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertinto(node *head, int data, int pos)
{
    node *newnode = new node(data);
    if (pos == 0)
    {
        newnode->next = head;
        head = newnode;
    }
    node *prev = head;
    for (int i = 0; i < pos - 1; i++)
    {
        prev = prev->next;
    }
    newnode->next = prev->next;
    prev->next = newnode;
}

int mid_element(node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    node *mid = head;
    for (int i = 0; i < count / 2; i++)
    {
        mid = mid->next;
    }
    cout << mid->data;
}

void traverse(node *head)
{
    if (head == NULL)
        return;
    node *current = head;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

void delete_using_index(node *head, int pos)
{
    node *temp = head;
    int count = 0;
    if (pos == 0)
    {

        head = head->next;
        // delete temp;
    }

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
        if (count == pos)
        {
            break;
        }
    }
    node *prev = head;
    for (int i = 0; i < pos - 1; i++)
    {
        prev = prev->next;
    }
    prev->next = temp->next;
}

void delete_using_element(node *head, int val)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
        if (temp->data == val)
        {
            break;
        }
    }
    node *prev = head;
    for (int i = 0; i < count - 1; i++)
    {
        prev = prev->next;
    }
    prev->next = temp->next;
}

node *rev(node *head)
{
    node *curr = head;
    node *prev = NULL;
    while (curr != NULL)
    {
        node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

node *is_cycle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return fast;
        }
    }
    return NULL;
}

node *detect_starting(node *head)
{
    node *meat=is_cycle(head);
    node *start=head;
    while(meat!=start)
    {
        start=start->next;
        meat=meat->next;
    }
    return start;

}

node *middle(node *head)
{
    node *slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;

    }
    return slow;
}




int main()
{
    node *n1 = new node(12);
    node *n2 = new node(14);
    node *n3 = new node(45);
    node *n4 = new node(43);
    node *head = n1;
    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;
    // traverse(head);
    // cout << endl
    //      << "List after inserting an element: ";
    // insertinto(head, 6, 3);
    // cout << endl;
    // traverse(head);
    // cout << endl
    //      << "Middle element of the linked list is: " << endl;
    // mid_element(head);
    // cout << endl
    //      << endl
    //      << "After deleting an element from a particular index positon: " << endl;
    // delete_using_index(head, 2);
    // traverse(head);
    // cout << endl
    //      << endl
    //      << "After deleting a particular element from the linked list: " << endl;
    // delete_using_element(head, 43);
    // traverse(head);
    // cout << endl
    //      << endl
    //      << "After reversing: " << endl;
    // node *newhead = rev(head);
    // traverse(newhead);

    // node *ans = is_cycle(head);
    // cout << ans->data<<endl;
    // node *res = detect_starting(head);
    // cout << res->data;
    node *kuchbhi=middle(head);
    cout<<kuchbhi->data;
}
