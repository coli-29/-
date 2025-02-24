#include"tool.h"
//通过学号改信息
void changeId(node *head, int id) {
    int x = 0;
    node *a = head->next;
    while (a) {
        if (a->ID == id) {
            x = 1;
            break;
        }

        a = a->next;
    }
    if (x == 0) {
        printf("查无此人");
        system("pause");
        return;
    }

    printf("请输入修改后的姓名：");
    scanf("%s", a->name);
    printf("请输入修改后的学号:\n");
    int c = scanf("%d", &a->ID);
    while (1) {
        //1;
        int n = a->ID;
        int cout = 0;
        while (n != 0) {
            n /= 10;
            cout++;
        }
        if (c == 1) {
            if (cout == 10)
                break;
            else {
                printf("请输入正确位数学号!\n");
                c = scanf("%d", &a->ID);
            }
        } else {
            printf("请输入数字类型的学号!");
            c = scanf("%d", &a->ID);
        }
    }
    printf("\n请输入身份证号:");
    scanf("%s", a->idStatus);
    while (1) {
        if (strlen(a->idStatus) == 18) {
            break;
        } else {
            printf("请输入正确的身份证号!\n");
            scanf("%s", a->idStatus);
        }
    }
    printf("\n请输入民族:");
    scanf("%s", a->nation);
    printf("\n请输入性别:");
    scanf("%s", a->sex);
    char boy[10] = "男";
    char girl[10] = "女";
    while (1) {
        if (strcmp(a->sex, boy) == 0 || strcmp(a->sex, girl) == 0)
            break;
        else {
            printf("\n请输入正确性别：");
            scanf("%s", a->sex);
        }
    }
    printf("\n请输入家庭住址:");
    scanf("%s", a->address);
    int h;
    printf("\n请输入语文成绩:");
    h = scanf("%d", &a->chinGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->chinGrade >= 0 && a->chinGrade <= 100) {
                break;
            }
            printf("\n请输入0-100的分数!\n");
            h = scanf("%d", &a->chinGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->chinGrade);
        }
    }
    h = 0;
    printf("\n请输入数学成绩:");
    h = scanf("%d", &a->mathGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->mathGrade >= 0 && a->mathGrade <= 100) {
                break;
            }

            printf("\n请输入0-100的分数!");
            h = scanf("%d", &a->mathGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->mathGrade);
        }
    }
    h = 0;
    printf("\n请输入英语成绩:");
    h = scanf("%d", &a->englishGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->englishGrade >= 0 && a->englishGrade <= 100) {
                break;
            }
            printf("\n请输入0-100的分数!\n");
            h = scanf("%d", &a->englishGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->englishGrade);
        }
    }
    h = 0;
    printf("\n请输入c语言成绩:");
    h = scanf("%d", &a->cGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->cGrade >= 0 && a->cGrade <= 100) {
                break;
            }
            printf("\n请输入0-100的分数!\n");
            h = scanf("%d", &a->cGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->cGrade);
        }
    }
    h = 0;
    printf("\n请输入体育成绩:");
    h = scanf("%d", &a->peGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->peGrade >= 0 && a->peGrade <= 100) {
                break;
            }
            printf("\n请输入0-100的分数!\n");
            h = scanf("%d", &a->peGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->peGrade);
        }
    }
    h = 0;
    printf("\n请输入年龄:");
    h = scanf("%d", &a->age);
    while (1) {
        //1;
        if (h == 1) {
            if (a->age >= 0) {
                break;
            }
            printf("\n请输入正数!\n");
            h = scanf("%d", &a->age);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->age);
        }
    }
    a->totalSore = a->chinGrade + a->mathGrade + a->englishGrade + a->cGrade + a->peGrade;
    printf("\n修改成功!\n");
    system("pause");
}

