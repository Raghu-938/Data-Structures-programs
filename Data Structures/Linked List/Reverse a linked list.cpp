SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* prev=nullptr;
    SinglyLinkedListNode* curr=llist;
    SinglyLinkedListNode* after=nullptr;
    while(curr != nullptr){
        after=curr->next;
        curr->next=prev;
        prev=curr;
        curr=after;
    }
    return prev;
}