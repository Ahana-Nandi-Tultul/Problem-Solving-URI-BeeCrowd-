




day, b_day =input().split()
b_day=int(b_day)
b_time =input().split(":")
#print(b_time)

day2, d_day =input().split()
d_day=int(d_day)
d_time =input().split(":")
# print(d_time)

if d_time[2 ] >b_time[2]:
    d_time[2] = int(d_time[2]) + 60
    d_time[1] = int(d_time[1]) - 1
    ss = int(d_time[2]) - int(b_time[2])
else:
    ss = int(d_time[2]) - int(b_time[2])

if int(b_time[1 ])> int(d_time[1]):
    d_time[1] = int(d_time[1]) + 60
    d_time[0] = int(d_time[0]) - 1
    mm = int(d_time[1]) - int(b_time[1])
else:
    mm = int(d_time[1]) - int(b_time[1])

if int(b_time[0]) > int(d_time[0]):
    d_time[0] = int(d_time[0]) + 24
    d_day = int(d_day) - 1
    hh = int(d_time[0]) - int(b_time[0])
    d = int(d_day) - int(b_day);
else:
    hh = int(d_time[0]) - int(b_time[0])
    d = int(d_day) - int(b_day);

print(f"{d} dia(s)")
print(f"{hh} hora(s)")
print(f"{mm} minuto(s)")
print(f"{ss} segundo(s)")
