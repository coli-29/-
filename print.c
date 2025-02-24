#include"tool.h"

void printId(node *head1) {
    if (head1->next == NULL) {
        printf("当前无学生录入");
        return;
    }
    node *hed = head1->next;
    while (hed != NULL) //选择排序
    {
        node *q = hed;
        int min1 = hed->ID;
        node *min2 = NULL;
        while (q != NULL) {
            if (q->ID < min1) {
                min1 = q->ID;
                min2 = q;
            }
            q = q->next;
        }
        if (min2 != NULL) {
            /*用来交换两个变量的中间变量*/
            char name[20] = {'0'};
            char idStatus[18] = {'0'};
            char nation[16] = {'0'};
            char address[50] = {'0'};
            int ID;
            int age;
            char sex[2] = {'0'};
            int mathGrade;
            int chinGrade;
            int englishGrade;
            int cGrade;
            int peGrade;
            int totalSore;
            /*      交换名字    */
            strcpy(name, hed->name);
            strcpy(hed->name, min2->name);
            strcpy(min2->name, name);
            /*  交换身份证号    */
            strcpy(idStatus, hed->idStatus);
            strcpy(hed->idStatus, min2->idStatus);
            strcpy(min2->idStatus, idStatus);
            /*  交换民族     */
            strcpy(nation, hed->nation);
            strcpy(hed->nation, min2->nation);
            strcpy(min2->nation, nation);
            /*  交换家庭住址     */
            strcpy(address, hed->address);
            strcpy(hed->address, min2->address);
            strcpy(min2->address, address);
            /*     交换性别      */
            strcpy(sex, hed->sex);
            strcpy(hed->sex, min2->sex);
            strcpy(min2->sex, sex);
            /*      交换学号     */
            ID = hed->ID;
            hed->ID = min2->ID;
            min2->ID = ID;
            /*      交换年龄      */
            age = hed->age;
            hed->age = min2->age;
            min2->age = age;
            /* 交换数学成绩     */
            mathGrade = hed->mathGrade;
            hed->mathGrade = min2->mathGrade;
            min2->mathGrade = mathGrade;
            /* 交换中文成绩     */
            chinGrade = hed->chinGrade;
            hed->chinGrade = min2->chinGrade;
            min2->chinGrade = chinGrade;
            /*      交换英语成绩      */
            englishGrade = hed->englishGrade;
            hed->englishGrade = min2->englishGrade;
            min2->englishGrade = englishGrade;
            /*      交换c语言成绩      */
            cGrade = hed->cGrade;
            cGrade = min2->cGrade;
            min2->cGrade = cGrade;
            /*      交换体育成绩    */
            peGrade = hed->peGrade;
            hed->peGrade = min2->peGrade;
            min2->peGrade = peGrade;
            /*    交换总成绩  */
            totalSore = hed->totalSore;
            hed->totalSore = min2->totalSore;
            min2->totalSore = totalSore;
        }
        hed = hed->next;
    }

    node *x = head1->next; //搜索指针
    printf(
        "____________________________________________________________________________________________________________________\n");
    printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
    while (x) {
        printf(
            "____________________________________________________________________________________________________________________\n");
        printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n", x->ID, x->name, x->idStatus, x->sex, x->nation,\
               x->address, x->chinGrade, x->mathGrade, x->englishGrade, x->cGrade, x->peGrade, x->age);


        x = x->next;
    }
    system("pause");
}

