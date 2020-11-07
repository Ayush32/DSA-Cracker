/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<iostream>
using namespace std;

#define NO_OF_CHARS 256

class duplicate{
    public:
    void fillCharCounts(char *str,int *count){
        int i;
        for(i = 0;*(str+i);i++)
        count[*(str+i)]++;
    }

    void printDups(char *str){
        int *count = (int *)calloc(NO_OF_CHARS,sizeof(int));
        fillCharCounts(str,count);

        int i;
        for(i = 0; i < NO_OF_CHARS;i++)
        if(count[i] > 1){
            cout << "index " << char(i) << " count- " << count[i] << endl;
        }
        free(count);
    }
};


int main(){
    duplicate g;
    char str[] = "test string";

    g.printDups(str);
    return 0;
}