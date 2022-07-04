#include <stdio.h>

int tow_of_han(int disks, char s_tow, char temp_tow, char dest_tow){
    if (disks == 1){
        printf("Move %d from %c to %c\n", disks, s_tow, dest_tow);
        return 0;
    }
    tow_of_han(disks-1, s_tow, dest_tow, temp_tow);
    printf("Move %d from %c to %c\n", disks, s_tow, dest_tow);
    tow_of_han(disks-1, temp_tow, s_tow, dest_tow);
    return 0;
}

int main(){
    char s_tow='A', temp_tow='B', dest_tow='C';
    int disks;

    printf("Enter the no of disks: ");
    scanf("%d", &disks);

    printf("Sequence of disk: \n");
    tow_of_han(disks, s_tow, temp_tow, dest_tow);
}
