/*
 * File:   main.cpp
 * Author: Георгий
 *
 * Created on 12 Декабрь 2014 г., 18:00
 */

#include "Object2DA9.h"

void help();

int main() {
    int menu = 1;
    double k;
    bool is;
    Point2D* centre = new Point2D(3.1, -1.2);
    Object2DA9* object = new Object2DA9(10, 4, 3, 2, 1.5789, centre);
    Point2D* point = new Point2D(3.1, 3.8);
    while (menu) {
        switch (menu) {
            case 1:
                help();
                break;
            case 2:
                is = object->isInside(point);
                cout << is << endl;
                break;
            case 3:
                cin >> k;
                point->setX(k);
                break;
            case 4:
                cin >> k;
                point->setY(k);
                break;
            case 5:
                cin >> k;
                object->setA(k);
                break;
            case 6:
                cin >> k;
                object->setB(k);
                break;
            case 7:
                cin >> k;
                object->setC(k);
                break;
            case 8:
                cin >> k;
                object->setD(k);
                break;
            case 9:
                cin >> k;
                object->setAngle(k);
                break;
            case 10:
                cin >> k;
                object->setCentreX(k);
                break;
            case 11:
                cin >> k;
                object->setCentreY(k);
                break;
            case 12:
                object->print();
                point->print();
                break;
        };
        cout << "Enter the action: ";
        cin >> menu;
    };
    delete centre;
    delete object;
    delete point;
    return 0;
}

void help() {
    cout << "0. Exit" << endl;
    cout << "1. Help" << endl;
    cout << "2. Check" << endl;
    cout << "3. Change X-Point" << endl;
    cout << "4. Change Y-Point" << endl;
    cout << "5. Change A" << endl;
    cout << "6. Change B" << endl;
    cout << "7. Change C" << endl;
    cout << "8. Change D" << endl;
    cout << "9. Change Angle" << endl;
    cout << "10. Change X-Centre" << endl;
    cout << "11. Change Y-Centre" << endl;
    cout << "12. Print parameters" << endl;
}