void printGrade(node *head1) {
    if (head1->next == NULL) {
        printf("当前无学生录入");
        return;
    }
    node *hed = head1->next;
    while (hed != NULL) //选择排序
    {
        node *q = hed;
        int min1 = hed->totalSore;
        node *min2 = NULL;
        while (q != NULL) {
            if (q->totalSore > min1) {
                min1 = q->totalSore;
                min2 = q;
            }
            q = q->next;
        }
        if (min2 != NULL) {
            /*用来交换两个变量的中间变量*/
            char name[20] = {'0'};
            char idStatus[18] = {'0'};
            char nation[16] = {'0'};
            char address[50] = {'0'};
            int ID;
            int age;
            char sex[2] = {'0'};
            int mathGrade;
            int chinGrade;
            int englishGrade;
            int cGrade;
            int peGrade;
            int totalSore;
            /*交换名字*/
            strcpy(name, hed->name);
            strcpy(hed->name, min2->name);
            strcpy(min2->name, name);
            /* 交换身份证号    */
            strcpy(idStatus, hed->idStatus);
            strcpy(hed->idStatus, min2->idStatus);
            strcpy(min2->idStatus, idStatus);
            /* 交换民族*/
            strcpy(nation, hed->nation);
            strcpy(hed->nation, min2->nation);
            strcpy(min2->nation, nation);
            /*交换家庭住址*/
            strcpy(address, hed->address);
            strcpy(hed->address, min2->address);
            strcpy(min2->address, address);
            /*     交换性别      */
            strcpy(sex, hed->sex);
            strcpy(hed->sex, min2->sex);
            strcpy(min2->sex, sex);
            /*      交换学号     */
            ID = hed->ID;
            hed->ID = min2->ID;
            min2->ID = ID;
            /*      交换年龄      */
            age = hed->age;
            hed->age = min2->age;
            min2->age = age;
            /* 交换数学成绩     */
            mathGrade = hed->mathGrade;
            hed->mathGrade = min2->mathGrade;
            min2->mathGrade = mathGrade;
            /* 交换中文成绩     */
            chinGrade = hed->chinGrade;
            hed->chinGrade = min2->chinGrade;
            min2->chinGrade = chinGrade;
            /*      交换英语成绩      */
            englishGrade = hed->englishGrade;
            hed->englishGrade = min2->englishGrade;
            min2->englishGrade = englishGrade;
            /*      交换c语言成绩      */
            cGrade = hed->cGrade;
            cGrade = min2->cGrade;
            min2->cGrade = cGrade;
            /*      交换体育成绩    */
            peGrade = hed->peGrade;
            hed->peGrade = min2->peGrade;
            min2->peGrade = peGrade;
            /*    交换总成绩  */
            totalSore = hed->totalSore;
            hed->totalSore = min2->totalSore;
            min2->totalSore = totalSore;
        }
        hed = hed->next;
    }

    node *x = head1->next; //搜索指针
    printf(
        "____________________________________________________________________________________________________________________\n");
    printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
    while (x) {
        printf(
            "____________________________________________________________________________________________________________________\n");
        printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n", x->ID, x->name, x->idStatus, x->sex, x->nation,\
               x->address, x->chinGrade, x->mathGrade, x->englishGrade, x->cGrade, x->peGrade, x->age);


        x = x->next;
    }
    system("pause");
}

void printCommon(node *head1) {
    if (head1->next == NULL) {
        printf("当前无学生录入");
        return;
    }
    node *x = head1->next; //搜索指针
    printf(
        "____________________________________________________________________________________________________________________\n");
    printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
    while (x) {
        printf(
            "____________________________________________________________________________________________________________________\n");
        printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n", x->ID, x->name, x->idStatus, x->sex, x->nation,\
               x->address, x->chinGrade, x->mathGrade, x->englishGrade, x->cGrade, x->peGrade, x->age);


        x = x->next;
    }
    system("pause");
}

