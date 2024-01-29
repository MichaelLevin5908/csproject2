#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
//State input
string state;
    cout<< "State Name:"<<endl;
    cin>>state;
if (!cin) // check for extraction failure
{
	cin.clear(); // clear out the dirty bit
  cin.ignore(10000, '\n'); // ignore the bad input
}
else {
}
    
//Amount input
double amount = 0;
cout<< "Purchase amount:"<< endl;   
    cin>>amount;
    if (!cin) // check for extraction failure
{
	cin.clear(); // clear out the dirty bit
  cin.ignore(10000, '\n'); // ignore the bad input
}
else {
}
    
//Month input
string month;
cout<< "Provide the month:"<< endl;
cin>>month;
 if (!cin) // check for extraction failure
{
	cin.clear(); // clear out the dirty bit
  cin.ignore(10000, '\n'); // ignore the bad input
}
else {
}

//day input
    int day = 0;
    cout<< "Provide the day:"<< endl;
    cin >> day;
 if (!cin) // check for extraction failure
{
	cin.clear(); // clear out the dirty bit
  cin.ignore(10000, '\n'); // ignore the bad input
}
else {
}
//year input
    int year = 0;
    cout<< "Provide the year:"<< endl;
    cin >> year;
 if (!cin) // check for extraction failure
{
	cin.clear(); // clear out the dirty bit
  cin.ignore(10000, '\n'); // ignore the bad input
}
else {
}   
    //State numbers
    double stateTaxRate, avgLocalTaxRate, levy;
    if (state == "Alabama") {
        stateTaxRate = 4.00;
        avgLocalTaxRate = 5.14;
        levy = 0.00;
    } else if (state == "Alaska") {
        stateTaxRate = 0.00;
        avgLocalTaxRate = 1.43;
        levy = 0.00;
    } else if (state == "Arizona") {
        stateTaxRate = 5.60;
        avgLocalTaxRate = 2.77;
        levy = 0.00;
    } else if (state == "Arkansas") {
        stateTaxRate = 6.50;
        avgLocalTaxRate = 2.93;
        levy = 0.00;
    } else if (state == "California") {
        stateTaxRate = 7.25;
        avgLocalTaxRate = 1.31;
        levy = 1.00;
    } else if (state == "colorado") {
        stateTaxRate = 2.90;
        avgLocalTaxRate = 4.73;
        levy = 0.00;
    } else if (state == "Connecticut") {
        stateTaxRate = 6.35;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Delaware") {
        stateTaxRate = 0.00;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Florida") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 1.05;
        levy = 0.00;
    } else if (state == "Georgia") {
        stateTaxRate = 4.00;
        avgLocalTaxRate = 3.29;
        levy = 0.00;
    } else if (state == "Hawaii") {
        stateTaxRate = 4.00;
        avgLocalTaxRate = 0.41;
        levy = 0.00;
    } else if (state == "Idaho") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 0.03;
        levy = 0.00;
    } else if (state == "Illinois") {
        stateTaxRate = 6.25;
        avgLocalTaxRate = 2.49;
        levy = 0.00;
    } else if (state == "Indiana") {
        stateTaxRate = 7.00;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Iowa") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 0.82;
        levy = 0.00;
    } else if (state == "Kansas") {
        stateTaxRate = 6.50;
        avgLocalTaxRate = 2.17;
        levy = 0.00;
    } else if (state == "Kentucky") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Louisiana") {
        stateTaxRate = 4.45;
        avgLocalTaxRate = 5.00;
        levy = 0.00;
    } else if (state == "Maine") {
        stateTaxRate = 5.50;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Maryland") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Massachusetts") {
        stateTaxRate = 6.25;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Michigan") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Minnesota") {
        stateTaxRate = 6.88;
        avgLocalTaxRate = 0.55;
        levy = 0.00;
    } else if (state == "Mississippi") {
        stateTaxRate = 7.00;
        avgLocalTaxRate = 0.07;
        levy = 0.00;
    } else if (state == "Missouri") {
        stateTaxRate = 4.23;
        avgLocalTaxRate = 3.90;
        levy = 0.00;
    } else if (state == "Montana") {
        stateTaxRate = 0.00;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Nebraska") {
        stateTaxRate = 5.50;
        avgLocalTaxRate = 1.35;
        levy = 0.00;
    } else if (state == "Nevada") {
        stateTaxRate = 6.85;
        avgLocalTaxRate = 1.29;
        levy = 0.00;
    } else if (state == "New Hampshire") {
        stateTaxRate = 0.00;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "New Jersey") {
        stateTaxRate = 6.63;
        avgLocalTaxRate = -0.03;
        levy = 0.00;
    } else if (state == "New Mexico") {
        stateTaxRate = 5.13;
        avgLocalTaxRate = 2.69;
        levy = 0.00;
    } else if (state == "New York") {
        stateTaxRate = 4.00;
        avgLocalTaxRate = 4.49;
        levy = 0.00;
    } else if (state == "North Carolina") {
        stateTaxRate = 4.75;
        avgLocalTaxRate = 2.22;
        levy = 0.00;
    } else if (state == "North Dakota") {
        stateTaxRate = 5.00;
        avgLocalTaxRate = 1.85;
        levy = 0.00;
    } else if (state == "Ohio") {
        stateTaxRate = 5.75;
        avgLocalTaxRate = 1.42;
        levy = 0.00;
    } else if (state == "Oklahoma") {
        stateTaxRate = 4.50;
        avgLocalTaxRate = 4.42;
        levy = 0.00;
    } else if (state == "Oregon") {
        stateTaxRate = 0.00;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "Pennsylvania") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 0.34;
        levy = 0.00;
    } else if (state == "Rhode Island") {
        stateTaxRate = 7.00;
        avgLocalTaxRate = 0.00;
        levy = 0.00;
    } else if (state == "South Carolina") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 1.43;
        levy = 0.00;
    } else if (state == "South Dakota") {
        stateTaxRate = 4.50;
        avgLocalTaxRate = 1.90;
        levy = 0.00;
    } else if (state == "Tennessee") {
        stateTaxRate = 7.00;
        avgLocalTaxRate = 2.47;
        levy = 0.00;
    } else if (state == "Texas") {
        stateTaxRate = 6.25;
        avgLocalTaxRate = 1.94;
        levy = 0.00;
    } else if (state == "Utah") {
        stateTaxRate = 5.95;
        avgLocalTaxRate = 0.99;
        levy = 1.25;
    } else if (state == "Vermont") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 0.18;
        levy = 0.00;
    } else if (state == "Virginia") {
        stateTaxRate = 5.30;
        avgLocalTaxRate = 0.35;
        levy = 1.00;
    } else if (state == "Washington") {
        stateTaxRate = 6.50;
        avgLocalTaxRate = 2.67;
        levy = 0.00;
    } else if (state == "West Virginia") {
        stateTaxRate = 6.00;
        avgLocalTaxRate = 0.39;
        levy = 0.00;
    } else if (state == "Wisconsin") {
        stateTaxRate = 5.00;
        avgLocalTaxRate = 0.44;
        levy = 0.00;
    } else if (state == "Wyoming") {
        stateTaxRate = 4.00;
        avgLocalTaxRate = 1.36;
        levy = 0.00;
    }
     else {
        cout << "Invalid state!" << std::endl;
        return -1;
    }
