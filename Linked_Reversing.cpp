  ListNode* reverseList(ListNode* head) {
        // caughting
        if(head==NULL) return NULL;
        // using recursion Method
        if(head->next==NULL) return head;
        ListNode* newHead=reverseList(head->next);
        ListNode* temp=head->next;
        temp->next=head;
        head->next=NULL;
        return newHead;
    }

// Complexity wise is more like O(n) Tc & O(n) Sc where n is the number of nodes
