#include "include/tool.h"

#include <time.h>
//录入
void inPut(node *head, char *name, char *idStatus, char *nation, char *address, int ID, char *sex, int mathGrade,
           int chinGrade, int englishGrade, int cGrade, int peGrade, int totalSore, int age) //录入新学生
{
    node *x = head;
    while (x->next != NULL) {
        if (x->ID == ID) {
            printf("学号已存在！录入失败\n");
            return;
        }
        x = x->next;
    }

    node *newnode = (node *) malloc(sizeof(node));
    strcpy(newnode->name, name);
    strcpy(newnode->idStatus, idStatus);
    strcpy(newnode->nation, nation);
    strcpy(newnode->address, address);
    strcpy(newnode->sex, sex);
    newnode->ID = ID;
    newnode->mathGrade = mathGrade;
    newnode->chinGrade = chinGrade;
    newnode->englishGrade = englishGrade;
    newnode->cGrade = cGrade;
    newnode->peGrade = peGrade;
    newnode->totalSore = totalSore;
    newnode->age = age;
    newnode->next = NULL;
    node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
    printf("添加成功!\n");
}

//教师端功能
void tWork(node *head, char *username) {
    char num;
    printf("请选择你要执行的操作:\n");
    scanf("%c", &num);
    switch (num) {
        case '1': {
            char name[20]; //姓名
            char idStatus[18]; //身份证号
            char nation[16]; //民族
            char address[50];
            int id; //学号
            int age; //年龄
            char sex[3]; //性别
            int mathGrade; //数学成绩
            int chinGrade; //语文成绩
            int englishGrade; //英语成绩
            int cGrade; //c语言成绩
            int peGrade; //体育成绩
            int totalSore; //总分
            int x;
            printf("请输入姓名：");
            scanf("%s", name);
            printf("\n请输入10位数学号:");
            x = scanf("%d", &id);
            while (1) {
                //1;
                int n = id;
                int cout = 0;
                while (n != 0) {
                    n /= 10;
                    cout++;
                }
                if (x == 1) {
                    if (cout == 10)
                        break;
                    else {
                        printf("请输入正确位数学号!\n");
                        x = scanf("%d", &id);
                    }
                } else {
                    printf("请输入数字类型的学号!");
                    x = scanf("%d", &id);
                }
            }
            printf("\n请输入身份证号:");
            scanf("%s", idStatus);
            while (1) {
                //1;
                if (strlen(idStatus) == 18) {
                    break;
                } else {
                    printf("请输入正确的身份证号!\n");
                    scanf("%s", idStatus);
                }
            }
            printf("\n请输入民族:");
            scanf("%s", nation);
            printf("\n请输入性别:");
            scanf("%s", sex);
            char boy[10] = "男";
            char girl[10] = "女";
            while (1) {
                if (strcmp(sex, boy) == 0 || strcmp(sex, girl) == 0)
                    break;
                else {
                    printf("\n请输入正确性别：");
                    scanf("%s", sex);
                }
            }
            printf("\n请输入家庭住址:");
            scanf("%s", address);
            printf("\n请输入语文成绩:");
            scanf("%d", &chinGrade);
            while (1) {
                //1;
                if (chinGrade >= 0 && chinGrade <= 100) {
                    break;
                }
                printf("\n请输入0-100的分数!\n");
                scanf("%d", &chinGrade);
            }
            printf("\n请输入数学成绩:");
            scanf("%d", &mathGrade);
            while (1) {
                //1;
                if (mathGrade >= 0 && mathGrade <= 100) {
                    break;
                }
                printf("\n请输入0-100的分数!\n");
                scanf("%d", &mathGrade);
            }
            printf("\n请输入英语成绩:");
            scanf("%d", &englishGrade);
            while (1) {
                //1;
                if (englishGrade >= 0 && englishGrade <= 100) {
                    break;
                }
                printf("\n请输入0-100的分数!\n");
                scanf("%d", &englishGrade);
            }
            printf("\n请输入c语言成绩:");
            scanf("%d", &cGrade);
            while (1) {
                //1;
                if (cGrade >= 0 && cGrade <= 100) {
                    break;
                }
                printf("\n请输入0-100的分数!\n");
                scanf("%d", &cGrade);
            }
            printf("\n请输入体育成绩:");
            scanf("%d", &peGrade);
            while (1) {
                //1;
                if (peGrade >= 0 && peGrade <= 100) {
                    break;
                }
                printf("\n请输入0-100的分数!\n");
                scanf("%d", &peGrade);
            }
            printf("\n请输入年龄:");
            scanf("%d", &age);
            while (1) {
                //1;
                if (age >= 0) {
                    break;
                }
                printf("\n请输入正数!\n");
                scanf("%d", &age);
            }
            totalSore = chinGrade + mathGrade + englishGrade + cGrade + peGrade;

            inPut(head, name, idStatus, nation, address, id, sex, mathGrade, chinGrade, englishGrade, cGrade,
                  peGrade, totalSore, age);
        }
        break;
        case '2': {
            system("cls");
            printf("1.按学号查找\n");
            printf("2.按姓名查找\n");
            printf("3.返回\n");
            while (1) {
                char a;
                //1;
                scanf("%c", &a);
                if (a == '1') {
                    printf("\n请输入学号:\n");
                    int num;
                    scanf("%d", &num);
                    printf("\n");
                    seekId(head, num);
                } else if (a == '2') {
                    printf("请输入姓名\n");
                    char name[20];
                    scanf("%s", name);
                    seekName(head, name);
                    printf("\n");
                } else if (a == '3') {
                    system("cls");
                    tMenu();
                    break;
                } else {
                    printf("请输入正确的数字\n");
                }
            }
        }
        break;
        case '3': {
            system("cls");
            printf("1.按照学号删除\n");
            printf("2.按照姓名删除\n");
            printf("3.返回\n");
            printf("请输入数字：\n");
            while (1) {
                //1;
                char a;
                scanf("%c", &a);
                if (a == '1') {
                    printf("请输入学号:\n");
                    int num;
                    scanf("%d", &num);
                    delId(head, num);
                    printf("\n");
                } else if (a == '2') {
                    printf("请输入姓名:\n");
                    char name[20];
                    scanf("%s", name);
                    delName(head, name);
                    printf("\n");
                } else if (a == '3') {
                    system("cls");
                    tMenu();
                    break;
                } else {
                    printf("请输入正确的数字\n");
                }
            }
        }
        break;
        case '4': {
            char num;
            system("cls");
            printf("1.按照学号排序\n");
            printf("2.按照成绩排序\n");
            printf("3.按照学科排序\n");
            printf("4.信息汇总\n");
            printf("5.返回\n");
            while (1) {
                //1;
                printf("请输入数字:");
                scanf("%c", &num);
                if (num == '1') {
                    printId(head);
                    printf("\n");
                }
                if (num == '2') {
                    printGrade(head);
                    printf("\n");
                }
                if (num == '3') {
                    char subject[10];
                    printf("请输入学科:");
                    scanf("%s", subject);
                    printSubject(head, subject);
                }
                if (num == '4') {
                    printCommon(head);
                }
                if (num == '5') {
                    system("cls");
                    tMenu();
                    break;
                } else {
                    printf("请输入正确的数字\n");
                }
            }
        }
        break;
        case '5': {
            char num;
            system("cls");
            printf("1.按照学号修改\n");
            printf("2.按照姓名修改\n");
            printf("3.返回\n");
            while (1) {
                //1;
                printf("请输入数字:");
                scanf("%c", &num);
                if (num == '1') {
                    int id;
                    printf("请输入学号:");
                    scanf("%d", &id);
                    while (1) {
                        int cout = 0;
                        int n = id;
                        while (n != 0) {
                            n /= 10;
                            cout++;
                        }
                        if (cout == 10)
                            break;
                        else {
                            printf("请输入正确学号！\n");
                            scanf("%d", &id);
                        }
                    }
                    changeId(head, id);
                    printf("\n");
                } else if (num == '2') {
                    char name[20];
                    printf("请输入姓名:");
                    scanf("%s", name);
                    changeName(head, name);
                    printf("\n");
                } else if (num == '3') {
                    system("cls");
                    tMenu();
                    break;
                } else {
                    printf("请输入正确的数字\n");
                }
            }
        }
        break;
        case '6': {
            system("cls");
            changePassword(username);
        }
        case '7': {
            printf("\n感谢您的使用！");
            saveData(head);
            exit(0);
        }
        break;

        default:
            printf("请输入正确的数字\n");
        //1;
            break;
    }
}

