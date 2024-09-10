#include <stdio.h>
#include <stdin.h>
#include <stdout.h>

struct streamPoint(){
  double xLoc;
  double yLoc;
  double height;
};

int main(){
  
  stat1();
}

void stat1(){
  struct streamMaxPoint;
  double averageHeight = 0;
  int totalPoints = 0;
  double curX = 0;
  double curY = 0;
  double curHeight = 0;

  while(1){
    scanf("%f %f %f", &curX, &curY, &curHeight);
    totalPoints++;
    averageHeight += curHeight;
    if(curHeight > streamMaxPoint.height){
      streamMaxPoint.height = curHeight;
      streamMaxPoint.xLoc = curX;
      streamMaxPoint.yLoc = curY;
    }

    printf("Maximum Height was at X=%f and Y=%f, this max height was %f\n", streamMaxPoint.xLoc, streamMaxPoint.yLoc, streamMaxPoint.height);
    printf("Average Height of the Stream was %f\n", averageHeight/totalPoints);
  }
}
