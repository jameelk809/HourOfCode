#include<stdio.h>
#include<stdlib.h>

void main(){
    char time[5];
    scanf("%s", time);
    int h, m;
    float h_angle, m_angle, angle;
    h = (time[0] - '0')*10 + (time[1] - '0');
    m = (time[3] - '0')*10 + (time[4] - '0');
    h_angle = 0.5 * (60 * h + m);
    m_angle = 6 * m;
    angle = abs(h_angle - m_angle);
    angle = (360-angle < angle)? 360-angle: angle;
    printf("%0.1f", angle);
}