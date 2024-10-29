#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Task {
    int taskNumber;
    char task[64];
    struct Task* nextTask;
} Task;

void respondToInput(char, Task*);
void showMenu();
void printTaskList(Task*);
void createAndAddTask(Task*);