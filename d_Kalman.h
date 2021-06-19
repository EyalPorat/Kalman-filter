#pragma once

class KalmanC
{
  public:
    KalmanC(float _R);
    const float R;
    const float H;
    float Q;
    float P;
    float U_hat;
    float K;
    float KALMAN(float U);
  
};

extern KalmanC Kalman;
extern KalmanC kalman_mag_X;
extern KalmanC kalman_mag_Y;
extern KalmanC kalman_mag_Z;
extern KalmanC kalman_accel_X;
extern KalmanC kalman_accel_Y;
extern KalmanC kalman_accel_Z;
extern KalmanC kalman_gyro_X;
extern KalmanC kalman_gyro_Y;
extern KalmanC kalman_gyro_Z;
