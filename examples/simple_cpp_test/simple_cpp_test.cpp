//simple cpp example
  
//Written by Eyal Porat from Vicii Air Systems in 2021
//an implementation of the kalman filter
//Vicii Air Systems youtube channel https://www.youtube.com/channel/UCOSavZxZ2kfVIxUxBTmdQTg
//Copyleft licenced

#include "Kalman.h"

KalmanC myKalman = KalmanC(1000);

//creating a noisy signal
int noisy_signal[50] = {0, 1, 5, 3, 7, 5, 6, 9, 15, 11, 13, 25, 20, 19, 22, 27, 30, 25, 32, 37, 35, 33, 39, 70, 39, 42, 35, 38, 44, 50, 47, 55, 56, 45, 55, 59, 60, 0, 65, 62, 69, 72, 75, 79, 70, 75, 80, 88, 90, 100};
int processed_signal[50];

int main()
{
  for (int i = 0; i < 50; i++)
  {
    //updating myKalman object with the noisy signal
    processed_signal[i] = myKalman.KALMAN(noisy_signal[i]);
  }
  return 0;
}
