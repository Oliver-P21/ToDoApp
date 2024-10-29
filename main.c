#include "taskUtil.h"
int main() {
    Task* head = malloc(sizeof(Task));
    head->taskNumber = 0;
    strcpy(head->task, "Dummy node");
    head->nextTask = NULL;

    showMenu();

    char userOption;
    scanf("%c", &userOption);

    while (userOption != 5) {
        respondToInput(userOption);
        showMenu();
        scanf("%d", &userOption);
    }

    printf("Session ended. Have a good day!\n");
    return 0;
}
