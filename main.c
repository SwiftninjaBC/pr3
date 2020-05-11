#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
int x, value;
Node * head = NULL;
Node * tail = NULL;
do {
x = 0;
printf("Enter the option you want:\n");
printf("1. Insert Head\n");
printf("2. Insert tail\n");
printf("3. Delete a Node\n");
printf("4. Delete all\n");
printf("5. Print List\n");
printf("6. Close Program\n");
scanf("%d",&x);
if(x < 1 || x > 6) {
x = 0;
}
switch(x) {
case 0 :
printf("Error: invalid input\n");
break;

case 1 :
printf("Enter an integer for the value in the node: ");
scanf("%d",&value);
head = List_insert(head, value);
break;

case 2 :
printf("Enter an integer for the value in the node: ");
scanf("%d",&value);
tail = List_insert_last(head, value);
break;

case 3 :
printf("Enter the value you wish to delete: ");
scanf("%d",&value);
head = List_delete(head, value);
break;
  
case 4 :
printf("Deleting all nodes now.\n");
List_destroy(head);
break;

case 5 :
printf("Your List:\n");
List_print(head);
break;

case 6 :
printf("Closing the Program\n");
break;
}
}while(x != 6);
}
