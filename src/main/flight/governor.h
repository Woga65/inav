#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "platform.h"


typedef struct govPid_s {
    
    /* Governor gains */
    float Kp;
    float Ki;
    float Kd;

    /* Derivative low-pass filter time constant */
    float tau;

    /* Output throttle limits */
    float minThrottle;
    float maxThrottle;

    /* Integrator limits */
    float minIterm;
    float maxIterm;

    /* Sample time */
    float T;

    /* Governor state */
    float iTerm;
    float dTerm;
    float prevError;
    float prevRpm;

    /* Governor output */
    float newThrottle;

} govPid_t;

uint16_t governorApply(uint16_t throttle);

//void governorInit(govPid_t *pid);
//float governorUpdate(govPid_t *pid, float targetRpm, float currentRpm);
