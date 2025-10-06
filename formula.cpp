#include <iostream>
#include <cmath>
#include <limits>

//the function to calculate the area
double area(double &af, double &bf, double &cf){
    double s;

    s = (af + bf + cf) / 2.0;
    std::cout << s << '\n';

    return sqrt(s*(s - af)*(s - bf)*(s - cf));
}

int main(){
    double a, b, c, say;
    char rerun, sides[] = {'a', 'b', 'c'};
    bool run, runa, runb, runc;

    /* main loop to restart the program if user wishes */
    do{
        std::cout << "*Calculate The Area Of A Triangle*\n";

        /* loop to find out if a, b, c are < 0 */
        do{
            //loop for all sides
            for(int lu = 0; lu <= 2; lu++){
                do{
                    std::cout << "Type in the side " << sides[lu] << ": ";
                    std::cin >> say;
                    std::cout << '\n';

                    switch(lu){
                        case 0: a = say;
                                runa = true;
                                break;
                        case 1: b = say;
                                runb = true;
                                break;
                        case 2: c = say;
                                runc = true;
                                break;
                        default: std::cout << "[An Error happened at side loop]";
                                 break;
                    }
                }while(!runa && !runb && !runc);
            }

            /* checks if all sides are numbers and are positive */
            if(a <= 0 || b <= 0 || c <= 0){
                std::cout << "\n[Error: all sides must be positive NUMBERS!]\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else{
                run = true;
            }
        }while(!run);

        std::cout << area(a, b, c) << '\n';
        std::cout << "would you like to calculate the area?\nyes(y)\nno(n) |: ";
        std::cin >> rerun;

        switch(rerun){
            case 'y': run = false;
                      break;
            case 'n': break;
            default: std::cout << "[An Error happened at main loop]";
                     break;
        }
    }while(!run);

    return 0;
}
