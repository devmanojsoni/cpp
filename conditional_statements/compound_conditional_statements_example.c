#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    
    isWorking(10);

    
    getch();
    return 0;
}

void isWorking(int hour) {
    if ( (hour>=9 ) && ( hour<=18 )) {
      //tab to make changes
     printf("Working hours"); // Move line up/down = Shift + Alt + Up/Down
     //cout<<"working";
    } else {
     printf("NOT Working Hours"); // Move line up/down = Shift + Alt + Up/Down
     //cout<<"leisure";
     
    }
}