//学生端功能
void sWork(node *head, char *username) {
    char num;
    printf("请选择你要执行的操作:\n");
    scanf("%c", &num);
    switch (num) {
        case '1': {
            system("cls");
            printf("1.按学号查找\n");
            printf("2.按姓名查找\n");
            printf("3.返回\n");
            while (1) {
                char a;
                //1;
                scanf("%c", &a);
                if (a == '1') {
                    printf("\n请输入学号:\n");
                    int num;
                    scanf("%d", &num);
                    printf("\n");
                    seekId(head, num);
                } else if (a == '2') {
                    printf("请输入姓名\n");
                    char name[20];
                    scanf("%s", name);
                    seekName(head, name);
                    printf("\n");
                } else if (a == '3') {
                    system("cls");
                    sMenu();
                    break;
                } else {
                    printf("请输入正确的数字\n");
                }
            }
        }
        break;
        case '2': {
            char num;
            system("cls");
            printf("1.按照学号排序\n");
            printf("2.按照成绩排序\n");
            printf("3.按照学科排序\n");
            printf("4.信息汇总\n");
            printf("5.返回\n");
            while (1) {
                //1;
                printf("请输入数字:");
                scanf("%c", &num);
                if (num == '1') {
                    printId(head);
                    printf("\n");
                }
                if (num == '2') {
                    printGrade(head);
                    printf("\n");
                }
                if (num == '3') {
                    char subject[10];
                    printf("请输入学科:");
                    scanf("%s", subject);
                    printSubject(head, subject);
                }
                if (num == '4') {
                    printCommon(head);
                }
                if (num == '5') {
                    system("cls");
                    sMenu();
                    break;
                } else {
                    printf("请输入正确的数字\n");
                }
            }
        }
        break;
        case '3': {
            system("cls");
            changePassword(username);
        }
        break;
        case '4': {
            printf("\n感谢您的使用！");
            // saveData(head);
            exit(0);
        }
        break;

        default:
            printf("请输入正确的数字\n");
        //1;
            break;
    }
}

