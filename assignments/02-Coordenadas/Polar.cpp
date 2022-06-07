#include "Polar.hpp"

Polar::Polar(): r{0}, theta{0}
{}

Polar::Polar(double radio, double angulo) : r{radio}, theta{angulo}
{}

double Polar::getR()
{
    return r;
}

double Polar::getTheta()
{
    return theta;
}

Polar Polar::operator*(Polar p2)
{
    Polar pt;
    pt.r = r * p2.getR();
    pt.theta = theta + p2.getTheta();

    return pt;
}
Polar Polar::operator/(Polar p4)
{
    Polar pd;
    pd.r = r / p4.getR();
    pd.theta = theta - p4.getTheta();

    return pd;
}

std::ostream& operator<<(std::ostream& output, Polar p)
{
    output << "(" << p.getR() << ", " << p.getTheta() << ")\n";
    return output;
}
