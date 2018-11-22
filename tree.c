#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

struct bit_node {
    int item;
    struct bit_node *l, *r;
};

typedef struct bit_node *Bit_node;

int *randomArray(int n){
    int *arr = malloc(sizeof(int)*n);
    if (arr){
        srand(time(NULL));
        for(int i=0; i<n; i++)
            arr[i] = rand()%100;
        return arr;
    }
    else{
        printf("Creazione dell'array fallita.\n");
        exit;
    }
}

void printArray(int *a, int n){
    for(int i=0; i<n; i++)
        printf("%d, ",a[i]);
    printf("\n");
}

void bit_printnode(Bit_node p){
    printf("%d", p -> item);
}

void bit_preorder(Bit_node p){
    if(p){
        bit_printnode(p);
        bit_preorder(p->l);
        bit_preorder(p->r);
    }
}

void bit_inorder(Bit_node p){
    if(p){
        bit_inorder(p->l);
        bit_printnode(p);
        bit_inorder(p->r);
    }
}

void bit_postorder(Bit_node p){
    if(p){
        bit_postorder(p->l);
        bit_postorder(p->r);
        bit_printnode(p);
    }
}

Bit_node bit_new(int n){
    Bit_node b = malloc(sizeof(Bit_node));
    b -> item = n;
    return b;
}

 /*void bit_printassummary(Bit_node p, int spaces){

 }*/

Bit_node bit_arr2tree(int a[], int size, int i){
    Bit_node b = malloc(sizeof(Bit_node));
    b ->

}

int main() {
    int *a = randomArray(N);
    printArray(a,N);
    return 0;
}
