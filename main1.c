#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "tool.h"
int main()
{
    node* head = (node*)malloc(sizeof(node));//创建头结点
    head->next = NULL;
    int choice;
    while (1) {
        printf("欢迎进入学生信息管理系统\n");
        printf("1. 管理员登录\n");
        printf("2. 学生登录\n");
        printf("3. 教师登录\n");
        printf("4. 退出\n");
        printf("输入数字选择登录方式：");
        scanf("%d", &choice);

        char username[50], password[50];
        int loginResult = 0;

        switch (choice) {
            case 1:
                if(adminLogin()) {
                    aMenu();
                    while(1) {
                        aWork(head,username);
                    }

                } else {
                        printf("登录失败!");
                    }
                break;
            case 2:
                printf("请输入用户名: ");
                scanf("%s", username);
                printf("请输入密码: ");
                scanf("%s", password);
                loginResult = login(username, password);
                if (loginResult == 2) {
                    printf("登陆成功!\n");
                    loadData(head);
                    sMenu();
                    while (1)
                    {
                        sWork(head,username);
                    }
                } else {
                    printf("登录失败!\n");
                }
                break;
            case 3:
                printf("请输入用户名: ");
                scanf("%s", username);
                printf("请输入密码: ");
                scanf("%s", password);
                loginResult = login(username, password);
                if (loginResult == 3) {
                    printf("登陆成功!\n");
                    loadData(head);
                    tMenu();
                    while (1)
                    {
                        tWork(head,username);
                    }
                } else {
                    printf("登录失败!\n");
                }
                break;
            case 4:
                printf("退出程序！\n");
                return 0;
            default:
                printf("请输入正确的数字！\n");
        }

    }
}