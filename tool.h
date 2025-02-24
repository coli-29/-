#ifndef  __SOMEFILE_H__
#define   __SOMEFILE_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ADMIN_USERNAME "1234"
#define ADMIN_PASSWORD "5678"
typedef struct node {
    char name[20];
    char idStatus[19];
    char nation[16];
    char address[50];
    int ID;
    int age;
    char sex[3];
    int mathGrade;
    int chinGrade;
    int englishGrade;
    int cGrade;
    int peGrade;
    int totalSore;
    struct node* next;
}node;
typedef struct User {
    char username[50];
    char password[50];
    char role[20];
} User;
void inPut(node* head, char*name,char* idStatus ,char* nation,char* address,int ID, char* sex,\
int mathGrade,int chinGrade,int englishGrade,int cGrade,int peGrade,int totalSore,int age);
void aWork(node *head,char* username);
void tWork(node *head,char* username);
void sWork(node *head,char* username);
void seekId(node* head, int num);
void seekName(node* head, char* name);
void delId(node* head, int num);
void delName(node* head, char* name);
void printId(node* head1);
void printGrade(node* head1);
void printSubject(node* head,char* grade);
void printCommon(node* head);
void changeId(node* head, int id);
void changeName(node* head, char* name);
void registerUser();
int login(char* username, char* password);
int adminLogin();
void changePassword(char* username);
void aMenu();
void tMenu();
void sMenu();
void loadData(node* head);
void saveData(node* head);
#endif
