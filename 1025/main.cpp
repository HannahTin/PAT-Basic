#include <bits/stdc++.h>
using namespace std;
struct ListNode{
    string Address, Next;
    int Data;
    ListNode* next;
    ListNode(string a,int d,string n):Address(a),Data(d),Next(n){}
};
ListNode* reverseList(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while(curr){
        ListNode* next = curr->next;
        curr->next = prev;
        prev= curr;
        curr = next;
    }
    return prev;
}
int main() {
    string startAddress;
    int N,K;
    cin >> startAddress >> N >> K;
    unordered_map<string,ListNode*> ump;
    for(int i = 0;i < N;i++){
        string a, n;
        int d;
        cin>>a>>d>>n;
        ump[a] = new ListNode(a,d,n);
    }
    ListNode* head =  ump[startAddress];
    ListNode* curr = head;
    while(curr->Next != "-1"){
            curr ->next = ump[curr->Next];
            curr = curr->next;
    }
    ListNode* slow = nullptr;
    ListNode* fast = nullptr;
    ListNode* newhead = new ListNode("0",0,"0");
    curr=newhead;
    while(head){
        slow = head;
        fast = head;
        int count = K;
        while(count>1 && fast->next){
            fast = fast->next;
            count--;
        }
        if(count==1) {
            head = fast->next;
            fast->next = nullptr;
            curr->next = reverseList(slow);
            curr = slow;
        }
        else {
            curr->next = slow;
            break;
        }
    }
    for(ListNode* tmp = newhead->next; tmp!= nullptr; tmp = tmp->next){
        if(tmp->next == nullptr) tmp->Next = "-1";
        else tmp->Next = tmp->next->Address;
        cout<< tmp->Address<< " "<<tmp->Data <<" "<< tmp->Next<<endl;
    }
    return 0;
}
