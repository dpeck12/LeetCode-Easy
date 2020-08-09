/*
First fast forward each pointer to the end to find their
distances from the end.
Then, can fast forward the farther points so they're the same
distance from the end.
Finally, fast forward both at same time until they coincide.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto currA = headA;
        auto currB = headB;
        
        int countA = 0;
        int countB = 0;
        
        // while current A node exists
        while(currA){
            // multiple operations on one line 
            currA = currA->next, countA++;
        }
        
        while(currB){
            currB = currB->next, countB++;
        }
        
        int diff = std::abs(countA - countB);
        
        if(countB > countA){
            swap(headA, headB); // make pB start at A, and pA start at B
        }
        
        while(diff--){
            headA = headA->next; // move headA along by 1
        }
        
        // while headA is NOT equal to headB
        while(headA != headB){
            headA = headA->next, headB = headB->next;
        }
        return headA;
    }
};