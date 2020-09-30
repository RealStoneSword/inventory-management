#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void addRemove();
void editItemData();
void editItemStock();

int main() {

    /* op1 is option 1 */
    int op1 = 0;
    printf("\n##### Inventory System #####");
    printf("\n#                          #");
    printf("\n#    Choose an option:     #");
    printf("\n#                          #");
    printf("\n#    1. Add / Remove items #");
    printf("\n#                          #");
    printf("\n#    2. Edit an Items name #");
    printf("\n#    and other data        #");
    printf("\n#                          #");
    printf("\n#    3. Edit an items      #");
    printf("\n#    stock                 #");
    printf("\n#                          #");
    printf("\n############################\n\n");

    scanf("%d", &op1);
    switch(op1) {
        case 1 :
        addRemove();
        break;
        case 2 :
        editItemData();
        break;
        case 3 :
        editItemStock();
        break;
        default :
        printf("Invalid Choice. Please try again.\n");
        break;
    }
    return 0;
}

void addRemove() {

}

void editItemData() {

}

void editItemStock() {

}