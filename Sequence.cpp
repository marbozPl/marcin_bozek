/*!

\file Sequence.cpp
\brief Plik źródłowy klasy Sequence
Plik zawiera implementację klasy Sequence.
*/
#include "Sequence.h"

/*!

\brief Konstruktor domyślny.
Tworzy pustą sekwencję.
*/
template<typename T>
Sequence<T>::Sequence() {}
/*!

\brief Konstruktor kopiujący.
Tworzy kopię sekwencji.
\param seq Sekwencja do skopiowania.
*/
template<typename T>
Sequence<T>::Sequence(const Sequence& seq) : data_(seq.data_) {}
/*!

\brief Destruktor.
Zwalnia pamięć zarezerwowaną przez sekwencję.
*/
template<typename T>
Sequence<T>::~Sequence() {}
/*!

\brief Funkcja dodająca element do sekwencji.
Dodaje nowy element do sekwencji.
\param element Element do dodania.
*/
template<typename T>
void Sequence<T>::AddElement(const T& element) {
data_.push_back(element);
}
/*!

\brief Funkcja zwracająca element sekwencji o danym indeksie.
Zwraca element sekwencji o danym indeksie.
\param index Indeks elementu.
\return Element sekwencji o indeksie index.
*/
template<typename T>
T Sequence<T>::GetElement(int index) const {
return data_.at(index);
}
/*!

\brief Funkcja zwracająca długość sekwencji.
Zwraca liczbę elementów w sekwencji.
\return Długość sekwencji.
*/
template<typename T>
int Sequence<T>::GetLength() const {
return data_.size();
}