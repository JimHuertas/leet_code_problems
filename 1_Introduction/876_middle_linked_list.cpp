/**
 * Given the head of a singly linked list, return the middle node of the linked list.
 * If there are two middle nodes, return the second middle node.
 * 
 * Input: head = [1,2,3,4,5]
 * Output: [3,4,5]
 * Explanation: The middle node of the list is node 3.
*/

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    //contamos el linked list
    ListNode* aux = head;
    int count = 0;
    while(aux != nullptr){
        count++;
        aux = aux->next;
    }

    aux = head;
    int count_aux = count/2;
    while(count_aux--){
        aux = aux->next;
    }

    ListNode *ptr = aux; 
    ListNode *result = new ListNode(aux->val);
    while(ptr != nullptr){
        ptr = ptr->next;
        result->next = ptr;
        result = result->next;
    }
    result = aux;

    return result;
}

int main(){
    int n;
    while(cin >> n){
        
        int a;
        cin>>a;
        ListNode *linked = new ListNode(a); 
        ListNode *aux = linked;
        n--;
        while(n--){
            cin>>a;
            ListNode *next_node = new ListNode(a);
            aux->next = next_node;
            aux = aux->next;
        }
        ListNode *result = middleNode(linked);
        while(result != nullptr) {
            cout<<result->val<<" -> ";
            result = result->next;
        } cout<<" NULL"<<endl;
    }
    return 0;
}