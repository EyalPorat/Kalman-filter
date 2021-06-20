//Written by Eyal Porat from Vicii Air Systems in 2021
//an implementation of the kalman filter
//Vicii Air Systems youtube channel https://www.youtube.com/channel/UCOSavZxZ2kfVIxUxBTmdQTg
//Copyleft licenced

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
