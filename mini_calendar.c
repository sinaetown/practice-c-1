#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year){
  if (year % 4 != 0){
      return false;
  }
  else if (year % 100 != 0){
      return true;
  }
  else if (year % 400 != 0){
      return false;
  }
  else{
    return true;
  }
}

int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add){
  int days_left_in_month;

  while(days_left_to_add > 0){
     days_left_in_month = days_in_month[*mm] - *dd;

    if((*mm == 2) && (is_leap_year(*yy))){
      days_left_in_month += 1;
    }
    
    if(days_left_to_add > days_left_in_month){
      days_left_to_add = days_left_to_add - days_left_in_month - 1;
      *dd = 1;

      if(*mm == 12){
        *mm = 1;
        *yy += 1;
      }

      else {
        *mm += 1;
      }
    }
    else{
      *dd += days_left_to_add;
      days_left_to_add = 0;
    }
  }
}

void printable(int *mm){
  if (*mm == 1){
    printf("Jan ");
  }

  if (*mm == 2){
    printf("Feb ");
  }

  if (*mm == 3){
    printf("March ");
  }

  if (*mm == 4){
    printf("April ");
  }

  if (*mm == 5){
    printf("May ");
  }

  if (*mm == 6){
    printf("June ");
  }

  if (*mm == 7){
    printf("July ");
  }

  if (*mm == 8){
    printf("August ");
  }

  if (*mm == 9){
    printf("Sep ");
  }

  if (*mm == 10){
    printf("Oct ");
  }

  if (*mm == 11){
    printf("Nov ");
  }

  if (*mm == 12){
    printf("Dec ");
  }
}

int main() {
  // int year;
  // scanf("%i",&year);
  // if(is_leap_year(year)){
  //   printf("Leap Year\n");
  // }
  // else{
  //   printf("Not Leap Year\n");
  // }

  int mm, dd, yy, days_left_to_add;
  printf("Enter: ");
  scanf("%d%d%d%d", &mm, &dd, &yy, &days_left_to_add);
  add_days_to_date(&mm, &dd, &yy, days_left_to_add);
  printable(&mm);
  printf("%d, %d\n", dd, yy);
  // printf("%d %d %d\n", mm, dd, yy);
}

