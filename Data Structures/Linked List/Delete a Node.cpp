SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* head=llist;
    if(head->next == nullptr)
       return nullptr;
    if(position == 0){
        SinglyLinkedListNode* temp=head;
        head=temp->next;
    }
    else{
        SinglyLinkedListNode* temp=head;
        SinglyLinkedListNode* prev=nullptr;
        int i=0;
        while(i<position && temp->next != nullptr){
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=temp->next;
        temp->next=nullptr;
    }
    return head;
    
}