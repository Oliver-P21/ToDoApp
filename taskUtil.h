#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct structTask {
    int taskNumber;
    char task[64];
    struct structTask* nextTask;
} Task;

void respondToInput(char);
void showMenu();
void printTaskList(Task*);
void createAndAddTask(Task*);