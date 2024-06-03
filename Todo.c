#include<stdio.h>

void AddTodo ();
void DisplayTodo ();
void DeleteTodo (); 
void UpdateTodo ();


int main() {
  int choice;
  FILE *file = fopen("DB.txt", "w");

  if (file == NULL) {

  }

  while (1) {
    printf("\tWELCOME TO SUN TODO LIST\n");
    printf("------------------------------------");
    printf("1. Add todo\n 2. Display todo\n 3. Delete todo\n 4. Update todo\n 5. Exit");
    scanf("%d", &choice);
    
    switch (choice) {
      case 1 :
        AddTodo();
        break;
      case 2 :
        DisplayTodo();
        break;
      case 3 :
        DeleteTodo();
        break;
      case 4 :
        UpdateTodo();
        break;
      case 5 :
        // exit();
        break;
      default :
        printf("Invalid choice!!! Enter choice from 1 to 5!!!!");
    }
  }


  return 0;
}