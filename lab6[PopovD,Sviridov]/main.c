#include <stdio.h>
#include "filelib.h"

int main() {
    printf("Это обычный вывод (stdout)\n");
    fprintf(stderr, "Сообщение ошибки! (stderr)\n");
    
    save_message("log.txt", "Запись");
    save_message("log.txt", " в файл");
    save_message("log.txt", " в библ");
    save_message("log.txt", "иотеке\n");
    
    printf("Программа завершает работу\n");
    fprintf(stderr, "Если видите это - stderr работает\n");
    
    return 0;
}