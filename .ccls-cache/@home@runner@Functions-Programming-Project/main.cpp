  #include <iostream>
#include <iomanip>
  using namespace std; 

// Get current price, price one year ago, price two years ago
void getInput(double &currentPrice, double &priceOneYearAgo, double &priceTwoYearsAgo) {
    cout << "Enter Current Price: ";
    cin >> currentPrice;

    cout << "Enter Price One Year Ago: ";
    cin >> priceOneYearAgo;

    cout << "Enter Price Two Years Ago: ";
    cin >> priceTwoYearsAgo;
  }

// Function to calculate inflation rates
void calculateInflations(double currentPrice, double priceOneYearAgo, double priceTwoYearsAgo, 
    double &inflationRate1, double &inflationRate2) {
     inflationRate1 = ((priceOneYearAgo - priceTwoYearsAgo) / priceTwoYearsAgo) * 100;
     inflationRate2 = ((currentPrice - priceOneYearAgo) / priceOneYearAgo) * 100;
  }

// Function to output the results and trend
void outputResults(double inflationRate1, double inflationRate2) {
    cout << fixed << setprecision(2);
    cout << "Inflation rate for the last year: " << inflationRate1 << "%" << endl;
    cout << "Inflation rate for the current year: " << inflationRate2 << "%" << endl;

// Determine inflation trend
if (inflationRate2 > inflationRate1) {
  cout << "The inflation trend is increasing." << endl;
} 
else if (inflationRate2 < inflationRate1) {
  cout << "The inflation trend is decreasing." << endl;
      }
else {
  cout << "The inflation trend is steady." << endl;
      }
  }

  int main() {
      double currentPrice, priceOneYearAgo, priceTwoYearsAgo;
      double inflationRate1, inflationRate2;

// Get input
      getInput(currentPrice, priceOneYearAgo, priceTwoYearsAgo);

// Calculate inflation rates
      calculateInflations(currentPrice, priceOneYearAgo, priceTwoYearsAgo, inflationRate1, inflationRate2);

// Output results and trend
      outputResults(inflationRate1, inflationRate2);

      return 0;
  }