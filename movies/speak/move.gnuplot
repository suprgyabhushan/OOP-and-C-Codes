# Gnuplot script file for plotting data in file "force.dat"
# This file is called   force.p
set   autoscale                        # scale axes automatically
unset log                              # remove any log-scaling
unset label                            # remove any previous labels
set xtic auto                          # set xtics automatically
set ytic auto                          # set ytics automatically
set title "Robot's movement"
set xlabel "X Coordinate (pixel)"
set ylabel "Y Coordinate (pixel)"
# set key 0.01 100
#set label "Positions" at 0.003,260
#set arrow from 0.0028,250 to 0.003,280
#set xr [0.0:0.022]
set xr [-100.0:100.0]
set yr [-100.0:100.0]
plot "move.dat" using 1:2 title 'Positions'
#with points 
#using 1:1 title 'Positions' with points 
#, \
#    "move.dat" using 1:3 title 'Beam' with points
pause 50
