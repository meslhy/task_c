#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int password;
    char email[MAX_EMAIL_LENGTH];
} Person;



void registerPerson(Person* person) {
	printf("");
    printf("Enter your name: ");
    fgets(person->name, sizeof(person->name), stdin);
    
    printf("Enter your email: ");
    fgets(person->email, sizeof(person->email), stdin);

    printf("Enter your Password: ");
    scanf("%d", &(person->password));
    getchar();  // Consume the newline character left by scanf


}


int login(char email[10] , int password,const Person personList[],int size)
{
	int i ;
	for(i = 0 ; i < size;i++)
	{
		if(strcmp(
		email, personList[i].email) == 0 &&
		password ==personList[i].password)
		 printf("%s","Done");
		return 1;
	}
	
	return 0;
}

int main() {
    Person person;
    Person personsList[10];
    int x = 1,count =0;
    int confirm;
    char loginEmail[15];
    int loginPass;

    while(x)
    {
    
	registerPerson(&person);
	personsList[count++] = person;
    puts("**************************");
    printf("Enter 0 to Exit or 1 to contanio : ");
    scanf("%d", &x);
    if(x!=0)
    x=1;
    
    getchar();
    
    
	}
	
	
	
	x =1;
	puts("********************************");
	
	while(x)
	{
	
	printf("Enter your Email:");
	fgets(loginEmail, sizeof(loginEmail),stdin);
	
	printf("Enter your Password:");
	scanf("%i",&loginPass);
	getchar();
	
	confirm = login(loginEmail,loginPass,personsList,count);
    
    if(confirm)
    {
    	puts("login Success");
	}else{
	puts("login Error");	
	}
	puts("**************************");
    printf("Enter 0 to Exit or 1 to contanio : ");
    scanf("%d", &x);
    if(x!=0)
    x=1;
    
    getchar();
		
	}
	
    
    
    
    
   

    return 0;
}
