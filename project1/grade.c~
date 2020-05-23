//this program computes a grade based on the cs135 syllabus

#include <stdio.h>

int main(void)
{
	//intializing values
	int x = 0, y = 0, z = 0, projects, midterms, quizzes;
	float a, b, c, d, e, f, project_total, quiz_total, exam_total, final_project, final_exam, final_grade;

	//prompt user for total projects count	
	printf("how many projects are there? \n");
	scanf("%d", &projects);

	//safe guard conditional statment for projects	
	if(projects < 0)
	{
		printf("error!! invalid value, please restart program!! \n");
		return 0;
	}	
	
	//projects loop	
	for(x; x < projects; x++)
	{
		printf("please give a value between 0-100 for a project: ");
		scanf("%f", &a);

		//conditional statement checking for correct value
		if (a >= 0 && a <= 100)		
		{		
				b = b + a;
		}
		else
		{
			printf("try again \n");
			x--;
		}	
	}

	//prompt user for total quizzes count
	printf("how many quizzes are there? \n");
	scanf("%d", &quizzes);

	//safe guard conditional statement for quizzes	
	if(quizzes < 0)
	{
		printf("error!! invalid value, please restart program!! \n");
		return 0;
	}	
	
	//quizes loop
	for(y; y < quizzes; y++)
	{
		printf("please give a value between 0-100 for a quiz: ");
		scanf("%f", &c);

		//conditional statement checking for correct value
		if (c >= 0 && c<= 100)
		{
			d = d + c;
		}
		else
		{
			printf("try again \n");
			y--;
		}
	}

	//promt user for midterm exam count
	printf("how many midterm exams are there? \n");
	scanf("%d", &midterms);

	//safe guard conditional statement for midterms
	if(midterms < 0)
	{
		printf("error!! invalid value, please restart program!! \n");
		return 0;
	}	
	//midterms loop
	for(z; z < midterms; z++)
	{
		printf("please give a value between 0-100 for a midterm exam: ");
		scanf("%f", &e);

		//conditional statement checking for correct value
		if(e >= 0 && e <= 100)
		{
			f = f + e;
		}
		else
		{
			printf("try again \n");
			z--;
		}
	}

	//prompt user for final project score
	printf("please give a value between 0-100 for the final project: ");
	scanf("%f", &final_project);
	
	//safe guard conditional statement for final project	
	if(final_project < 0 || final_project > 100)
	{
		printf("error!! invalid value, please restart program!! \n");
		return 0;
	}

	//prompt user for final exam score
	printf("please give a value between 0-100 for the final exam: ");
	scanf("%f", &final_exam);

	//safe guard conditional statement for final exam	
	if(final_exam < 0 || final_exam > 100)
	{
		printf("error!! invalid value, please restart program!! \n");
		return 0;
	}

	//print totals
	project_total = b/projects;
	printf("\nYour average project percentage is: %.2f \n",project_total);

	quiz_total = d/quizzes;
	printf("Your average quiz percentage is: %.2f \n",quiz_total);
	
	midterms++;
	exam_total = (f + final_exam)/midterms;
	printf("Your average exam percentage is: %.2f \n",exam_total);

	final_grade = (project_total * .4) + (quiz_total * .1) + (exam_total * .4) + (final_project * .1);
	printf("Your final grade percentage is: %.2f \n", final_grade);

	if(final_grade >= 72)
	{
		printf("you can take cs202 \n\n");
	}
	else
	{
		printf("you cannot take cs202 \n\n");
	}

	return 0;
}
