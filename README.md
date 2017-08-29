# Estibas_lib

Library for converting distance given from a sensor into a classification in ranges.

The objetc Estibas(int echo, int trigger, int dist_piso) receives the pins for echo and trigger and the distance from the sensor to the 
floor.

Function int cantidad(int tolerancia, int alto_estiba) receives the tolerance in percentage of the pallet height and the pallet height and 
returns an int which corresponds to the classification of the sensor read into the specified classes.

Function int cantidad_filtered(int tolerancia, int alto_estiba) does the same as cantidad() but takes 10 reads from the sensor, deletes
max and min and then provides an average to begin with the classification into the ranges.
