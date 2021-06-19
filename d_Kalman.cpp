
#include "Arduino.h"
#include "d_Kalman.h"


//kalman filter implementation

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

KalmanC kalman_mag_X = KalmanC(500);
KalmanC kalman_mag_Y = KalmanC(500);
KalmanC kalman_mag_Z = KalmanC(500);
KalmanC kalman_accel_X = KalmanC(500);
KalmanC kalman_accel_Y = KalmanC(500);
KalmanC kalman_accel_Z = KalmanC(500);
KalmanC kalman_gyro_X = KalmanC(500);
KalmanC kalman_gyro_Y = KalmanC(500);
KalmanC kalman_gyro_Z = KalmanC(500);
