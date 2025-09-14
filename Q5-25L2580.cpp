#include<iostream>
using namespace std;
int main() {
	int birth_date, birth_mnth, birth_yr, date, mnth, yr;
	int age_yrs, age_mnths, age_days;

	// Take birth date input
	cout << "Enter birth date (dd mm yyyy): ";
	cin >> birth_date;
	cin >> birth_mnth;
	cin >> birth_yr;

	// Take current date input
	cout << "Enter current date (dd mm yyyy):";
	cin >> date;
	cin >> mnth;
	cin >> yr;

	// Validate input dates
	if (birth_date < 1 || birth_date > 31 || birth_mnth < 1 || birth_mnth > 12 || date < 1 || date > 31 || mnth < 1 || mnth > 12 || yr < birth_yr)
		cout << "Invalid dates!";
	else
	{
		if (mnth == 2)
		{
			if ((yr % 400 == 0) || (yr % 4 == 0 && yr % 100 != 0))
			{
				if (date > 29)
					cout << "Invalid date.";
				else
				{
					if (mnth > birth_mnth)
					{
						age_yrs = yr - birth_yr;
						age_mnths = mnth - birth_mnth;

						// If current day is after or equal to birth day
						if (date >= birth_date)
						{
							age_days = date - birth_date;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}
						// If current day is before birth day
						else
						{
							age_days = 29 + (date - birth_date);
							age_mnths = age_mnths - 1;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}
					}
					// Case 2: current month is same as birth month
					else if (mnth == birth_mnth)
					{
						age_yrs = yr - birth_yr - 1;
						age_days = date - birth_date;

						// If current day is after or equal to birth day
						if (date >= birth_date)
						{
							age_yrs = yr - birth_yr;
							age_days = date - birth_date;
							cout << "Your age is " << age_yrs << " years " << age_days << " days";
						}
						// If current day is before birth day
						else
						{
							age_days = 29 + (date - birth_date);
							age_mnths = 11;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}
					}
					// Case 3: current month is less than birth month
					else
					{
						age_yrs = yr - birth_yr - 1;
						age_mnths = 12 - (birth_mnth - mnth);

						// If current day is after or equal to birth day
						if (date >= birth_date)
						{
							age_days = date - birth_date;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}
						// If current day is before birth day
						else
						{
							age_days = 29 + (date - birth_date);
							age_mnths = age_mnths - 1;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}

					}
				}
			}
			else
			{
				if (date > 28)
					cout << "Invalid date.";
				else
				{
					if (mnth > birth_mnth)
					{
						age_yrs = yr - birth_yr;
						age_mnths = mnth - birth_mnth;

						// If current day is after or equal to birth day
						if (date >= birth_date)
						{
							age_days = date - birth_date;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}
						// If current day is before birth day
						else
						{
							age_days = 28 + (date - birth_date);
							age_mnths = age_mnths - 1;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}
					}
					// Case 2: current month is same as birth month
					else if (mnth == birth_mnth)
					{
						age_yrs = yr - birth_yr - 1;
						age_days = date - birth_date;

						// If current day is after or equal to birth day
						if (date >= birth_date)
						{
							age_yrs = yr - birth_yr;
							age_days = date - birth_date;
							cout << "Your age is " << age_yrs << " years " << age_days << " days";
						}
						// If current day is before birth day
						else
						{
							age_days = 28 + (date - birth_date);
							age_mnths = 11;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}
					}
					// Case 3: current month is less than birth month
					else
					{
						age_yrs = yr - birth_yr - 1;
						age_mnths = 12 - (birth_mnth - mnth);

						// If current day is after or equal to birth day
						if (date >= birth_date)
						{
							age_days = date - birth_date;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}
						// If current day is before birth day
						else
						{
							age_days = 28 + (date - birth_date);
							age_mnths = age_mnths - 1;
							cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
						}

					}
				}
			}
		}
		// Case 1: current month is greater than birth month
		else if (mnth > birth_mnth)
		{
			age_yrs = yr - birth_yr;
			age_mnths = mnth - birth_mnth;

			// If current day is after or equal to birth day
			if (date >= birth_date)
			{
				age_days = date - birth_date;
				cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
			}
			// If current day is before birth day
			else
			{
				age_days = 30 + (date - birth_date);
				age_mnths = age_mnths - 1;
				cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
			}
		}
		// Case 2: current month is same as birth month
		else if (mnth == birth_mnth)
		{
			age_yrs = yr - birth_yr - 1;
			age_days = date - birth_date;

			// If current day is after or equal to birth day
			if (date >= birth_date)
			{
				age_yrs = yr - birth_yr;
				age_days = date - birth_date;
				cout << "Your age is " << age_yrs << " years " << age_days << " days";
			}
			// If current day is before birth day
			else
			{
				age_days = 30 + (date - birth_date);
				age_mnths = 11;
				cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
			}
		}
		// Case 3: current month is less than birth month
		else
		{
			age_yrs = yr - birth_yr - 1;
			age_mnths = 12 - (birth_mnth - mnth);

			// If current day is after or equal to birth day
			if (date >= birth_date)
			{
				age_days = date - birth_date;
				cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
			}
			// If current day is before birth day
			else
			{
				age_days = 30 + (date - birth_date);
				age_mnths = age_mnths - 1;
				cout << "Your age is " << age_yrs << " years " << age_mnths << " months " << age_days << " days";
			}

		}
	}
	return 0;
}


// Pseudo code

/*
START

DECLARE birth_date, birth_mnth, birth_yr, date, mnth, yr, age_yrs, age_mnths, age_days
Input Date of birth
Input Current date

IF dates are not valid
	Displays that dates are invalid
ELSE
  Check for feb and leap year
   Use the piece of code under below month cases accordingly w.r.t dates of feb
	IF month is greater than birth month
		SET age_yrs equals Difference in Current year and Birth year
		SET age_mnths equals Difference in Current month and birth month

		IF Date is greater than equal to Birth date
			SET age_days equals Difference in Date and birth date
			Display the Age
		ELSE
			SET age_days equals by subtracticting diffence in the two dates by Total days a month
			SET age_mnths equals by reducing 1 month
			Display the Age

	ELSE IF current month equals birth_months
		SET age_yrs equals by Reducing Difference in Current year and birth year by 1

		IF Date is greater than or equal to Birth Date
			SET age_yrs equals Difference in the two years
			SET age_days equals Difference in the two days
		ELSE
			SET age_days quals by subtracticting diffence in the two dates by Total days a month
			SET age_mnths equals 11
			Display the Age

	ELSE
		SET age_yrs equals by Reducing Difference in Current year and birth year by 1
		SET age_mnths equals by Subtracting by Difference between the two months by total months a year

		IF Date is greater than or equal to Birth Date
			SET age_days equals Difference in the two dates
			Display the Age

		ELSE
			SET age_days equals by subtracticting diffence in the two dates by Total days a month
			SET age_mnths equals reducing age_mnths by 1
			Display the Age

TERMINATE
*/
