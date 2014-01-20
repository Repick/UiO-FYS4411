#!/bin/bash
# run.sh
# Erstellt den Praktikumsbericht
# wird vom Stammverzeichnis aufgerufen
# @author: Felix Hekhorn <felix.hekhorn@student.uni-tuebingen.de>

#find . -name "rule*" -delete
#find . -name "anw*" -delete

pdflatex --shell-escape ./report.tex
echo 
bibtex ./report
#echo
#feynmf ./Bericht.tex
#echo
#for f in ./*.mf; do
#	(mf $f)
#done;
#echo
#pdflatex --shell-escape ./report.tex
#echo
pdflatex --shell-escape ./report.tex
echo
pdflatex --shell-escape ./report.tex
