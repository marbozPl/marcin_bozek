/*! 
 * \file Sequence.h
 * \brief Plik nagłówkowy klasy Sequence
 * 
 * Plik zawiera deklarację klasy Sequence, która jest szablonem
 * reprezentującym sekwencję danych. 
 */
 
#ifndef SEQUENCE_H
#define SEQUENCE_H
 
#include <vector>
 
/*!
 * \class Sequence
 * \brief Klasa reprezentująca sekwencję danych.
 * 
 * Klasa umożliwia przechowywanie sekwencji danych oraz wykonywanie
 * na nich różnego rodzaju operacji.
 */
template<typename T>
class Sequence {
 public:
  /*!
   * \brief Konstruktor domyślny.
   * 
   * Tworzy pustą sekwencję.
   */
  Sequence();
 
  /*!
   * \brief Konstruktor kopiujący.
   * 
   * Tworzy kopię sekwencji.
   * \param seq Sekwencja do skopiowania.
   */
  Sequence(const Sequence& seq);
 
  /*!
   * \brief Destruktor.
   * 
   * Zwalnia pamięć zarezerwowaną przez sekwencję.
   */
  ~Sequence();
 
  /*!
   * \brief Funkcja dodająca element do sekwencji.
   * 
   * Dodaje nowy element do sekwencji.
   * \param element Element do dodania.
   */
  void AddElement(const T& element);
 
  /*!
   * \brief Funkcja zwracająca element sekwencji o danym indeksie.
   * 
   * Zwraca element sekwencji o danym indeksie.
   * \param index Indeks elementu.
   * \return Element sekwencji o indeksie index.
   */
  T GetElement(int index) const;
 
  /*!
   * \brief Funkcja zwracająca długość sekwencji.
   * 
   * Zwraca liczbę elementów w sekwencji.
   * \return Długość sekwencji.
   */
  int GetLength() const;
 
 private:
  std::vector<T> data_; //!< Wektor przechowujący dane sekwencji.
};
 
#endif  // SEQUENCE_H
