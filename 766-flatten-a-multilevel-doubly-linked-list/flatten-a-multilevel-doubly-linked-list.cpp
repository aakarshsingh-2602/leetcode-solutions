/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL) return head;

        Node* current=head;
        while(current!=NULL){
            if(current->child!=NULL){
                Node* sec = current->next;
                current->next=flatten(current->child);
                current->next->prev=current;
                current->child= NULL;

                while(current->next!=NULL)
                    current=current->next;
                
                if(sec!=NULL){
                current->next=sec;
                sec->prev= current;
                }

            }
            current=current->next;
        }
        return head;
    }
};