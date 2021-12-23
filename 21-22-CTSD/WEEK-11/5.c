#include<stdio.h>
struct dog
{
	char name[10];
	char breed[10];
	int age;
	char color[10];
};
/*
int main()
{
	struct dog d1={"spiky","Bulldog",5,"brown"};
	struct dog *ptr;
	ptr=&d1;
	printf("Change name of the dog\n");
	scanf("%s",ptr->name);
	ptr->age++;
	printf("DOG details\n");
	printf("Name of the dog=%s\n",ptr->name);
	printf("Breed of the dog=%s\n",ptr->breed);
	printf("Age of the dog=%d\n",ptr->age);
	printf("color of the dog=%s\n",ptr->color);
}*/
void Change(struct dog *ptr)
{
	printf("DOG details\n");
	printf("Name of the dog=%s\n",ptr->name);
	printf("Breed of the dog=%s\n",ptr->breed);
	printf("Age of the dog=%d\n",ptr->age);
	printf("color of the dog=%s\n",ptr->color);
}
int main()
{
	struct dog d1={"spiky","Bulldog",5,"brown"};
	struct dog *ptr;
	ptr=&d1;
	printf("Change name of the dog\n");
	scanf("%s",ptr->name);
	ptr->age++;
	Change(ptr);
	return 0;
}
