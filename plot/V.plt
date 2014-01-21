#!/usr/bin/gnuplot
reset

set term png
set xlabel "position space r [natural units]"
set xrange [0:10]

set title "potential V(r)"
set ylabel "potential V [natural units]"

set out "./img/V.png"
plot "./results/V.dat" u 2:3 t "V(r)"

set out
