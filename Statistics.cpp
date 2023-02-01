/**
 * @class Statistics
 * @brief Represents a set of statistical values.
 *
 * The Statistics class provides a representation of a set of statistical
 * values. The class has a default constructor, a copy constructor, and a
 * destructor. The class also provides functions for adding values to the set
 * and calculating various statistical measures, such as the mean and median.
 *
 * @author Marcin Bożek
 * @date 01.02.2023
 */
class Statistics {
public:
  /**
   * @brief Default constructor.
   *
   * Creates an empty set of statistical values.
   */
  Statistics();

  /**
   * @brief Copy constructor.
   *
   * Creates a copy of the given set of statistical values.
   *
   * @param[in] other The set of statistical values to copy.
   */
  Statistics(const Statistics& other);

  /**
   * @brief Destructor.
   *
   * Deallocates the memory used by the set of statistical values.
   */
  ~Statistics();

  /**
   * @brief Adds a value to the set.
   *
   * @param[in] value The value to add to the set.
   */