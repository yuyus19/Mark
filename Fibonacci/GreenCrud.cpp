#include "GreenCrud.h"

GreenCrud::GreenCrud()
{

}

int GreenCrud::oldCrud() const
{
    return mOldCrud;
}

void GreenCrud::setOldCrud(int oldCrud)
{
    mOldCrud = oldCrud;
}

int GreenCrud::newCrud() const
{
    return mNewCrud;
}

void GreenCrud::setNewCrud(int newCrud)
{
    mNewCrud = newCrud;
}

int GreenCrud::futureCrud() const
{
    return mFutureCrud;
}

void GreenCrud::setFutureCrud(int futureCrud)
{
    mFutureCrud = futureCrud;
}

int GreenCrud::day() const
{
    return mDay;
}

void GreenCrud::setDay(int day)
{
    mDay = day;
}

int GreenCrud::futureDays() const
{
    return mFutureDays;
}

void GreenCrud::setFutureDays(int futureDays)
{
    mFutureDays = futureDays;
}


