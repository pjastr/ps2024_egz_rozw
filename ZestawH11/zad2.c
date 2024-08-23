#include <stdio.h>

int countVowelsInOneString(char * txt){
    int count = 0;
    for(int i = 0; txt[i] != '\0'; i++){
        if(txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u' || txt[i] == 'A' || txt[i] == 'E' || txt[i] == 'I' || txt[i] == 'O' || txt[i] == 'U'){
            count++;
        }
    }
    return count;
}

int countVowels(char * txt1, char * txt2, char * txt3){
    return countVowelsInOneString(txt1) + countVowelsInOneString(txt2) + countVowelsInOneString(txt3);
}

int main() {
    char txt1[] = "abc";
    char txt2[] = "34er";
    char txt3[] = "klmE";
    printf("Liczba samoglosek w napisach: %d\n", countVowels(txt1, txt2, txt3));
    return 0;
}