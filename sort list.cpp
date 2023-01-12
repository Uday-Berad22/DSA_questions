//https://leetcode.com/problems/sort-list/submissions/876602603/
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
  void conquare(int arr[],int si,int mid,int ei)
{
    int n=ei-si+1;
    int merge[n];
    int idx1=si;
    int idx2=mid+1;
    int x=0;
    while(idx1<=mid&&idx2<=ei)
    {
        if(arr[idx1]<=arr[idx2])
        {
            merge[x++]=arr[idx1++];
        }
        else
        {
            merge[x++]=arr[idx2++];
        }
    }
    while(idx1<=mid)
    {
        merge[x++]=arr[idx1++];
    }
    while(idx2<=ei)
    {
        merge[x++]=arr[idx2++];
    }
    for(int i=0,j=si;i<n;i++,j++)
    {
        arr[j]=merge[i];
    }
}

void divide(int arr[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int mid=si+(ei-si)/2;
    divide(arr,si,mid);
    divide(arr,mid+1,ei);
    conquare(arr,si,mid,ei);
}

    ListNode* sortList(ListNode* head) {
        ListNode* p=head;
        int arr[100000];
        int count=0,i=0;
        while(p!=NULL)
        {
            count++;
            arr[i++]=p->val;
            p=p->next;
        }
        divide(arr,0,count-1);
        p=head;
        i=0;
        while(p!=NULL)
        {
            p->val=arr[i++];
            p=p->next;
        }
        return head;
    }
};
