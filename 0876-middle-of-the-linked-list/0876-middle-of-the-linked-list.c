/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int get_node_count(struct ListNode *head){
	struct ListNode *temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count/2+1;	
}
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp=head;
    int cnt=get_node_count(head);
    while(cnt>1){
        temp=temp->next;
        cnt--;
    }
    return temp;
}