//
// Created by krv on 12/10/16.
//

#ifndef CONCURRENTTHLAB_1_UTIL_H
#define CONCURRENTTHLAB_1_UTIL_H

#include <vector>
#include <time.h>


class Util {
public:
    static float Mean(std::vector<float> times);

    static float StandardDeviation(std::vector<float> times);

    static long RequiredSampleSize(float sd, float mean);


    static float elapsed_time_nsec(timespec *begin, timespec *end, unsigned long *sec, unsigned long *nsec);

    static float elapsed_time_msec(timespec *begin, timespec *end, unsigned long *sec, unsigned long *nsec);

    static float elapsed_time_microsec(timespec *begin, timespec *end, unsigned long *sec, unsigned long *nsec);
};

#endif //CONCURRENTTHLAB_1_UTIL_H