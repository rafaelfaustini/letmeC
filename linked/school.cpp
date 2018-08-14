#include <stdio.h>
#include <stdlib.h>

struct student{
	char *name;
	int reg_num;
	int av1;
	int av2;
	struct student *next;
};
typedef struct student Students;

Students* new_list(){
	return NULL;
}
int empty(Students* l){
	if(l==NULL){
		return 1;
	}
	return 0;
}

int exists(Students* l, int registry){
	Students* p = l;
	
if(!empty(l)){
	if(registry == p->reg_num){
		return 1;
	}
exists(p->next, registry);
}

return 0;

}
Students* add(Students* l, char *name, int reg_num){
	if(!exists(l,reg_num)){
	Students* new_student = (Students*)malloc(sizeof(Students));
	new_student->name = name;
	new_student->reg_num = reg_num;
	new_student->next = l;
	return new_student;
} else
printf("\n-----------------------------------\n");
printf("\n[ERROR] Could not add student %s",name);
printf("\n[ERROR] Registry Number %d already Exists\n",reg_num);
printf("\n-----------------------------------");
return l;
}






void print_students(Students* l, char *title){
Students* p = l;
if(!empty(l)){
printf("\n-----------------------------------");
printf("\n\t%s - Student",title);
printf("\n-----------------------------------\n");
printf("Registry Number: %d\nName: %s\nAv1:%d\nAv2:%d\n\n", p->reg_num, p->name,p->av1,p->av2);

print_students(p->next, title);	
}

}

Students* grade_add(Students* l, int registry_number, float grade, int test){ 
// LikedList, RegistryNumber, Grade, 1 for Av1, 2 for Av2
Students* p = l;
if(!empty(l)){

	if(p->reg_num== registry_number){

	switch(test){
		case 1:
			p->av1 = grade;
		case 2:
			p->av2 = grade;

		default:
			printf("\n-----------------------------------\n");
			printf("\n [ERROR] Invalid Test\n");
printf("\n-----------------------------------");
				}
     
} else{
	grade_add(p->next, registry_number,grade,test);
}


}
return p;


	
}

int main(){
Students* ClassA = new_list();
ClassA = add(ClassA, "Rafael",1060016);
ClassA = add(ClassA, "Gabriel",2053716);
print_students(ClassA,"Class A");

Students* ClassB = new_list();
ClassB = add(ClassB, "Rafaela",1070016);
ClassB = add(ClassB, "Rafaello",1070016);
ClassB = add(ClassB, "Gabriela",2073716);
print_students(ClassB,"Class B");

}

