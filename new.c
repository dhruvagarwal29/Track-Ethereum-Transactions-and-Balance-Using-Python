#include<stdio.h>
#include<time.h>

float dp(long N, float *pA, float *pB){
    float R = 0.0;
    int j;
    for(j=0;j<N;j++)
    R += pA[j]*pB[j];
    return R;
}
int main(){
    struct timespec start, end;
    float b1[10];
    for (int i = 1; i <= 10; i++)
        b1[i]=1.0;
    float c1[10];
    for (int i = 1; i <= 10; i++)
        c1[i]=1.0;
    clock_gettime(CLOCK_MONOTONIC,&start);
    float m;
    m=dp(1000,b1,c1);
    clock_gettime(CLOCK_MONOTONIC,&end);
    double time_usec = (((double)end.tv_sec*1000000+(double)end.tv_nsec/1000) - ((double)start.tv_sec*1000000+(double)start.tv_nsec/1000));
    printf("time: %.03lf\n", time_usec);

}