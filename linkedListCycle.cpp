/*
given a linked list,
determine if it has a cycle in it 

to represent a cycle in a given linked list,
use an integer pos, which represent the position (0-indexed)
in the linked list where tail connects to.

If pos is -1, there is NO cycle in the linked list.
*/

/* 
use faster and slower runner 
faster one moves 2 steps, slower one moves 1 step
if there's a circle, the faster one will finally "catch" 
the "slower" one 
distance between these 2 pointers will decrease one every time

if there's no circle, the faster runner will reach the end of
the linked list (nullptr)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr)
            return false;
        
        // fast and slow pointers 
        ListNode *fast = head;
        ListNode *slow = head;
        
        // while the next and next next element exists
        while(fast->next && fast->next->next){
            fast = fast->next->next; // move fast two along 
            slow = slow->next; // move slow one along 
            
            if(fast == slow)
                return true; // if they meet, will be a circle 
        }
        return false;
    }
};