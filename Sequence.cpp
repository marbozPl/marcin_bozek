/**
 * @class Sequence
 * @brief Represents a sequence of integers.
 *
 * The Sequence class provides a representation of a sequence of integers. The
 * class has a default constructor, a copy constructor, and a destructor. The
 * class also provides functions for accessing and modifying the elements of
 * the sequence.
 *
 * @author Marcin Bożek
 * @date 01.02.2023
 */
class Sequence {
public:
  /**
   * @brief Default constructor.
   *
   * Creates an empty sequence.
   */
  Sequence();

  /**
   * @brief Copy constructor.
   *
   * Creates a copy of the given sequence.
   *
   * @param[in] other The sequence to copy.
   */
  Sequence(const Sequence& other);

  /**
   * @brief Destructor.
   *
   * Deallocates the memory used by the sequence.
   */
  ~Sequence();

  /**
   * @brief Gets the number of elements in the sequence.
   *
   * @return The number of elements in the sequence.
   */
  int getLength() const;

  /**
   * @brief Gets the element at the given index.
   *
   * @param[in] index The index of the element to retrieve.
   * @return The element at the given index.
   */
  int getElement(int index) const;

  /**
   * @brief Sets the element at the given index.
   *
   * @param[in] index The index of the element to set.
   * @param[in] value The value to set the element to.
   */
  void setElement(int index, int value);

private:
  int length;   /**< The number of elements in the sequence. */
  int* elements; /**< The elements of the sequence. */
};