
/**
 * @file integrate.cpp
 * @brief Skrypt do obliczania całki numerycznej za pomocą metody prostokątów
 *
 * Plik zawiera funkcję main(), w której jest wywoływana funkcja integrate(),
 * która oblicza całkę numeryczną funkcji sin(x) na przedziale [0, pi].
 *
 * @author Marcin Bożek
 * @date 01.02.2023
 */

/**
 * @file PlotSine.cpp
 * @brief A simple example of plotting a sine function using Gnuplot
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <gnumeric-config.h>
#include <gnumeric.h>

/**
 * @brief Define a function to plot
 * @param x The input value
 * @return The value of the sine function at x
 */
double f(double x)
{
    return sin(x);
}

/**
 * @brief Main function
 * @return 0 if the program executes successfully
 */
int main()
{
    /**
     * @brief Create a Gnuplot instance
     */
    Gnumeric gnu;
    /**
     * @brief Set the plot title
     */
    gnu.set_title("Sine Function");
    /**
     * @brief Set the x-axis label
     */
    gnu.set_xlabel("X");
    /**
     * @brief Set the y-axis label
     */
    gnu.set_ylabel("Y");
    /**
     * @brief Store the x and y values for the plot
     */
    std::vector<double> x;
    std::vector<double> y;
    for (double i = 0; i <= 10; i += 0.1)
    {
        x.push_back(i);
        y.push_back(f(i));
    }
    /**
     * @brief Plot the sine function
     */
    gnu.plot(x, y);
    return 0;
}
