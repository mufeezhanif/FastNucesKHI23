#include<stdio.h>

#include<stdlib.h>

#include<string.h>



struct book{

	char accession_no[20];

	char author_name[20];

	char title[30];

	int flag;

};

//flag = 1 when the book is issued

int main(){

	int books=0,i,index;

	struct book lib;

	struct book *ptr = &lib;


	

	

	int choice;

	do{
        printf("\n\n1 - Display book information\n2 - Add a new book\n3 - Display all the books in the library of a particular author\n4 - Display the number of books of a particular title\n5 - Display the total number of books in the library\n6 - Issue a book\n 0 - to end program\n\n\n");
		scanf("%d",&choice);

	
	switch(choice)

	{

		case 1:

		{
            if(books==0){
            	printf("\n\n\tNo books to display\n");
			}
			else{
			for(i=0;i<books;i++){

				printf("For Book %d : ",i+1);

				printf("\n\tAccession Number: ");

				puts(ptr[i].accession_no);

				printf("\n\tAuthor Name: ");

				puts(ptr[i].author_name);

				printf("\n\tBook Title: ");

				puts(ptr[i].title);

				if((ptr[i].flag)==1){

				printf("\n\tBook is not available");

				}

				else{

					printf("\n\tBook is available");

				}

				}}
			

			break;

		}

		case 2:

		{

			if(books==0){
				books++;
				ptr = (struct book*) calloc(books,sizeof(struct book));
				index=books-1;

				printf("\n\nInsering new book:");

				printf("\n\tEnter Accession Number: ");

				fflush(stdin);
                fflush(stdin);

				gets(ptr[0].accession_no);

				printf("\n\tEnter Author Name: ");

				fflush(stdin);

				gets(ptr[0].author_name);

				printf("\n\tEnter Book Title: ");

				fflush(stdin);

				gets(ptr[0].title);

				printf("\n\tEnter 1 if the book is issued, else 0: : ");

				fflush(stdin);

				int tmp;

				scanf("%d",&tmp);

				ptr[0].flag= tmp;

			}

			else{

				books++;

				ptr = realloc(ptr,books*sizeof(struct book));

				index=books-1;

				printf("\n\nInsering new book:");

				printf("\n\tEnter Accession Number: ");

				fflush(stdin);

				gets(ptr[index].accession_no);

				printf("\n\tEnter Author Name: ");

				fflush(stdin);

				gets(ptr[index].author_name);

				printf("\n\tEnter Book Title: ");

				fflush(stdin);

				gets(ptr[index].title);

				printf("\n\tEnter 1 if the book is issued, else 0: : ");

				fflush(stdin);

				scanf("%d",&(ptr[index].flag));

			}

			break;

		}

		case 3:

		{

			char author[50];

			printf("Enter Author's Name: ");
            fflush(stdin);
			gets(author);

			for(i=0;i<books;i++){

			if(strcmp(author,ptr[i].author_name)==0){

				printf("\n\tAccession Number: ");

				puts(ptr[i].accession_no);

				printf("\n\tAuthor Name: ");

				puts(ptr[i].author_name);

				printf("\n\tBook Title: ");

				puts(ptr[i].title);

				if(ptr[i].flag==1){

					printf("\n\tBook is not available");

				}

				else{

					printf("\n\tBook is available");

				}		

			}

		}

			break;

		}

		

		case 4:

		{

			char title[50];

			printf("Enter Title of Book: ");
			fflush(stdin);
			gets(title);
			for(i=0;i<books;i++){

			if(strcmp(title,ptr[i].title)==0){

				printf("\n\tAccession Number: ");

				puts(ptr[i].accession_no);

				printf("\n\tAuthor Name: ");

				puts(ptr[i].author_name);

				printf("\n\tBook Title: ");

				puts(ptr[i].title);

				if(ptr[i].flag==1){

					printf("\n\tBook is not available");

				}

				else{

					printf("\n\tBook is available");

				}		

			}

		}

			break;

		}

		case 5:

		{

			printf("Total Books: %d",books);

			

			break;

		}

		case 6:

		{
            int check=0;

			char title[50];

			printf("Enter Title of Book: ");
			fflush(stdin);
			gets(title);

			for(i=0;i<books && check!=0;i++){

			if((strcmp(title,ptr[i].title))==0){
                --books;
                printf("\n\nBook has been issued");
                ptr[i].flag=1;
                check=1;

						

			}

		}
        if(check==0){
            printf("\nbook is not available");
        }

			break;

		}

	}

	

	

	}while(choice != 0);
    free(ptr);
	return 0;

}