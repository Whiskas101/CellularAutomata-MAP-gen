#include<stdio.h>
#include<stdlib.h>

// Cellular automaton 1-D visualisation
// only using arrays


//lets assume a 51 length array
#define size 100
int row[size];


int binaryToDecimal(int c, int b, int a){

    // if(c==0 && b==0 && a==0) return 0;
    // if(c==1 && b==1 && a==1) return 0;
    // if(c==0 && b==1 && a==0) return 1;
    // if(c==1 && b==0 && a==0) return 1; 
    // if(c==0 && b==0 && a==1) return 1;

    if(c == 0 && b == 1 && a == 0) return 1;
    if(c == 0 && b == 0 && a == 0) return 1;
    if(c == 1 && b == 0 && a == 0) return 0;
    if(c == 1 && b == 1 && a == 1) return 0;
    
    

}







int main(){
    

    //init row to zero elements
    for(int i = 0; i < size; i++){

        row[i] = 0;

    }
    row[25] = 1;

    //we create a new array that changes the initial array by applying the ruleset
    int counter = 0;
    while(counter < 500){
        //printing current row
        for(int i = 0; i < size; i++){
            printf("%d", row[i]);
        }
        printf("\n");
        
        int nextrow[size];
        //init new row to zero (not a necessary step)
        for(int i = 0; i < size; i++){
            nextrow[i] = 0;
        }

        for(int i = 1; i < size -1; i++){
            nextrow[i] = binaryToDecimal(row[i-1], row[i], row[i+1]);
        }
        
        //changing current row to next row

        for(int i = 0; i < size; i++){
            row[i] = nextrow[i];
        }
        

        
        
        counter++;
    }


    int temp = 0;
    scanf("%d", &temp);
    return 0;
}






