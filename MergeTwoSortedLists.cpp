///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        ListNode* answer = nullptr;
//        ListNode* head = nullptr;
//        while (list1 != nullptr && list2 != nullptr) {
//            if (list1->val < list2->val) mergeList(&list1, &answer, &head);
//            else mergeList(&list2, &answer, &head);
//        }
//        while (list1 != nullptr) mergeList(&list1, &answer, &head);
//        while (list2 != nullptr) mergeList(&list2, &answer, &head);
//        return head;
//    }
//
//    void mergeList(ListNode** list, ListNode** answer, ListNode** head) {
//        if (*answer == nullptr) {
//            *answer = *list;
//            if (*head == nullptr) *head = *answer;
//        }
//        else {
//            (*answer)->next = *list;
//            *answer = (*answer)->next;
//        }
//        *list = (*list)->next;
//    }
//};