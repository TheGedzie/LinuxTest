#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("myfile.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    
    if (fd == -1) {
        printf("Ошибка: неверный файловый дескриптор (-1)\n");
        return 1;
    }
    
    write(fd, "Hello, system programming!\n", 27);
    close(fd);
    
    printf("Файл успешно создан!\n");
    return 0;
}