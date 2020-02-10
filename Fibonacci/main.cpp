#include <iostream>
#include <GreenCrud.h>


int main()
{


    GreenCrud p;{
        p.setDay(0);
        p.setNewCrud(0);
        p.setOldCrud(0);
        p.setFutureCrud(0);
        p.setFutureDays(0);



    }

    int oldCrud{0}, newCrud{0}, futureCrud{0}, day{0}, futureDays{0};


    std :: cout << "Enter how many pounds of crud: " << std :: endl;
    std :: cin >> newCrud;

    std :: cout << "Enter the day to see the amount of green crud: " << std :: endl;

    std :: cin >> futureDays;


    for (day = 0; day <= futureDays; day++)
    {
        if (day % 5 == 0){

            futureCrud = oldCrud + newCrud;
            newCrud = oldCrud;
            oldCrud = futureCrud;
            std :: cout << "Day : " << day << "\n "
                        << "The current amount of green crud is " << newCrud <<" pounds. \n "
                        << "The next amount is " << oldCrud << " pounds" << std :: endl ;
                }
        }

           if ((futureDays < 5)&&(futureCrud < 5)){
                 std :: cout << "It takes 5 days for the green crud to have babies. So there are still this amount :  "
                << newCrud << " in pounds." << std :: endl ;
               } else{

               std :: cout << "hold ud" ;
           }
return 0;

}











