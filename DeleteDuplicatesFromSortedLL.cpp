
//Logic for removing duplicates from sorted linked list

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* traverse=head->next;
    SinglyLinkedListNode* prev=head;
    while(traverse!=NULL)
    {
        SinglyLinkedListNode* p;
        if(prev->data==traverse->data)
        {
            p=traverse;
            traverse=traverse->next;
            prev->next=traverse;
            free(p);
        }
        else
        {
            prev=traverse;
            traverse=traverse->next;
        }
       
    }
    
    return head;

}