//载入数据
void loadData(node *head) {
    char name[30]; //姓名
    char idStatus[19]; //身份证号
    char nation[16]; //民族
    char address[50];
    int id; //学号
    int age; //年龄
    char sex[3]; //性别
    int mathGrade; //数学成绩
    int chinGrade; //语文成绩
    int englishGrade; //英语成绩
    int cGrade; //c语言成绩
    int peGrade; //体育成绩
    FILE *fp = NULL;
    FILE *fp2 = NULL;
    int i = 0; //计数器
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        perror("打开文件失败");
        return;
    }
    while (fscanf(fp, "%d %s %s %s %s %s %d %d %d %d %d %d", &id, name, idStatus, sex, nation, address, &chinGrade,
                  &mathGrade, &englishGrade, &cGrade, &peGrade, &age) != EOF) {
        i++;
    }
    int j = 0;
    fclose(fp);
    fp2 = fopen("students.txt", "r");
    while (fscanf(fp2, "%d %s %s %s %s %s %d %d %d %d %d %d", &id, name, idStatus, sex, nation, address,\
                  &chinGrade, &mathGrade, &englishGrade, &cGrade, &peGrade, &age) != EOF) {
        //创建新节点
        node *newnode = (node *) malloc(sizeof(node));
        strcpy(newnode->name, name);
        strcpy(newnode->idStatus, idStatus);
        strcpy(newnode->nation, nation);
        strcpy(newnode->address, address);
        strcpy(newnode->sex, sex);
        newnode->ID = id;
        newnode->mathGrade = mathGrade;
        newnode->chinGrade = chinGrade;
        newnode->englishGrade = englishGrade;
        newnode->cGrade = cGrade;
        newnode->peGrade = peGrade;
        newnode->age = age;
        newnode->totalSore = mathGrade + chinGrade + englishGrade + cGrade + peGrade;
        node *x = head;
        while (x->next != NULL) {
            x = x->next;
        }
        x->next = newnode;
        newnode->next = NULL;
        j++;
        if (i == j)
            break;
    }

    fclose(fp2);
}

//保存数据
void saveData(node *head) {
    if (head->next == NULL)
        return;
    node *newnode = head->next;
    FILE *fp = NULL;
    fp = fopen("students.txt", "w+");
    while (newnode != NULL) {
        fprintf(fp, "%d\t%s\t%s\t%s\t%8s\t%14s\t%d\t%d\t%d\t%d\t%d\t%d\n", newnode->ID, newnode->name,
                newnode->idStatus, newnode->sex, newnode->nation, newnode->address,\
                newnode->chinGrade, newnode->mathGrade, newnode->englishGrade, newnode->cGrade, newnode->peGrade,
                newnode->age);
        newnode = newnode->next;
    }

    fclose(fp);
}

// 注册用户
void registerUser() {
    FILE *fp = fopen("users.txt", "a+");
    if (fp == NULL) {
        printf("ERROR!\n");
        return;
    }
    User newUser;
    char role[20];

    printf("输入用户名: ");
    scanf("%s", newUser.username);
    printf("输入密码: ");
    scanf("%s", newUser.password);
    printf("输入角色 (student/teacher): ");
    scanf("%s", role);
    strcpy(newUser.role, role);
    fprintf(fp, "%s %s %s\n", newUser.username, newUser.password, newUser.role);
    fclose(fp);
    printf("注册成功！\n");
}

