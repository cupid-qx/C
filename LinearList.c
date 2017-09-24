//
// Created by cupid on 2017/7/20.
//

#include <stdbool.h>
#include <stdio.h>
#include <malloc.h>

#define MAX_SIZE 50
typedef struct {
    int data[MAX_SIZE];
    int length;// 顺序表长度
} SeqList;

//typedef struct {
//    int *data;
//    int Maxsize, length;
//} SeqList_D;


void printList(SeqList *list) {
    if (list->length == 0)
        printf("当前线性表为空");
    else {
        for (int i = 0; i < list->length; ++i) {
            printf("[%4d]", list->data[i]);
        }
    }
    printf("\n");
}

SeqList *creatList() {
    SeqList *list = malloc(sizeof(SeqList));
    list->length = 0;
    return list;
}

void insert(SeqList *list, int n, int pos) {
    if (list->length < MAX_SIZE) {
        list->data[list->length] = n;
        list->length += 1;
    }
}


bool InsertList(SeqList *L, int i, int e) {

}