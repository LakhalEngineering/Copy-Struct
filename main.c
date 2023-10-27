#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{

    int age;
    char name[30];
    double height;
};


void printPerson(const struct Person *p){
    printf("Person: %s (%d years old & %.1lf feet tall)\n", p->name, p->age, p->height);
}

int main(){
    struct Person person1;
    struct Person person2;
    struct Person *ptr; 

    person1.age = 35;
    strncpy(person1.name,"ALI", sizeof(person1.name));
    person1.height = 5.3;

    // 1- copy method par element (long)
    //person2.age = person1.age;
    //person2.height = person1.height;
    //memcpy(person2.name, person1.name, sizeof(person1.name));

    // 2- copy method using memcpy
    //memcpy(&person2, &person1, sizeof(person1));

    // 3- copy method using simple assignment
    person2 = person1;


    printPerson(&person1);
    printPerson(&person2);

}