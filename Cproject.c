#include <stdio.h>
#include <conio.h>
#include <string.h>

#define max 50
struct bookdetails{
int bookno;
char bookname[50];
char author[50];
}b[max];

static int i=0;

void showbook(){
int j;
for(j=0;j<i;j++){
printf("\nBookNo:%d\tBookname:%s\tAuthor:%s",b[j].bookno,b[j].bookname,b[j].author);
printf("\n----------------------------------------------------------------------------");
}
}
void addbook(){
int x,m;
printf("\nHow many books do you need to add?");
scanf("%d",&x);

if(i+x>max){
printf("\nBook limit exceeded");
return;
}

for(m=0;m<x;m++){
printf("\nEnter the book no:");
scanf("%d",&b[i].bookno);
printf("Enter the book name:");
scanf(" %[^\n]s",b[i].bookname);
printf("Enter the author name:");
scanf(" %[^\n]s",b[i].author);
i++;
}
printf("\nBooks added successfully.");
}

void searchingno(int y){
int j;
for(j=0;j<i;j++){
if(b[j].bookno==y){
printf("\nBook no: %d",b[j].bookno);
printf("\nBook name: %s",b[j].bookname);
printf("\nAuthor: %s",b[j].author);
return;
}
}
printf("\nBook not found");
}

void searchingname(char name[50]){
int j ;
for(j=0;j<i;j++){
if(strcmp(b[j].bookname,name)==0){
printf("\nBook No: %d",b[j].bookno);
printf("\nBook Name: %s",b[j].bookname);
printf("\nAuthor: %s",b[j].author);
return;
}
}
printf("\nBook not found");
}

void getsugg(){
int mood;
printf("Choose a mood:");
printf("\n1. Curious on Politics");
printf("\n2. Happy");
printf("\n3. Emotional\n");
scanf("%d",&mood);
switch(mood){
case 1:
printf("\nTry 'Animal Farm'");
break;
case 2:
printf("\nTry 'Harry Potter'");
break;
case 3:
printf("\nTry 'The Diary of a Young girl'");
break;
default:
printf("\nHarry Potter suits all moods");
}
}

int main(){
int opt,search,n;
char nam[50];
clrscr();
printf("WELCOME TO SARASWATI ONLINE BOOK STORE\n");
printf("=======================================");

b[0].bookno=1;
strcpy(b[0].bookname,"The Diary of a Young Girl");
strcpy(b[0].author,"Anne Frank");
i++;
b[1].bookno=2;
strcpy(b[1].bookname,"Harry Potter");
strcpy(b[1].author,"J K Rowling");
i++;
while(1){
printf("\n\n1. Show books");
printf("\n2. Search");
printf("\n3. Add books");
printf("\n4. Get suggestions");
printf("\n5. Exit\n");
scanf("%d",&opt);

switch(opt){
case 1:
showbook();
printf("\nPress a key to continue");
getch();
clrscr();
break;
case 2:
printf("\n1. Search by number\n2. Search by name\nEnter your option:");
scanf("%d",&search);
if(search==1){
printf("\nEnter book no:");
scanf("%d",&n);
searchingno(n);
}
else{
printf("\nEnter the book name:");
scanf(" %[^\n]s",nam);
searchingname(nam);
}
printf("\nPress a key to continue");
getch();
clrscr();
break;

case 3:
addbook();
printf("\nPress a key to continue");
getch();
clrscr();
break;
case 4:
getsugg();
printf("\nPress a key to continue");
getch();
clrscr();
break;
case 5:
goto EXIT;
default:
printf("\nInvalid option");
printf("\nPress a key to continue");
getch();
clrscr();

}
}

EXIT:
getch();
return 0;
}





