#include <stdio.h>

//struct for course
struct course{
	int Credit_Hours_Mathematics;
	int Credit_Hours_Programming;
	float Student_Score_Mathematics;
	float Student_Score_Programming;
	};
//struct for student
struct student{
	struct course courses;
	char Array_of_Courses[2];
	float GPA;
};
// function for calculation GPA
void clac_GPA(float math_score, float programming_score, int Hours_Mathematics, int Hours_Programming){
	float GPA;
	GPA = ((math_score*Hours_Mathematics)+(programming_score*Hours_Programming))/(Hours_Mathematics+Hours_Programming);
	
	printf("Your GPA is: %f\n", GPA);
}
int main(){
	float math_score, programming_score;
	int hours_math, hours_programming;
	struct student A;
	//math course
	math_score = A.courses.Student_Score_Mathematics;
	printf("Enter your score in math (out of 4)\n");
	scanf("%f",&math_score);
	hours_math = A.courses.Credit_Hours_Mathematics = 3;
	//programming course
	programming_score = A.courses.Student_Score_Programming;
	printf("Enter your score in programming (out of 4)\n");
	scanf("%f",&programming_score);
	hours_programming = A.courses.Credit_Hours_Programming = 4;
	clac_GPA(math_score, programming_score, hours_math, hours_programming);
	return 0;
	}