//通过名字改数据
void changeName(node *head, char *name) {
    int x = 0, id;
    node *a = head->next;
    while (a) {
        if (strcmp(a->name, name) == 0) {
            x++;
        }
        a = a->next;
    }
    a = head->next;
    if (x == 1) {
        while (a) {
            if (strcmp(a->name, name) == 0) {
                break;
            }
            a = a->next;
        }
    }
    if (x == 0) {
        printf("\n查无此人");
        system("pause");
        return;
    }

    if (x > 1) {
        printf("检测到该姓名的学生存在%d位,请输入你要修改学生的具体学号", x);
        scanf("%d", &id);
        while (a) {
            if (a->ID == id) {
                break;
            }
            a = a->next;
        }
    }

    printf("请输入修改后的姓名：");
    scanf("%s", a->name);
    printf("请输入修改后的学号:\n");
    int c = scanf("%d", &a->ID);
    while (1) {
        //1;
        int n = a->ID;
        int cout = 0;
        while (n != 0) {
            n /= 10;
            cout++;
        }
        if (c == 1) {
            if (cout == 10)
                break;
            else {
                printf("请输入正确位数学号!\n");
                c = scanf("%d", &a->ID);
            }
        } else {
            printf("请输入数字类型的学号!");
            c = scanf("%d", &a->ID);
        }
    }
    printf("\n请输入身份证号:");
    scanf("%s", a->idStatus);
    while (1) {
        if (strlen(a->idStatus) == 18) {
            break;
        } else {
            printf("请输入正确的身份证号!\n");
            scanf("%s", a->idStatus);
        }
    }
    printf("\n请输入民族:");
    scanf("%s", a->nation);
    printf("\n请输入性别:");
    scanf("%s", a->sex);
    char boy[10] = "男";
    char girl[10] = "女";
    while (1) {
        if (strcmp(a->sex, boy) == 0 || strcmp(a->sex, girl) == 0)
            break;
        else {
            printf("\n请输入正确性别：");
            scanf("%s", a->sex);
        }
    }
    printf("\n请输入家庭住址:");
    scanf("%s", a->address);
    int h;
    printf("\n请输入语文成绩:");
    h = scanf("%d", &a->chinGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->chinGrade >= 0 && a->chinGrade <= 100) {
                break;
            }
            printf("\n请输入0-100的分数!\n");
            h = scanf("%d", &a->chinGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->chinGrade);
        }
    }
    h = 0;
    printf("\n请输入数学成绩:");
    h = scanf("%d", &a->mathGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->mathGrade >= 0 && a->mathGrade <= 100) {
                break;
            }

            printf("\n请输入0-100的分数!");
            h = scanf("%d", &a->mathGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->mathGrade);
        }
    }
    h = 0;
    printf("\n请输入英语成绩:");
    h = scanf("%d", &a->englishGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->englishGrade >= 0 && a->englishGrade <= 100) {
                break;
            }
            printf("\n请输入0-100的分数!\n");
            h = scanf("%d", &a->englishGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->englishGrade);
        }
    }
    h = 0;
    printf("\n请输入c语言成绩:");
    h = scanf("%d", &a->cGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->cGrade >= 0 && a->cGrade <= 100) {
                break;
            }
            printf("\n请输入0-100的分数!\n");
            h = scanf("%d", &a->cGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->cGrade);
        }
    }
    h = 0;
    printf("\n请输入体育成绩:");
    h = scanf("%d", &a->peGrade);
    while (1) {
        //1;
        if (h == 1) {
            if (a->peGrade >= 0 && a->peGrade <= 100) {
                break;
            }
            printf("\n请输入0-100的分数!\n");
            h = scanf("%d", &a->peGrade);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->peGrade);
        }
    }
    h = 0;
    printf("\n请输入年龄:");
    h = scanf("%d", &a->age);
    while (1) {
        //1;
        if (h == 1) {
            if (a->age >= 0) {
                break;
            }
            printf("\n请输入正数!\n");
            h = scanf("%d", &a->age);
        } else {
            printf("\n请输入数字类型!");
            h = scanf("%d", &a->age);
        }
    }
    a->totalSore = a->chinGrade + a->mathGrade + a->englishGrade + a->cGrade + a->peGrade;
    printf("\n修改成功!\n");
    system("pause");
}

//通过学号删除
void delId(node *head, int num) {
    node *a = head;
    node *b = head->next;
    while (b) {
        if (b->ID == num) {
            a->next = b->next;
            free(b);
            printf("删除成功!\n");
            return;
        }
        a = a->next;
        b = b->next;
    }
    printf("该学号不存在！");
}

//通过名字删除
void delName(node *head, char *name) {
    node *a = head;
    node *b = head->next;
    int sum = 0; //计数器
    while (b) {
        if (strcmp(b->name, name) == 0) {
            sum++;
        }
        b = b->next;
    }
    b = head->next;
    if (sum == 1) {
        while (b) {
            if (strcmp(b->name, name) == 0) {
                a->next = b->next;
                free(b);
                printf("\n删除成功!");
                return;
            }
            a = a->next;
            b = b->next;
        }
    }
    if (sum == 0) {
        printf("\n该姓名不存在！");
    }
    if (sum > 1) {
        printf("检测到该姓名的学生存在%d位,请输入你要删除学生的具体学号", sum);
        int id;
        scanf("%d", &id);
        while (b) {
            if (b->ID == id) {
                a->next = b->next;
                free(b);
                printf("\n删除成功!");
                return;
            }
            a = a->next;
            b = b->next;
        }
    }
}
