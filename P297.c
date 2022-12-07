#include <stdio.h>

int main()
{
    typedef struct
    {
        int month;
        int day;
        int year;
    }Date;

    struct Student
    {
        long int id;
        char name[50];
        char sex[50];
        Date birthday;
        char add[100];
    };
    struct Student *p;
    struct Student form1[2]={{10001,"","Male",5,31,1998,"ChangSha,HuNan"},{10002,"Violet Wang","Female",9,11,1997,"NanChong SzeChuan"}};
    struct Student form2=form1[1];
    p=&form2;
    scanf("%s",form1[0].name);
    printf("%ld,%s,%s,%d,%d,%d,%s\n",form2.id,form2.name,form2.sex,form2.birthday.month,form2.birthday.day,form2.birthday.year,form2.add);
    form1[1].birthday.month=10;
    form1[1].birthday.day=5;
    form1[1].birthday.year=2020;
    printf("%ld,%s,%s,%d,%d,%d,%s\n",form1[0].id,form1[0].name,form1[0].sex,form1[0].birthday.month,form1[0].birthday.day,form1[0].birthday.year,form1[0].add);
    printf("%s\n",(*p).name);
    return 0;
}