//invalid amount
    if(amount<=0){
        cout<<"Invalid amount!"<<endl;
        return -1;}

//invalid month
if (month == "January") {
    // Code for January
} else if (month == "February") {
    // Code for February
} else if (month == "March") {
    // Code for March
} else if (month == "April") {
    // Code for April
} else if (month == "May") {
    // Code for May
} else if (month == "June") {
    // Code for June
} else if (month == "July") {
    // Code for July
} else if (month == "August") {
    // Code for August
} else if (month == "September") {
    // Code for September
} else if (month == "October") {
    // Code for October
} else if (month == "November") {
    // Code for November
} else if (month == "December") {
    // Code for December
} else {
    cout << "Invalid month!" << endl;
    return -1;
}

//invalid day
    if(day>31 || day<1){
        cout<<"Invalid day!"<<endl;
        return -1;}
//invalid year
    if(year > 2025 || year < 1){
        cout<<"Invalid year!"<<endl;
        return -1;}

    double total = amount;
    //exceptions for tax free days 
    if((state == "South Carolina" || state == "Nevada" || state == "Texas" || state == "Ohio"|| state == "West Virginia") && month == "August" && day>=5 && day<=7){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else if(state == "Alabama" && month == "July" && day>=15 && day<=17){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else if(state == "Arkansas" && month == "August" && day>=6 && day<=7){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else if(state == "Connecticut" && month == "August" && day>=21 && day<=27){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else if(state == "Iowa" && month == "August" && day>=5 && day<=6){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else if(state == "Maryland" && month == "August" && day>=14 && day<=20){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else if(state == "Massachusetts" && month == "August" && day>=14 && day<=15){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else if(state == "Missouri" && month == "April" && day>=19 && day<=25){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else if(state == "Oklahoma" && month == "August" && day>=6 && day<=8){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else if(state == "Tennessee" && month == "July" && day>=29 && day<=31){
        cout<<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
        return 0;}
    else{
    total = amount * (1 + stateTaxRate / 100.0 + avgLocalTaxRate / 100.0 + levy / 100.0);
    cout <<"Please pay a total of $"<< fixed << setprecision(2) << total <<endl;
    return 0;}
}
