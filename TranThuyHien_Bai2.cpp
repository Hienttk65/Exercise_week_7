//Phan a:

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

using namespace std;
struct Node {
    int num;
    struct Node *Next;
};

typedef struct Node *PToNode;

int main() {
    clock_t start, end;   
    double time_use;
	start = clock();
    int n, m, i;
    PToNode head, p, q;

    cout<< "Please input n players: ";
    cin>>n;
    cout<< "Please input the mth player: ";
    cin>>m;

    head = (PToNode)malloc(sizeof(struct Node));
    head->num = 1;

    p = head;
    for (i = 2; i <= n; i++) {
        q = (PToNode)malloc(sizeof(struct Node));
        q->num = i;
        p->Next = q;
        p = q;
    }
    p->Next = head;

    while (q->Next != q) {
        for (i = 1; i < m+1; i++)
            q = q->Next;
        p = q->Next;
        cout<< p->num<<" ";
        q->Next = p->Next;
        free(p);
    }
    cout<<q->num<<" ";
    free(q);
    

    end = clock(); 
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
	cout<<"Fasting time is: " << time_use;
    return 0;
}


//Phan b
/*
độ phức tạp là O(n)
với n=1001, m=1 => time=

*/