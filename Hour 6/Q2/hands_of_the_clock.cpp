#include<iostream>
using namespace std;

int main(){
    string time;
    cin>>time;
    int h, m;
    float h_angle, m_angle, angle;
    h = (time[0] - '0')*10 + (time[1] - '0');
    m = (time[3] - '0')*10 + (time[4] - '0');
    h_angle = 0.5 * (60 * h + m);
    m_angle = 6 * m;
    angle = abs(h_angle - m_angle);
    angle = min(360-angle, angle);
    printf("%0.1f", angle);
    return 0;
}