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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp->next!=NULL){
            ListNode* m=temp->next;
            int max=temp->val;
            while(m!=NULL){
                if(m->val > max){
                    max=m->val;
                    break;
                }
                m=m->next;
            }
            if(max==temp->val){
                arr.push_back(0);
            }
            else{
                arr.push_back(max);
            }
            temp=temp->next;
        }
        arr.push_back(0);
        return arr;
    }
};