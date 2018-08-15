#include <stdio.h>
#include <stdlib.h>

struct student{
	char *name;
	int reg_num;
	int av1;
	int av2;
	float media;
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
	new_student->av1 = -1;
	new_student->av2 = -1;
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
float avg = (float)((p->av1+p->av2)/2)*10;
char *status;

if(avg >= 6){
	status = "PASSED";
} else{
	status = "FAILED";
}
if(p->av1 == -1 || p->av2 == -1){
status = "STUDYING"	;
if(p->av2== -1 && p->av1 == -1){
printf("Registry Number: %d\nName: %s\nAv1: -\nAv2: - \nAverage: - %% \n Status: %s\n", p->reg_num, p->name,status);
}
if(p->av1!= -1 && p->av2 == -1){
printf("Registry Number: %d\nName: %s\nAv1:%d\nAv2: -\nAverage: - %% \n Status: %s\n", p->reg_num, p->name,p->av1,avg,status);
}
if(p->av1== -1 && p->av2 != -1){
printf("Registry Number: %d\nName: %s\nAv1:-\nAv2: -\nAverage: - %% \n Status: %s\n", p->reg_num, p->name,avg,status);
}
} else{

printf("Registry Number: %d\nName: %s\nAv1:%d\nAv2:%d\nAverage: %.2f %% \n Status: %s\n", p->reg_num, p->name,p->av1,p->av2,avg,status);
}
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
			break;
		case 2:
			p->av2 = grade;
			break;

		default:
			printf("\n-----------------------------------\n");
			printf("\n [ERROR] Invalid Test\n");
			printf("\n-----------------------------------");
			break;
				}
     
} else{
	grade_add(p->next, registry_number,grade,test);
}



return p;
}

	
}

int main(){
Students* ClassA = new_list();
ClassA = add(ClassA, "Rafael",1060016);
ClassA = add(ClassA, "Gabriel",2053716);

ClassA = grade_add(ClassA, 1060016, 10, 1);
ClassA = grade_add(ClassA, 1060016, 6, 2);

print_students(ClassA,"Class A");

Students* ClassB = new_list();
ClassB = add(ClassB, "Rafaela",1070016);
ClassB = add(ClassB, "Rafaello",1070016);
ClassB = add(ClassB, "Gabriela",2073716);

print_students(ClassB,"Class B");

}

