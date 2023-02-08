#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race {
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};

struct RaceCar {
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
};
// Print functions section
void printIntro(){
  printf("Welcome to the racing game :D");
}

void printCountDown(){
  printf("\nRacers Ready! In...\n");
  printf("5\n4\n3\n2\n1\nRace!\n");
}

void printFirstPlaceAfterLap(struct Race race){
  printf("\nAfter lap number %d\n", race.currentLap);
  printf("First Place Is: %s in the %s race car!", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race){
  printf("\n\nLet's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

// Logic functions section
int calculateTimeToCompleteLap(){
  int speed;
  int acceleration;
  int nerves;
  
  speed = (rand() % 10) + 1;
  acceleration= (rand() % 10) + 1;
  nerves = (rand() % 10) + 1;
  return speed+acceleration+nerves;
}

void updateRaceCar(struct RaceCar* raceCar){
  raceCar->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2)
{
  if(raceCar1->totalLapTime <= raceCar2->totalLapTime){
    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
  }
  else{
    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
  }

}

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2){
  struct Race race = {5, 1, "", ""};

  for(int i = 1; i <= race.numberOfLaps; i++){
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
    updateFirstPlace(&race, raceCar1, raceCar2);
    printFirstPlaceAfterLap(race);
    race.currentLap++;
  }
  printCongratulation(race);
}

int main() {
	srand(time(0));
  struct RaceCar r1 = {"Stacy", "Blue", 0};
  struct RaceCar r2 = {"John", "Green", 0};
  printIntro();
  printCountDown();
  printf("\n");
  startRace(&r1, &r2);
};