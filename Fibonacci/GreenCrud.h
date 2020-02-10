#ifndef GREENCRUD_H
#define GREENCRUD_H


class GreenCrud
{
public:
    GreenCrud();


    int oldCrud() const;
    void setOldCrud(int oldCrud);

    int newCrud() const;
    void setNewCrud(int newCrud);

    int futureCrud() const;
    void setFutureCrud(int futureCrud);

    int day() const;
    void setDay(int day);

    int futureDays() const;
    void setFutureDays(int futureDays);

private:
    int mOldCrud, mNewCrud, mFutureCrud, mDay, mFutureDays;
};



#endif // GREENCRUD_H
