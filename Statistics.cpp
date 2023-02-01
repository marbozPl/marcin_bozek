/*!

\file Statistics.cpp
\brief Plik źródłowy klasy Statistics
Plik zawiera implementację metod klasy Statistics, która
udostępnia funkcjonalność do obliczania statystyk dla
sekwencji danych.
*/
#include "Statistics.h"
#include "Sequence.h"
#include <cmath>

/*!

\brief Konstruktor domyślny.
Tworzy obiekt do obliczania statystyk dla sekwencji.
*/
Statistics::Statistics() {}
/*!

\brief Funkcja obliczająca średnią arytmetyczną.
Funkcja oblicza średnią arytmetyczną dla sekwencji.
\param seq Sekwencja, dla której ma być obliczona średnia arytmetyczna.
\return Średnia arytmetyczna dla sekwencji.
*/
double Statistics::Mean(const Sequence<double>& seq) {
int n = seq.GetLength();
double sum = 0.0;
for (int i = 0; i < n; ++i) {
sum += seq.GetElement(i);
}
return sum / n;
}
/*!

\brief Funkcja obliczająca odchylenie standardowe.
Funkcja oblicza odchylenie standardowe dla sekwencji.
\param seq Sekwencja, dla której ma być obliczone odchylenie standardowe.
\return Odchylenie standardowe dla sekwencji.
*/
double Statistics::StdDev(const Sequence<double>& seq) {
int n = seq.GetLength();
double mean = Mean(seq);
double sum = 0.0;
for (int i = 0; i < n; ++i) {
double diff = seq.GetElement(i) - mean;
sum += diff * diff;
}
return sqrt(sum / n);
}
/*!

\brief Funkcja obliczająca minimalną wartość.
Funkcja oblicza minimalną wartość dla sekwencji.
\param seq Sekwencja, dla której ma być obliczona minimalna wartość.
\return Minimalna wartość dla sekwencji.
*/
double Statistics::Min(const Sequence<double>& seq) {
int n = seq.GetLength();
double min = seq.GetElement(0);
for (int i = 1; i < n; ++i) {
min = std::min(min, seq.GetElement(i));
}
return