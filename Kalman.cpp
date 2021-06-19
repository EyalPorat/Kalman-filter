//Wrote by Eyal Porat from Vicii Air Systems in 2021
//an implementation of the kalman filter
//Vicii Air Systems youtube channel https://www.youtube.com/channel/UCOSavZxZ2kfVIxUxBTmdQTg
//Copyleft licenced

#include "Arduino.h"
#include "d_Kalman.h"


KalmanC::KalmanC(float _R):R(_R), H(1.00){
  Q = 15;
  P = 0;
  U_hat = 0;
  K = 0;
}

float KalmanC::KALMAN(float U){
  K = P*H/(H*P*H+R);
  U_hat = U_hat + K*(U-H*U_hat);
  P = (1-K*H)*P + Q;
  return U_hat;
}
