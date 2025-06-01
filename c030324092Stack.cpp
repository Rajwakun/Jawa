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