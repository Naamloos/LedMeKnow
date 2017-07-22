// LedMeKnow library for remembering what leds are enabled.
// For use with an 8x8 led matrix

int led[8][8]={
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0}
};

void enableLed(int x, int y){
  led[x][y] = 1;
}

void disableLed(int x, int y){
  led[x][y] = 0;
}

bool singleLedEnabled(int x, int y){
  if(led[x][y] == 1)
    return true;
  else
    return false;
}

bool horizontalLedRowEnabled(int x){
  if(led[x][0] == 1 && led[x][1] == 1 && led[x][2] == 1 && led[x][3] == 1 && led[x][4] == 1 && led[x][5] == 1 && led[x][6] == 1 && led[x][7] == 1)
    return true;
  else
    return false;
}

bool verticalLedRowEnabled(int y){
  if(led[0][y] == 1 && led[1][y] == 1 && led[2][y] == 1 && led[3][y] == 1 && led[4][y] == 1 && led[5][y] == 1 && led[6][y] == 1 && led[7][y] == 1)
    return true;
  else
    return false;
}