// 登录功能
int login(char *username, char *password) {
    FILE *fp = fopen("users.txt", "r");
    if (fp == NULL) {
        printf("Error!\n");
        return 0;
    }

    User user;
    while (fscanf(fp, "%s %s %s", user.username, user.password, user.role) != EOF) {
        if (strcmp(user.username, username) == 0 && strcmp(user.password, password) == 0) {
            fclose(fp);
            return strcmp(user.role, "admin") == 0 ? 1 : (strcmp(user.role, "student") == 0 ? 2 : 3);
        }
    }
    fclose(fp);
    return 0;
}

//管理员登录
int adminLogin() {
    char username[50], password[50];
    printf("请输入账号: ");
    scanf("%s", username);
    printf("请输入密码: ");
    scanf("%s", password);
    if (strcmp(username, ADMIN_USERNAME) == 0 && strcmp(password, ADMIN_PASSWORD) == 0) {
        printf("登陆成功!\n");
        return 1;
    } else {
        printf("登录失败!\n");
        return 0;
    }
}

// 修改密码
void changePassword(char *username) {
    char oldPassword[50], newPassword[50];
    FILE *fp = fopen("users.txt", "r+");
    if (fp == NULL) {
        printf("Error!\n");
        return;
    }

    User user;
    long pos;
    while (fscanf(fp, "%s %s %s", user.username, user.password, user.role) != EOF) {
        if (strcmp(user.username, username) == 0) {
            printf("请输入原密码: ");
            scanf("%s", oldPassword);
            if (strcmp(user.password, oldPassword) == 0) {
                printf("请输入新密码: ");
                scanf("%s", newPassword);
                strcpy(user.password, newPassword);

                pos = ftell(fp) - (strlen(user.username) + strlen(user.password) + strlen(user.role) + 3);
                fseek(fp, pos, SEEK_SET);
                fprintf(fp, "%s %s %s\n", user.username, user.password, user.role);
                fclose(fp);
                printf("密码修改成功.\n");
                return;
            } else {
                printf("原密码输入错误!\n");
                fclose(fp);
                return;
            }
        }
    }
    fclose(fp);
    printf("User not found!\n");
}

// 管理员端功能
void aWork(node *head, char *username) {
    char num;
    printf("请选择你要执行的操作:\n");
    scanf("%c", &num);
    switch (num) {
        case '1': {
            registerUser();
        }
        break;
        case '2': {
            registerUser();
        }
        break;
        case '3': {
            tMenu();
            loadData(head);
            while (1) {
                tWork(head, username);
            }
        }
        break;
        case '4': {
            FILE *fp = fopen("users.txt", "r");
            if (fp == NULL) {
                printf("Error!\n");
                return;
            }

            User user;
            printf("所有用户信息:\n");
            printf("用户名\t密码\t身份\n");
            while (fscanf(fp, "%s %s %s", user.username, user.password, user.role) != EOF) {
                printf("%s\t%s\t%s\n", user.username, user.password, user.role);
            }

            fclose(fp);
        }
        break;
        case '5': {
            printf("\n感谢您的使用！");
            saveData(head);
            exit(0);
        }
        break;

        default:
            printf("请输入正确的数字！\n");
        //1;
            break;
    }
}

void aMenu() {
    printf("*********************************\n");
    printf("*       学生管理系统            *\n");
    printf("*       1.注册学生账号          *\n");
    printf("*       2.注册教师账号              *\n");
    printf("*       3.进入教师管理页面         *\n");
    printf("*      	4.显示所有账户信息             *\n");
    printf("*       5.退出程序             *\n");
    printf("*********************************\n");
}

void tMenu() {
    printf("*********************************\n");
    printf("*       学生管理系统            *\n");
    printf("*       1.录入学生数据          *\n");
    printf("*       2.查询界面              *\n");
    printf("*       3.删除学生信息          *\n");
    printf("*      	4.信息汇总              *\n");
    printf("*       5.修改学生数据          *\n");
    printf("*       6.修改密码              *\n");
    printf("*       7.退出程序并存档              *\n");
    printf("*********************************\n");
}

void sMenu() {
    printf("*********************************\n");
    printf("*       学生管理系统            *\n");
    printf("*       1.查询界面              *\n");
    printf("*      	2.信息汇总              *\n");
    printf("*      	3.修改密码              *\n");
    printf("*       4.退出程序              *\n");
    printf("*********************************\n");
}
