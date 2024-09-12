#include <stdio.h>
#include "pointcloud.h"

void stat1(){
  struct streamPoint streamMaxPoint = {0,0,0};
  double totalHeight = 0;
  int totalPoints = 0;
  double curX = 0;
  double curY = 0;
  double curHeight = 0;

  while(totalPoints < 20){
    scanf("%lf %lf %lf", &curX, &curY, &curHeight);
    totalPoints++;
    totalHeight += curHeight;
    if(curHeight > streamMaxPoint.height){
      streamMaxPoint.height = curHeight;
      streamMaxPoint.xLoc = curX;
      streamMaxPoint.yLoc = curY;
    }
  }
  printf("Maximum Height was at X=%f and Y=%f, this max height was %f\n", streamMaxPoint.xLoc, streamMaxPoint.yLoc, streamMaxPoint.height);
  printf("Average Height of the Stream was %f\n", totalHeight == 0 ? 0 : totalHeight/totalPoints);//avoid divide by zero by checking if any data was put in/ no height
}

int main(){
  stat1();
  return 0;
}
