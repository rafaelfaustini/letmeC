#include <stdio.h>
#include <stdlib.h>

struct student{
	char *name;
	int reg_num;
	char *class_name;
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



Students* class_allocate(Students* l, int id, char *class_name){
	Students* p = l;
	if(!empty(l)){
		if(p->reg_num == id){
			p->class_name = class_name;
		}
		
		class_allocate(p->next, id, class_name);
	}
	
	
	return p;
}


void print_students(Students* l, char *class_name){
Students* p = l;
if(!empty(l)){
if(class_name == p->class_name){

printf("\n-----------------------------------");
printf("\n\t%s - Student",p->class_name);
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
}
print_students(p->next, class_name);	
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


int menu(Students* Classes){
	
    int trigger=1;

    do
    {
        printf("\n\tSchool System\n\n");
        printf("1. Show Students\n");
        printf("2. Add Student\n");
        printf("3. \n");
        printf("0. Exit\n");
		char *teste;
        scanf("%d", &trigger);
        
        system("cls || clear");

        switch(trigger)
        {
            case 1:
            	printf("Enter the class name you want to print\n");
            	char *name;
                if(scanf("%s",&name)){
                	print_students(Classes,name);
                	
				}
				system("pause");
				system("cls || clear");
				menu(Classes);

            case 2:
            	printf("PLease, enter the student name:\n");
            	char *student_name;
            	if(scanf("%s",&student_name)){
            		int registry;
            		if(scanf("%d",&registry)){
            			if(!exists(Classes, registry)){
            				Classes = add(Classes, student_name,registry);
            				char *class_name;
							if(scanf("&s",&class_name))	{
								Classes = class_allocate(Classes, registry, class_name);
								free(student_name);
								free(class_name);
							}else{
								//Remove Student because he couldn't be allocated to a class;
							}
						}
            			
					}
	
				}


            case 3:
                
                break;

            case 0:
                exit(0);
                break;

            default:
                printf("Enter your selection\n");
        }
    } while(trigger);
	
}



int main(){
Students* Classes = new_list();
Classes = add(Classes, "Rafael",1060016);

Classes = class_allocate(Classes, 1060016, "Class 202");
menu(Classes);




//ClassA = add(ClassA, "Gabriel",2053716);

///ClassA = grade_add(ClassA, 1060016, 10, 1);
//ClassA = grade_add(ClassA, 1060016, 6, 2);

//print_students(Classes,"Class 202");


}


