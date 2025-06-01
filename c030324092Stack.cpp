#include <iostream>
#define MAXNYA 15
using namespace std;

typedef int ItemType;

typedef struct{
    ItemType Item[MAXNYA];
    int count;
} Stack;

void awal(Stack *S) {
    S->Count = 0;
}
int penuh(Stack *S){
    return (S->Count == MAXNYA);
}