# Heart-Health-Assessment

Heart-Health-Assessment is a health-oriented application developed in C, offering users a choice of assessing their Body Mass Index (BMI), Blood Pressure, or their Cardiac Risk Score using the ERICE Score method.

## Table of Contents

- [Getting Started](#getting-started)
- [Usage](#usage)
- [ERICE Score](#erice-score)
- [Charts](#charts)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

- GCC, the GNU Compiler Collection

### Installation

1. Clone the repo
    ```
    git clone https://github.com/kshgr/Heart-Health-Assessment.git
    ```

2. Navigate into the project directory
    ```
    cd Heart-Health-Assessment
    ```

3. Compile the main.c file
    ```
    gcc -o main main.c
    ```

4. Run the program
    ```
    ./main
    ```

## Usage

Upon running the application, users can choose between three health assessment options: BMI, Blood Pressure, or ERICE Score. The user's input will guide the calculations and the application will output the results. There is also an option to Exit the program.

## ERICE Score

The ERICE Score is a metric used to evaluate the risk of cardiovascular disease in individuals. This scoring method is based on a number of factors, including age, sex, diabetes status, smoking status, blood pressure, and cholesterol levels. For more information, refer to the ERICE Score [research paper](https://www.revespcardiol.org/en-the-erice-score-new-native-cardiovascular-articulo-S1885585714002448).

## Charts

This application uses the following charts for its calculations:

1. **Blood Pressure Chart**: Used for the Blood Pressure Assessment. The chart can be found [here](https://github.com/kshgr/Heart-Health-Assessment/blob/b77a82f500ede46932dace6e2c7fc149fedc0a1b/Graphics/Blood%20Pressure%20Chart.png).

    ![Blood Pressure Chart](https://github.com/kshgr/Heart-Health-Assessment/blob/b77a82f500ede46932dace6e2c7fc149fedc0a1b/Graphics/Blood%20Pressure%20Chart.png)
    
2. **ERICE Score Chart**: Used for the ERICE Score Assessment. The chart can be found [here](https://github.com/kshgr/Heart-Health-Assessment/blob/b77a82f500ede46932dace6e2c7fc149fedc0a1b/Graphics/).

    ![ERICE Chart Women](https://github.com/kshgr/Heart-Health-Assessment/blob/b77a82f500ede46932dace6e2c7fc149fedc0a1b/Graphics/ERICE%20Chart%20Women.jpeg)
    
    ![ERICE Chart Men](https://github.com/kshgr/Heart-Health-Assessment/blob/b77a82f500ede46932dace6e2c7fc149fedc0a1b/Graphics/ERICE%20Chart%20Men.jpeg)

    
## Contributing

We welcome contributions! Please see [CONTRIBUTING.md](CONTRIBUTING.md) for details on how to contribute.

## License

This project is licensed under the [MIT License](LICENSE).

## Release

Current stable release is [App v1.0.1](https://github.com/kshgr/Heart-Health-Assessment/releases/tag/v1.0.1). Please visit the [release page](https://github.com/kshgr/Heart-Health-Assessment/releases) for all the available versions.
