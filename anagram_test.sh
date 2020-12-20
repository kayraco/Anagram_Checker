#!/bin/bash

clear

#gcc -o anagram anagram.c 

firstword="listen"
secondword="silent"
$HOME/anagram $firstword $secondword
x=$?
echo $x
if [ $x -eq 0 ];
then 
	echo "Test succeeded"
else
	echo "Test failed"
fi

thirdword="listen"
fourthword="silence"
$HOME/anagram $thirdword $fourthword
z=$?
echo $z
if [ $z -eq 0 ];
then
        echo "Test succeeded"
else
        echo "Test failed"
fi
echo “Execution of anagram program has ended successfully!”
