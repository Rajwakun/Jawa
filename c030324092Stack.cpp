#include <iostream>
#define MAXNYA 10
using namespace std;

typedef int ItemType;

typedef struct{
    ItemType Item[MAXNYA];
    int count;
} Stack;

void awal(Stack *S) {
    S->count = 0;
}
int penuh(Stack *S){
    return (S->count == MAXNYA);
}

int kosong(Stack *S){
    return (S->count == 0);
}
void pop(Stack *S, ItemType *x) {
    if (kosong(S)) {
        cout << "Stack kosong!" << endl;
    } else {
        --(S->count);
        *x = S->Item[S->count];
    }
}
void push(ItemType x, Stack *S){
    if (penuh(S)) {
        cout << "Stack penuh!" << endl;
    } else {
        S->Item[S->count] = x;
        ++(S->count);
    }
}
