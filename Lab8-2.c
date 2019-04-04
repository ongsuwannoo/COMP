// Lab8-2

#include <stdio.h>
#include <string.h>

int main(){
	struct student_info 
    {
        char firstname[60], lastname[60], sex[6], id[12];
        int age;
        float grade;
    }data[21];
	
	char check[10], x[60];
	
	// input    
    for (int i = 0; i < 20; ++i)
    {scanf("%s %s %s %d %s %f", data[i].firstname, data[i].lastname, data[i].sex, &data[i].age, data[i].id, &data[i].grade);}
	
	// check function
	scanf("%s", check);

    // print
    if (check[0] == 'n' || check[0] == 'N')
    {
    	for (int i = 0; i < 20; i++)
    	{
	        for (int j = i + 1; j < 20; j++)
	        {
	            if (strcmp(data[j].firstname, data[i].firstname) < 0)
	            {
	                data[20] = data[i];
	                data[i] = data[j];
	                data[j] = data[20];
	            }
	        }
    	}
    }
    else if (check[0] == 's' || check[0] == 'S')
    {
    	for (int i = 0; i < 20; i++)
    	{
	        for (int j = i + 1; j < 20; j++)
	        {
	            if (strcmp(data[j].lastname, data[i].lastname) < 0)
	            {
	                data[20] = data[i];
	                data[i] = data[j];
	                data[j] = data[20];
	            }
	        }
    	}
    }
    else
    {
    	for (int i = 0; i < 20; i++)
    	{
	        for (int j = i + 1; j < 20; j++)
	        {
	            if (strcmp(data[j].id, data[i].id) < 0)
	            {
	                data[20] = data[i];
	                data[i] = data[j];
	                data[j] = data[20];
	            }
	        }
    	}
    }
    for (int i = 0; i < 20; ++i)
    {
    	if (data[i].sex[0] == 'F') {strcpy(data[i].sex, "Miss");}
    	else {strcpy(data[i].sex, "Mr");}
    }
    for (int i = 0; i < 20; ++i)
    {printf("%s %c %s (%d) ID: %s GPA %.2f\n", data[i].sex, data[i].firstname[0], data[i].lastname, data[i].age, data[i].id, data[i].grade);}
}