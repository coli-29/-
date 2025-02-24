#include"tool.h"

void seekName(node *head, char *name) {
    int cout = 0;
    int h = 0; //条件判断变量
    node *x = head->next; //搜索指针
    printf(
        "____________________________________________________________________________________________________________________\n");
    printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
    while (x) {
        if (strcmp(x->name, name) == 0) {
            printf(
                "____________________________________________________________________________________________________________________\n");
            printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n", x->ID, x->name, x->idStatus, x->sex,
                   x->nation,\
                   x->address, x->chinGrade, x->mathGrade, x->englishGrade, x->cGrade, x->peGrade, x->age);
            h = 1;
            cout++;
        }
        x = x->next;
    }
    if (h == 1) {
        printf("共%d人", cout);
    }
    if (h == 0) {
        printf("查无此人");
    }
}

void seekId(node *head, int num) {
    int h = 0; //条件判断
    node *x = head->next; //搜索指针
    printf(
        "____________________________________________________________________________________________________________________\n");
    printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
    while (x) {
        if (x->ID == num) {
            printf(
                "____________________________________________________________________________________________________________________\n");
            printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n", x->ID, x->name, x->idStatus, x->sex,
                   x->nation,\
                   x->address, x->chinGrade, x->mathGrade, x->englishGrade, x->cGrade, x->peGrade, x->age);
            h = 1;
        }
        x = x->next;
    }
    if (h == 0) {
        printf("查无此人");
    }
}
