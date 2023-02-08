#include <stdio.h>
#include <string.h>
int main(){
  int counter1[] = {0,0,0,0};
  int counter2[] = {0,0,0,0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
 
  for(int i = 0; i < strlen(s1); i++){
    if (s1[i] == 'a'){
      counter1[0]+=1;
      }
    else if (s1[i] == 'b'){
      counter1[1]+=1;
      }
    else if (s1[i] == 'c'){
      counter1[2]+=1;
      }
    else if (s1[i] == 'd'){
      counter1[3]+=1;
      }
  
  }

  for(int j = 0; j < strlen(s2); j++){
    if (s2[j] == 'a'){
      counter2[0]+=1;
      }
    else if (s2[j] == 'b'){
      counter2[1]+=1;
      }
    else if (s2[j] == 'c'){
      counter2[2]+=1;
    }
    else if (s2[j] == 'd'){
      counter2[3]+=1;
    }
  
  }

  int flag = 0;

  for(int a = 0; a < 4; a++){
    if(counter1[a]==counter2[a]){
      flag = 0;
    }
    else{
      flag = 1;
    }
  }

  if (flag == 1){
    printf("Not Anagram!\n");
  }
  else{
    printf("Anagram\n!");
  }
}