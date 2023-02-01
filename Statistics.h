/*!

\file Statistics.h
\brief Plik nagłówkowy klasy Statistics
Plik zawiera deklarację klasy Statistics, która jest odpowiedzialna za
obliczenia statystyczne na sekwencjach danych.
*/
#ifndef STATISTICS_H
#define STATISTICS_H

#include "Sequence.h"

/*!

\class Statistics
\brief Klasa obliczająca statystyki na sekwencjach danych.
Klasa umożliwia obliczenie statystyk na sekwencjach danych, takich jak
średnia, odchylenie standardowe, itp.
/
template<typename T>
class Statistics {
public:
/!
\brief Funkcja obliczająca średnią arytmetyczną.
Oblicza średnią arytmetyczną dla danej sekwencji.
\param seq Sekwencja danych.
\return Średnia arytmetyczna.
*/
static T Mean(const Sequence<T>& seq);
/*!

\brief Funkcja obliczająca odchylenie standardowe.
Oblicza odchylenie standardowe dla danej sekwencji.
\param seq Sekwencja danych.
\return Odchylenie standardowe.
*/
static T StandardDeviation(const Sequence<T>& seq);
};
#endif // STATISTICS_H