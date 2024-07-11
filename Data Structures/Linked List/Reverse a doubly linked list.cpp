DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* prev=nullptr;
    DoublyLinkedListNode* curr=llist;
    DoublyLinkedListNode* after=nullptr;
    while(curr != nullptr){
        after=curr->next;
        curr->next=prev;
        curr->prev=after;
        prev=curr;
        curr=after;
    }
    
    return prev;
}