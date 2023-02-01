#ifndef ERROR_HANDLE_H
#define ERROR_HANDLE_H

#include <exception>
#include <string>

/*!
 * \class ErrorHandle
 * \brief Klasa reprezentująca błędy.
 *
 * Klasa umożliwia zgłaszanie błędów i ich opisanie.
 */
class ErrorHandle : public std::exception {
 public:
  /*!
   * \brief Konstruktor.
   *
   * Tworzy obiekt błędu z opisem.
   * \param message Opis błędu.
   */
  explicit ErrorHandle(const std::string& message);

  /*!
   * \brief Funkcja zwracająca opis błędu.
   *
   * Zwraca opis błędu jako ciąg znaków.
   * \return Opis błędu.
   */
  const char* what() const noexcept override;

 private:
  std::string message_; //!< Opis błędu.
};

#endif  // ERROR_HANDLE_H
