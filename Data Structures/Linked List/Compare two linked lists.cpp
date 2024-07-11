bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp1=head1;
    SinglyLinkedListNode* temp2=head2;
    int ans=1;
    while(temp1 != nullptr && temp2 != nullptr){
        if(temp1->data != temp2->data)
           return 0;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1 != nullptr || temp2 != nullptr)
       ans=0;
    return ans;

}