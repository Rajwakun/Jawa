#include <iostream>
#define MAXNYA 15
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