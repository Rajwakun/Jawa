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
int main(){
    Stack Rajwa;
    awal(&Rajwa);

    ItemType *Rawr = Rajwa.Item;
    pop(&Rajwa, Rawr);
    push(50, &Rajwa);
    push(25, &Rajwa);
    push(21, &Rajwa);
    push(86, &Rajwa);
    pop(&Rajwa, Rawr);
    push(53, &Rajwa);
    push(85, &Rajwa);
    push(24, &Rajwa);
    push(76, &Rajwa);
    push(84, &Rajwa);
    push(39, &Rajwa);
    push(98, &Rajwa);
    pop(&Rajwa, Rawr);
    push(133, &Rajwa);
    push(142, &Rajwa);
    push(155, &Rajwa);
    return 0;
}