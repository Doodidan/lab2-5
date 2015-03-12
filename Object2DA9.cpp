/*
* File:   main.cpp
* Author: George
*
* Created on 14 George 2014 �., 11:07
*/

#include <cmath>
#include "Object2DA9.h"
#include "Point2D.h"

Object2DA9::Object2DA9(double ta, double tb, double tc, double td, double tangle, const Point2D* tcentre) {
	bool verification = false;
	do {
		if ((ta < 0) || (tb < 0) || (tc < 0) || (td < 0)) {
			verification = true;
			break;
		};
		a = ta;
		if ((2 * tb) <= a) {
			b = tb;
		}
		else {
			verification = true;
			break;
		};
		if ((tc <= a) && ((b + hypotenuse(tc) / 2) < hypotenuse(a, a / 2))) {
			c = tc;
		}
		else {
			verification = true;
			break;
		};
		if (!setD(td)) {
			verification = true;
			break;
		};
	} while (0);
	if (verification) {
		a = b = c = d = 0;
	}
	setAngle(tangle);
	centre = new Point2D;
	setCentre(tcentre);
}

Object2DA9::~Object2DA9() {
	delete centre;
	centre = 0;
}

double Object2DA9::getA() const {
	return a;
}

double Object2DA9::getB() const {
	return b;
}

double Object2DA9::getC() const {
	return c;
}

double Object2DA9::getD() const {
	return d;
}

double Object2DA9::getAngle() const {
	return angle;
}

Point2D* Object2DA9::getCentre() const {
	Point2D* tcentre = new Point2D;
	tcentre->setX(centre->getX());
	tcentre->setY(centre->getY());
	return tcentre;
}

bool Object2DA9::setA(double ta) {
	if (checkA(ta)) {
		a = ta;
		return true;
	};
	return false;
}

bool Object2DA9::setB(double tb) {
	if (checkB(tb)) {
		b = tb;
		return true;
	};
	return false;
}

bool Object2DA9::setC(double tc) {
	if (checkC(tc)) {
		c = tc;
		return true;
	};
	return false;
}

bool Object2DA9::setD(double td) {
	if (checkD(td)) {
		d = td;
		return true;
	};
	return false;
}

bool Object2DA9::setAngle(double tangle) {
	angle = tangle;
	return true;
}

bool Object2DA9::setCentre(const Point2D* tcentre) {
	centre->setX(tcentre->getX());
	centre->setY(tcentre->getY());
	return true;
}

bool Object2DA9::setCentreX(double x) {
	centre->setX(x);
	return true;
}

bool Object2DA9::setCentreY(double y) {
	centre->setY(y);
	return true;
}

bool Object2DA9::move(double x, double y, double tangle) {
	centre->setX(centre->getX() + x);
	centre->setY(centre->getY() + y);
	rotate(tangle);
	return true;
}

bool Object2DA9::move(const Point2D* delta, double tangle) {
	move(delta->getX(), delta->getY(), tangle);
	return true;
}

bool Object2DA9::rotate(double tangle) {
	setAngle(angle + tangle);
	return true;
}

bool Object2DA9::isInside(double x, double y) const {
	Point2D* point = new Point2D(x, y);
	isInside(point);
	delete point;
	return true;
}

bool Object2DA9::isInside(const Point2D* startPoint) const {
	Point2D* point = moveAndRotatePoint(startPoint);
	bool check = checkInside(point);
	delete point;
	point = 0;
	return check;
}

void Object2DA9::print() const {
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", angle = " << angle << ", centre: ";
	centre->print();
}

Point2D* Object2DA9::moveAndRotatePoint(const Point2D* startPoint) const {
	double x, y;
	Point2D* point = movePoint(startPoint);
	x = point->getX() * cos(-angle) - point->getY() * sin(-angle);
	y = point->getX() * sin(-angle) + point->getY() * cos(-angle);
	point->setX(x);
	point->setY(y);
	return point;
}

Point2D* Object2DA9::movePoint(const Point2D* point) const {
	return new Point2D(point->getX() - centre->getX(), point->getY() - centre->getY());
}

double Object2DA9::hypotenuse(double x, double y) const {
	return sqrt(pow(x, 2) + pow(y, 2));
}

double Object2DA9::hypotenuse(double a) const {
	return a * sqrt(2);
}

bool Object2DA9::checkA(double ta) const {
	if (ta < 0) return false;
	return ((b + d) < hypotenuse(ta, ta / 2)) && ((b + hypotenuse(c) / 2) < hypotenuse(ta, ta / 2)) && ((c + d) <= ta) && (2 * b <= ta);
}

bool Object2DA9::checkB(double tb) const {
	if (tb < 0) return false;
	return ((tb + d) < hypotenuse(a, a / 2)) && ((tb + hypotenuse(c) / 2) < hypotenuse(a, a / 2)) && (2 * tb <= a);
}

bool Object2DA9::checkC(double tc) const {
	if (tc < 0) return false;
	return ((b + hypotenuse(tc) / 2) < hypotenuse(a, a / 2)) && ((tc + d) <= a);
}

bool Object2DA9::checkD(double td) const {
	if (td < 0) return false;
	return ((b + td) < hypotenuse(a, a / 2)) && ((c + td) <= a);
}

bool Object2DA9::checkInside(const Point2D* point) const {
	return (abs(point->getX()) <= a / 2) && (abs(point->getY()) <= a / 2) && ((pow((point->getX() - a / 2), 2) + pow(point->getY(), 2)) >= pow(b, 2)) && (point->getY() <= (point->getX() + a - c)) && ((pow((point->getX() + a / 2), 2) + pow((point->getY() + a / 2), 2)) >= pow(d, 2));
}
