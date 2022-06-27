h, m = map(int, input().split(':'))
#   hour hand:     0.5 degrees per minutes
#   minute hand:   6 degrees per minute
h_angle = 0.5 * (60 * h + m)
m_angle = 6 * m
angle = abs(h_angle - m_angle)
print(min(angle, (360-angle)))
