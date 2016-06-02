#ifndef XNEURON_H
#define XNEURON_H

/*#include "xneuron_global.h"*/
#include <QList>

class /*XNEURONSHARED_EXPORT*/ XNeuron
{

public:
    XNeuron();

    QList<XNeuron> mNextNeuron;

    double outputReal() const;
    void setOutputReal(double outputReal);

    double outputRequired() const;
    void setOutputRequired(double outputRequired);

    QList<double> input() const;
    void setInput(bool A,bool B);
    void setInput(const QList<bool> &input);
    void setInput(const QList<double> &input);

    void initWeight(const QList<auto> &input);
    void clearWeight(const QList<auto> &input);

    QList<double> weight() const;
    void setWeight(double A,double B);
    void setWeight(const QList<double> &weight);

private:
    QList<double> mInput;
    double mOutputReal;
    double mOutputRequired;
    QList<double> mWeight;

};

#endif // XNEURON_H
