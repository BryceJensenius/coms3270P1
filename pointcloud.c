#include <stdio.h>
#include "pointcloud.h"
#include <float.h>

void stat1(){
  struct streamPoint streamMaxPoint = {0,0, -DBL_MAX};
  struct streamPoint streamMinPoint = {0,0, DBL_MAX};
  double totalHeight = 0;
  int totalPoints = 0;
  double curX = 0;
  double curY = 0;
  double curHeight = 0;

  while(scanf("%lf %lf %lf", &curX, &curY, &curHeight) == 3){
    totalPoints++;
    totalHeight += curHeight;
    if(curHeight > streamMaxPoint.height){
      streamMaxPoint.height = curHeight;
      streamMaxPoint.xLoc = curX;
      streamMaxPoint.yLoc = curY;
    }else if(curHeight < streamMinPoint.height){
      streamMinPoint.height = curHeight;
      streamMinPoint.xLoc = curX;
      streamMinPoint.yLoc = curY;
    }
  };

  if(totalPoints == 0){
    printf("No data points provided.\n");
    return;
  }

  printf("Minimum Height was at X=%.1f and Y=%.1f, this min height was %.15f\n", streamMinPoint.xLoc, streamMinPoint.yLoc, streamMinPoint.height);
  printf("Maximum Height was at X=%.1f and Y=%.1f, this max height was %.15f\n", streamMaxPoint.xLoc, streamMaxPoint.yLoc, streamMaxPoint.height);
  printf("Average Height of the Stream was %.15f\n", totalHeight/totalPoints);
}

int main(){
  stat1();
  return 0;
}
