// LedMeKnow library for remebering what leds are enabled.
// For use with an 8x8 led matrix

int x0[8]={0,0,0,0,0,0,0,0};
int x1[8]={0,0,0,0,0,0,0,0};
int x2[8]={0,0,0,0,0,0,0,0};
int x3[8]={0,0,0,0,0,0,0,0};
int x4[8]={0,0,0,0,0,0,0,0};
int x5[8]={0,0,0,0,0,0,0,0};
int x6[8]={0,0,0,0,0,0,0,0};
int x7[8]={0,0,0,0,0,0,0,0};

void enableLed(int x, int y){
if(x == 0){
  // use x0
  x0[y] = 1;
}
if(x == 1){
  // use x1
  x1[y] = 1;
}
if(x == 2){
  // use x2
  x2[y] = 1;
}
if(x == 3){
  // use x3
  x3[y] = 1;
}
if(x == 4){
  // use x4
  x4[y] = 1;
}
if(x == 5){
  // use x5
  x5[y] = 1;
}
if(x == 6){
  // use x6
  x6[y] = 1;
}
if(x == 7){
  // use x7
  x7[y] = 1;
}
}

void disableLed(int x, int y){
if(x == 0){
  // use x0
  x0[y] = 0;
}
if(x == 1){
  // use x1
  x1[y] = 0;
}
if(x == 2){
  // use x2
  x2[y] = 0;
}
if(x == 3){
  // use x3
  x3[y] = 0;
}
if(x == 4){
  // use x4
  x4[y] = 0;
}
if(x == 5){
  // use x5
  x5[y] = 0;
}
if(x == 6){
  // use x6
  x6[y] = 0;
}
if(x == 7){
  // use x7
  x7[y] = 0;
}
}

bool singleLedEnabled(int x, int y){
if(x == 0){
  // use x0
  if(x0[y] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 1){
  // use x1
  if(x1[y] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 2){
  // use x2
  if(x2[y] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 3){
  // use x3
  if(x3[y] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 4){
  // use x4
  if(x4[y] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 5){
  // use x5
  if(x5[y] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 6){
  // use x6
  if(x6[y] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 7){
  // use x7
  if(x7[y] == 1){
    return true;
  }
  else{
    return false;
  }
}
}

bool horizontalLedRowEnabled(int x){
if(x == 0){
  if(x0[0] == 1 && x0[1] == 1 && x0[2] == 1 && x0[3] == 1 && x0[4] == 1 && x0[5] == 1 && x0[6] == 1 && x0[7] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 1){
    if(x1[0] == 1 && x1[1] == 1 && x1[2] == 1 && x1[3] == 1 && x1[4] == 1 && x1[5] == 1 && x1[6] == 1 && x1[7] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 2){
    if(x2[0] == 1 && x2[1] == 1 && x2[2] == 1 && x2[3] == 1 && x2[4] == 1 && x2[5] == 1 && x2[6] == 1 && x2[7] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 3){
    if(x3[0] == 1 && x3[1] == 1 && x3[2] == 1 && x3[3] == 1 && x3[4] == 1 && x3[5] == 1 && x3[6] == 1 && x3[7] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 4){
    if(x4[0] == 1 && x4[1] == 1 && x4[2] == 1 && x4[3] == 1 && x4[4] == 1 && x4[5] == 1 && x4[6] == 1 && x4[7] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 5){
    if(x5[0] == 1 && x5[1] == 1 && x5[2] == 1 && x5[3] == 1 && x5[4] == 1 && x5[5] == 1 && x5[6] == 1 && x5[7] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 6){
    if(x6[0] == 1 && x6[1] == 1 && x6[2] == 1 && x6[3] == 1 && x6[4] == 1 && x6[5] == 1 && x6[6] == 1 && x6[7] == 1){
    return true;
  }
  else{
    return false;
  }
}
if(x == 7){
    if(x7[0] == 1 && x7[1] == 1 && x7[2] == 1 && x7[3] == 1 && x7[4] == 1 && x7[5] == 1 && x7[6] == 1 && x7[7] == 1){
    return true;
  }
  else{
    return false;
  }
}
}

bool verticalLedRowEnabled(int y){
  if (x0[y] = 1 && x1[y] = 1 && x2[y] = 1 && x3[y] = 1 && x4[y] = 1 && x5[y] = 1 && x6[y] = 1 && x7[y] = 1){
    return true;
  }
  else{
return false;
  }
}
