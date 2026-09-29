/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int count(ListNode* head){
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        return c;
    }
    ListNode* sortList(ListNode* head) {
        int n=count(head);
        // for(int i=0;i<n;i++){
        //     ListNode* temp=head;
        //     while(temp!=NULL && temp->next!=NULL){
        //         if(temp->val>temp->next->val){
        //             swap(temp->val,temp->next->val);
        //         }
        //         temp=temp->next;
        //     }
        // }
        vector<int> a;
        ListNode* temp=head;
        for(int i=0;i<n;i++){
            a.push_back(temp->val);
            temp=temp->next;
        }
        sort(a.begin(),a.end());
        temp=head;
        for(int i=0;i<n;i++){
            temp->val=a[i];
            temp=temp->next;
        }
        return head;
    }
};