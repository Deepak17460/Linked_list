class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        
        // Corner Case
        if(head->next==NULL) return head;
        ListNode *slast=head,*last=head->next;
        while(last->next!=NULL){
            last=last->next;
            slast=slast->next;
        }
        slast->next=NULL;
        last->next=head;
        return last;
        
    }
};
// Time Complexity is O(n) & Space Complexity is O(1)
