#include<stdio.h>
#include<string.h>

struct engine_parts{
char serial_Number[5];
int manufacture_year;
char material[50];
int quantity;
};

int main(){
	int n,i,a,b;
	struct engine_parts data[360];
	//entering number of items to check the result of program(not required in question)
	scanf("%d",&n); 
	for(i=0;i<n;i++){
		printf("\nEnter for engine %d:",i+1);
		fflush(stdin);
		printf("\n\tSerial No: ");
		gets(data[i].serial_Number);
		printf("\n\tmanufacture year: ");
		scanf("%d",&data[i].manufacture_year);
		fflush(stdin);
		printf("\n\tMaterial: ");
		gets(data[i].material);
		printf("\n\tQuanitity: ");
		scanf("%d",&data[i].quantity);
}


printf("\n\n");
puts("Between serial BB1 to CC6");
for(i=0;i<n;i++){
	a = strcmp(data[i].serial_Number,"BB1");
	b = strcmp(data[i].serial_Number,"CC6");
	if(a>0 && b<0){
		printf("\n\n\t Serial No: ");
		puts(data[i].serial_Number);
		printf("\n\tManufacture year: ");
		printf("%d",data[i].manufacture_year);
		puts(data[i].material);
		printf("\n\tMaterial: ");
		puts(data[i].material);
		printf("\n\tQuantity: ");
		printf("%d",data[i].quantity);
		
	}
}
return 0;
}