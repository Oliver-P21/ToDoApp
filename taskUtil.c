#include "taskUtil.h"

void showMenu() {
    printf("What would you like to do?\n");
    printf("1. Add a task\n");
    printf("2. Complete ( or Remove) a task\n");
    printf("3. Modify a task\n");
    printf("4. List all tasks\n");
    printf("5. End session\n\n");
}

void respondToInput(char option) {
    switch (option) {
        case '1':
            printf("You chose to add a task\n\n");
            break;
        case '2':
            printf("You chose to complete a task\n\n");
            break;
        case '3':
            printf("You chose to modify a task\n\n");
            break;
        case '4':
            printf("Listing all tasks\n\n");
            break;
        default:
            printf("Invalid input\nPlease try again\n\n");
            break;
    }
}

void createAndAddTask(Task* head) {
    Task* newTask = malloc(sizeof(Task));
    char buffer[64];
    printf("Enter the new task: ");
    fgets(buffer, 64, stdin);
    strcpy(newTask->task, buffer);

    Task* ptr = head;
    while (ptr->nextTask != NULL) {
        ptr = ptr->nextTask;
    }

    ptr->nextTask = newTask;
    newTask->taskNumber = ptr->taskNumber + 1;
}

void printTaskList(Task* head) {
    Task* curTask = head->nextTask;
    while (curTask != NULL) {
        printf("%d. ", curTask->taskNumber);
        printf("%s", curTask->nextTask);
        curTask = curTask->nextTask;
    }
    printf("\n");
}