void printSubject(node *head, char *grade) {
    if (head->next == NULL) {
        printf("当前无学生");
        return;
    }
    char chinese[6] = "语文";
    char math[6] = "数学";
    char english[6] = "英语";
    char c[6] = "c语言";
    char c2[6] = "C语言";
    char pe[6] = "体育";
    if (strcmp(grade, chinese) != 0 && strcmp(grade, math) != 0 && strcmp(grade, english) != 0 && strcmp(grade, c) != 0
        && strcmp(grade, c2) != 0 && strcmp(grade, pe) != 0) {
        printf("该学科不存在！");
        return;
    }
    if (strcmp(grade, chinese) == 0) {
        node *hed = head->next;
        while (hed != NULL) //选择排序
        {
            node *q = hed;
            int min1 = hed->chinGrade;
            node *min2 = NULL;
            while (q != NULL) {
                if (q->chinGrade > min1) {
                    min1 = q->chinGrade;
                    min2 = q;
                }
                q = q->next;
            }
            if (min2 != NULL) {
                /*用来交换两个变量的中间变量*/
                char name[20] = {'0'};
                char idStatus[18] = {'0'};
                char nation[16] = {'0'};
                char address[50] = {'0'};
                int ID;
                int age;
                char sex[2] = {'0'};
                int mathGrade;
                int chinGrade;
                int englishGrade;
                int cGrade;
                int peGrade;
                int totalSore;
                /*交换名字*/
                strcpy(name, hed->name);
                strcpy(hed->name, min2->name);
                strcpy(min2->name, name);
                /*交换身份证号*/
                strcpy(idStatus, hed->idStatus);
                strcpy(hed->idStatus, min2->idStatus);
                strcpy(min2->idStatus, idStatus);
                /*交换民族*/
                strcpy(nation, hed->nation);
                strcpy(hed->nation, min2->nation);
                strcpy(min2->nation, nation);
                /*交换家庭住址*/
                strcpy(address, hed->address);
                strcpy(hed->address, min2->address);
                strcpy(min2->address, address);
                /*交换性别*/
                strcpy(sex, hed->sex);
                strcpy(hed->sex, min2->sex);
                strcpy(min2->sex, sex);
                /*交换学号*/
                ID = hed->ID;
                hed->ID = min2->ID;
                min2->ID = ID;
                /*交换年龄*/
                age = hed->age;
                hed->age = min2->age;
                min2->age = age;
                /* 交换数学成绩     */
                mathGrade = hed->mathGrade;
                hed->mathGrade = min2->mathGrade;
                min2->mathGrade = mathGrade;
                /* 交换中文成绩     */
                chinGrade = hed->chinGrade;
                hed->chinGrade = min2->chinGrade;
                min2->chinGrade = chinGrade;
                /*      交换英语成绩      */
                englishGrade = hed->englishGrade;
                hed->englishGrade = min2->englishGrade;
                min2->englishGrade = englishGrade;
                /*      交换c语言成绩      */
                cGrade = hed->cGrade;
                cGrade = min2->cGrade;
                min2->cGrade = cGrade;
                /*      交换体育成绩    */
                peGrade = hed->peGrade;
                hed->peGrade = min2->peGrade;
                min2->peGrade = peGrade;
                /*    交换总成绩  */
                totalSore = hed->totalSore;
                hed->totalSore = min2->totalSore;
                min2->totalSore = totalSore;
            }
            hed = hed->next;
        }
    }
    if (strcmp(grade, math) == 0) {
        node *hed = head->next;
        while (hed != NULL) //选择排序
        {
            node *q = hed;
            int min1 = hed->mathGrade;
            node *min2 = NULL;
            while (q != NULL) {
                if (q->mathGrade > min1) {
                    min1 = q->mathGrade;
                    min2 = q;
                }
                q = q->next;
            }
            if (min2 != NULL) {
                /*用来交换两个变量的中间变量*/
                char name[20] = {'0'};
                char idStatus[18] = {'0'};
                char nation[16] = {'0'};
                char address[50] = {'0'};
                int ID;
                int age;
                char sex[2] = {'0'};
                int mathGrade;
                int chinGrade;
                int englishGrade;
                int cGrade;
                int peGrade;
                int totalSore;
                /*      交换名字    */
                strcpy(name, hed->name);
                strcpy(hed->name, min2->name);
                strcpy(min2->name, name);
                /*  交换身份证号    */
                strcpy(idStatus, hed->idStatus);
                strcpy(hed->idStatus, min2->idStatus);
                strcpy(min2->idStatus, idStatus);
                /*  交换民族     */
                strcpy(nation, hed->nation);
                strcpy(hed->nation, min2->nation);
                strcpy(min2->nation, nation);
                /*  交换家庭住址     */
                strcpy(address, hed->address);
                strcpy(hed->address, min2->address);
                strcpy(min2->address, address);
                /*     交换性别      */
                strcpy(sex, hed->sex);
                strcpy(hed->sex, min2->sex);
                strcpy(min2->sex, sex);
                /*      交换学号     */
                ID = hed->ID;
                hed->ID = min2->ID;
                min2->ID = ID;
                /*      交换年龄      */
                age = hed->age;
                hed->age = min2->age;
                min2->age = age;
                /* 交换数学成绩     */
                mathGrade = hed->mathGrade;
                hed->mathGrade = min2->mathGrade;
                min2->mathGrade = mathGrade;
                /* 交换中文成绩     */
                chinGrade = hed->chinGrade;
                hed->chinGrade = min2->chinGrade;
                min2->chinGrade = chinGrade;
                /*      交换英语成绩      */
                englishGrade = hed->englishGrade;
                hed->englishGrade = min2->englishGrade;
                min2->englishGrade = englishGrade;
                /*      交换c语言成绩      */
                cGrade = hed->cGrade;
                cGrade = min2->cGrade;
                min2->cGrade = cGrade;
                /*      交换体育成绩    */
                peGrade = hed->peGrade;
                hed->peGrade = min2->peGrade;
                min2->peGrade = peGrade;
                /*    交换总成绩  */
                totalSore = hed->totalSore;
                hed->totalSore = min2->totalSore;
                min2->totalSore = totalSore;
            }
            hed = hed->next;
        }
    }
    if (strcmp(grade, english) == 0) {
        node *hed = head->next;
        while (hed != NULL) //选择排序
        {
            node *q = hed;
            int min1 = hed->englishGrade;
            node *min2 = NULL;
            while (q != NULL) {
                if (q->englishGrade > min1) {
                    min1 = q->englishGrade;
                    min2 = q;
                }
                q = q->next;
            }
            if (min2 != NULL) {
                /*用来交换两个变量的中间变量*/
                char name[20] = {'0'};
                char idStatus[18] = {'0'};
                char nation[16] = {'0'};
                char address[50] = {'0'};
                int ID;
                int age;
                char sex[2] = {'0'};
                int mathGrade;
                int chinGrade;
                int englishGrade;
                int cGrade;
                int peGrade;
                int totalSore;
                /*      交换名字    */
                strcpy(name, hed->name);
                strcpy(hed->name, min2->name);
                strcpy(min2->name, name);
                /*  交换身份证号    */
                strcpy(idStatus, hed->idStatus);
                strcpy(hed->idStatus, min2->idStatus);
                strcpy(min2->idStatus, idStatus);
                /*  交换民族     */
                strcpy(nation, hed->nation);
                strcpy(hed->nation, min2->nation);
                strcpy(min2->nation, nation);
                /*  交换家庭住址     */
                strcpy(address, hed->address);
                strcpy(hed->address, min2->address);
                strcpy(min2->address, address);
                /*     交换性别      */
                strcpy(sex, hed->sex);
                strcpy(hed->sex, min2->sex);
                strcpy(min2->sex, sex);
                /*      交换学号     */
                ID = hed->ID;
                hed->ID = min2->ID;
                min2->ID = ID;
                /*      交换年龄      */
                age = hed->age;
                hed->age = min2->age;
                min2->age = age;
                /* 交换数学成绩     */
                mathGrade = hed->mathGrade;
                hed->mathGrade = min2->mathGrade;
                min2->mathGrade = mathGrade;
                /* 交换中文成绩     */
                chinGrade = hed->chinGrade;
                hed->chinGrade = min2->chinGrade;
                min2->chinGrade = chinGrade;
                /*      交换英语成绩      */
                englishGrade = hed->englishGrade;
                hed->englishGrade = min2->englishGrade;
                min2->englishGrade = englishGrade;
                /*      交换c语言成绩      */
                cGrade = hed->cGrade;
                cGrade = min2->cGrade;
                min2->cGrade = cGrade;
                /*      交换体育成绩    */
                peGrade = hed->peGrade;
                hed->peGrade = min2->peGrade;
                min2->peGrade = peGrade;
                /*    交换总成绩  */
                totalSore = hed->totalSore;
                hed->totalSore = min2->totalSore;
                min2->totalSore = totalSore;
            }
            hed = hed->next;
        }
    }
    if (strcmp(grade, pe) == 0) {
        node *hed = head->next;
        while (hed != NULL) //选择排序
        {
            node *q = hed;
            int min1 = hed->peGrade;
            node *min2 = NULL;
            while (q != NULL) {
                if (q->peGrade > min1) {
                    min1 = q->peGrade;
                    min2 = q;
                }
                q = q->next;
            }
            if (min2 != NULL) {
                /*用来交换两个变量的中间变量*/
                char name[20] = {'0'};
                char idStatus[18] = {'0'};
                char nation[16] = {'0'};
                char address[50] = {'0'};
                int ID;
                int age;
                char sex[2] = {'0'};
                int mathGrade;
                int chinGrade;
                int englishGrade;
                int cGrade;
                int peGrade;
                int totalSore;
                /*      交换名字    */
                strcpy(name, hed->name);
                strcpy(hed->name, min2->name);
                strcpy(min2->name, name);
                /*  交换身份证号    */
                strcpy(idStatus, hed->idStatus);
                strcpy(hed->idStatus, min2->idStatus);
                strcpy(min2->idStatus, idStatus);
                /*  交换民族     */
                strcpy(nation, hed->nation);
                strcpy(hed->nation, min2->nation);
                strcpy(min2->nation, nation);
                /*  交换家庭住址     */
                strcpy(address, hed->address);
                strcpy(hed->address, min2->address);
                strcpy(min2->address, address);
                /*     交换性别      */
                strcpy(sex, hed->sex);
                strcpy(hed->sex, min2->sex);
                strcpy(min2->sex, sex);
                /*      交换学号     */
                ID = hed->ID;
                hed->ID = min2->ID;
                min2->ID = ID;
                /*      交换年龄      */
                age = hed->age;
                hed->age = min2->age;
                min2->age = age;
                /* 交换数学成绩     */
                mathGrade = hed->mathGrade;
                hed->mathGrade = min2->mathGrade;
                min2->mathGrade = mathGrade;
                /* 交换中文成绩     */
                chinGrade = hed->chinGrade;
                hed->chinGrade = min2->chinGrade;
                min2->chinGrade = chinGrade;
                /*      交换英语成绩      */
                englishGrade = hed->englishGrade;
                hed->englishGrade = min2->englishGrade;
                min2->englishGrade = englishGrade;
                /*      交换c语言成绩      */
                cGrade = hed->cGrade;
                cGrade = min2->cGrade;
                min2->cGrade = cGrade;
                /*      交换体育成绩    */
                peGrade = hed->peGrade;
                hed->peGrade = min2->peGrade;
                min2->peGrade = peGrade;
                /*    交换总成绩  */
                totalSore = hed->totalSore;
                hed->totalSore = min2->totalSore;
                min2->totalSore = totalSore;
            }
            hed = hed->next;
        }
    }
    if (strcmp(grade, c) == 0) {
        node *hed = head->next;
        while (hed != NULL) //选择排序
        {
            node *q = hed;
            int min1 = hed->cGrade;
            node *min2 = NULL;
            while (q != NULL) {
                if (q->cGrade > min1) {
                    min1 = q->cGrade;
                    min2 = q;
                }
                q = q->next;
            }
            if (min2 != NULL) {
                /*用来交换两个变量的中间变量*/
                char name[20] = {'0'};
                char idStatus[18] = {'0'};
                char nation[16] = {'0'};
                char address[50] = {'0'};
                int ID;
                int age;
                char sex[2] = {'0'};
                int mathGrade;
                int chinGrade;
                int englishGrade;
                int cGrade;
                int peGrade;
                int totalSore;
                /*      交换名字    */
                strcpy(name, hed->name);
                strcpy(hed->name, min2->name);
                strcpy(min2->name, name);
                /*  交换身份证号    */
                strcpy(idStatus, hed->idStatus);
                strcpy(hed->idStatus, min2->idStatus);
                strcpy(min2->idStatus, idStatus);
                /*  交换民族     */
                strcpy(nation, hed->nation);
                strcpy(hed->nation, min2->nation);
                strcpy(min2->nation, nation);
                /*  交换家庭住址     */
                strcpy(address, hed->address);
                strcpy(hed->address, min2->address);
                strcpy(min2->address, address);
                /*     交换性别      */
                strcpy(sex, hed->sex);
                strcpy(hed->sex, min2->sex);
                strcpy(min2->sex, sex);
                /*      交换学号     */
                ID = hed->ID;
                hed->ID = min2->ID;
                min2->ID = ID;
                /*      交换年龄      */
                age = hed->age;
                hed->age = min2->age;
                min2->age = age;
                /* 交换数学成绩     */
                mathGrade = hed->mathGrade;
                hed->mathGrade = min2->mathGrade;
                min2->mathGrade = mathGrade;
                /* 交换中文成绩     */
                chinGrade = hed->chinGrade;
                hed->chinGrade = min2->chinGrade;
                min2->chinGrade = chinGrade;
                /*      交换英语成绩      */
                englishGrade = hed->englishGrade;
                hed->englishGrade = min2->englishGrade;
                min2->englishGrade = englishGrade;
                /*      交换c语言成绩      */
                cGrade = hed->cGrade;
                cGrade = min2->cGrade;
                min2->cGrade = cGrade;
                /*      交换体育成绩    */
                peGrade = hed->peGrade;
                hed->peGrade = min2->peGrade;
                min2->peGrade = peGrade;
                /*    交换总成绩  */
                totalSore = hed->totalSore;
                hed->totalSore = min2->totalSore;
                min2->totalSore = totalSore;
            }
            hed = hed->next;
        }
    }
    if (strcmp(grade, c2) == 0) {
        node *hed = head->next;
        while (hed != NULL) //选择排序
        {
            node *q = hed;
            int min1 = hed->cGrade;
            node *min2 = NULL;
            while (q != NULL) {
                if (q->cGrade > min1) {
                    min1 = q->cGrade;
                    min2 = q;
                }
                q = q->next;
            }
            if (min2 != NULL) {
                /*用来交换两个变量的中间变量*/
                char name[20] = {'0'};
                char idStatus[18] = {'0'};
                char nation[16] = {'0'};
                char address[50] = {'0'};
                int ID;
                int age;
                char sex[2] = {'0'};
                int mathGrade;
                int chinGrade;
                int englishGrade;
                int cGrade;
                int peGrade;
                int totalSore;
                /*      交换名字    */
                strcpy(name, hed->name);
                strcpy(hed->name, min2->name);
                strcpy(min2->name, name);
                /*  交换身份证号    */
                strcpy(idStatus, hed->idStatus);
                strcpy(hed->idStatus, min2->idStatus);
                strcpy(min2->idStatus, idStatus);
                /*  交换民族     */
                strcpy(nation, hed->nation);
                strcpy(hed->nation, min2->nation);
                strcpy(min2->nation, nation);
                /*  交换家庭住址     */
                strcpy(address, hed->address);
                strcpy(hed->address, min2->address);
                strcpy(min2->address, address);
                /*     交换性别      */
                strcpy(sex, hed->sex);
                strcpy(hed->sex, min2->sex);
                strcpy(min2->sex, sex);
                /*      交换学号     */
                ID = hed->ID;
                hed->ID = min2->ID;
                min2->ID = ID;
                /*      交换年龄      */
                age = hed->age;
                hed->age = min2->age;
                min2->age = age;
                /* 交换数学成绩     */
                mathGrade = hed->mathGrade;
                hed->mathGrade = min2->mathGrade;
                min2->mathGrade = mathGrade;
                /* 交换中文成绩     */
                chinGrade = hed->chinGrade;
                hed->chinGrade = min2->chinGrade;
                min2->chinGrade = chinGrade;
                /*      交换英语成绩      */
                englishGrade = hed->englishGrade;
                hed->englishGrade = min2->englishGrade;
                min2->englishGrade = englishGrade;
                /*      交换c语言成绩      */
                cGrade = hed->cGrade;
                cGrade = min2->cGrade;
                min2->cGrade = cGrade;
                /*      交换体育成绩    */
                peGrade = hed->peGrade;
                hed->peGrade = min2->peGrade;
                min2->peGrade = peGrade;
                /*    交换总成绩  */
                totalSore = hed->totalSore;
                hed->totalSore = min2->totalSore;
                min2->totalSore = totalSore;
            }
            hed = hed->next;
        }
    }
    node *x = head->next; //搜索指针
    printf(
        "____________________________________________________________________________________________________________________\n");
    printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
    while (x) {
        printf(
            "____________________________________________________________________________________________________________________\n");
        printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n", x->ID, x->name, x->idStatus, x->sex, x->nation,\
               x->address, x->chinGrade, x->mathGrade, x->englishGrade, x->cGrade, x->peGrade, x->age);


        x = x->next;
    }
    system("pause");
}
