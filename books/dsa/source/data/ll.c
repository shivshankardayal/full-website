#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {
  int data;
  struct linked_list *next;
}ll;

void menu();
void add_at_beg(ll**);
void print(ll*);
void search(ll*);

void delete(ll** head)
{
  ll *temp, *q;
  int i;

  temp = *head;

  printf("Enter the value of data to be deleted.\n");
  scanf("%d", &i);

  if(temp->data == i) {
    *head = temp->next;
    free(temp);
  } else {
    while(temp->next != NULL) {
      if(temp->data == i) {
        q->next = temp->next;
        free(temp);
        break;
      }
      q = temp;
      temp = temp->next;
    }
  }
}

void count(ll* head)
{
  int count = 1;

  while(head->next != NULL) {
    count++;
    head = head->next;
  }

  printf("The no. of elements in linked list is %d.\n", count);
}

void menu()
{
  puts("1. Add an element at beginning.");
  puts("2. Add an element at position n.");
  puts("3. Add an element at end.");
  puts("4. Count the number of elements.");
  puts("5. Delete an element.");
  puts("6. Search an element.");
  puts("7. Print the list.");
}

void append(ll* head)
{
  ll* temp;
  int i;

  printf("Enter the number which is to be appended to the list.\n");
  scanf("%d", &i);

  temp = (ll*)malloc(sizeof(ll));
  temp->data = i;
  temp->next = NULL;

  while(head->next != NULL) {
    head = head ->next;
  }
  
  head->next = temp;
}

//note that you cant add at position 1 really.
void add_in_bet(ll* head)
{
  ll *temp;
  int i = 0, j = 1;
  int position = 0;

  temp = (ll*)malloc(sizeof(ll));

  printf("Enter an integer to be added in between.\n");
  scanf("%d", &i);
  printf("Enter position at which the number is to be added.\n");
  scanf("%d", &position);

  while(head->next != NULL) {
    ++j;
    if(j == position) {
      temp->next = head->next;
      head->next = temp;
      temp->data = i;
      break;
    }
    head = head->next;
  }
}

void add_at_beg(ll** head)
{
  ll *temp;
  int i;

  temp = (ll*)malloc(sizeof(ll));

  printf("Enter an integer to be added at beginning\n");
  scanf("%d", &i);

  temp->next = *head;
  *head = temp;
  (*head)->data = i;
}

void print(ll* head)
{
  while(head != NULL) {
    printf("%d--->", head->data);
    head = head->next;
  }
  
  printf("NULL\n");
}

void search(ll* head)
{
	int i=0, position=1;

	printf("Enter the number to be searched.");
	scanf("%d", &i);

  while(head != NULL) {
		if(head->data == i) {
			printf("%d is found at position %dth\n", i, position);
			return;
		}
		head = head->next;
		position++;
	}
	printf("%d was not found in linked list.\n", i);
}

int main()
{
  ll* head = NULL;
  int option = 0;

  menu();
  printf("Enter 1 to 7 to choose an action. 0 to quit.\n");
  scanf("%d", &option);

  while(option  >= 1 && option <= 7) {
    switch(option) {
      case 1:
        add_at_beg(&head);
        break;
      case 2:
        add_in_bet(head);
        break;
      case 3:
        append(head);
        break;
      case 4:
        count(head);
        break;
      case 5:
        delete(&head);
        break;
      case 6:
        search(head);
        break;
      case 7:
        print(head);
        break;
      default:
        break;
    }
    menu();
    printf("Enter 1 to 7 to choose an action. 0 to quit.\n");
    scanf("%d", &option);
  }

  return 0;
}
