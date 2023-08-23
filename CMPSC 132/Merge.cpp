#include <iostream>				// needed for console input and output
#include <iomanip>				// needed to format output
#include <fstream>				// needed for file input

using namespace std;			// std namespace contains many definitions used by program

const int MAX = 10;				// maximum size of two arrays

int main()
{
	// Define variables used in main function
	int a[MAX],					// first array of MAX integers
		b[MAX],					// second array of MAX integers
		c[2 * MAX],				// merged array 
		n,						// actual number of values in array c
		i, j, k;				// array indices


	// Open text file for input	
	ifstream infile;
	infile.open("data.txt");

	// End program if input file is not found; otherwise GIGO
	if (!infile)
	{
		cerr << "File not found.\n";
		system("pause");
		exit(1);
	}

	// Read input data from file and fill two parallel arrays with MAX numbers
	cout << "Here are the original arrays:\n";
	for (i = 0; i < MAX; i++)
	{
		infile >> a[i] >> b[i];									// input comes from text file
		cout << setw(10) << a[i] << setw(10) << b[i] << endl;	// output formatted in column width of 10 
	}

	// Initialize all indices to 0
	i = 0;
	j = 0;
	k = 0;

	// Continue looping until you move all elements from one array into merged array
	while (i < MAX && j < MAX)
	{
		// If element is a is less than element in b, move it to c
		if (a[i] < b[j])			
		{
			// ADD CODE HERE to assign a[i] to c[k] and increment i and k
			c[k] = a[i];
			i++;
			k++;
								
		}
		// Element in b is less than element in a so move it to c
		else if (b[j] < a[i])
		{
			// ADD CODE HERE to assign b[j] to c[k] and increment j and k
			c[k] = b[j];
			j++;
			k++;
		}
		// They are the same 
		else
		{
			// ADD CODE HERE to assign b[j] to c[k] and increment i, j and k
			c[k] = b[j];
			i++;
			j++;
			k++;
		}

	}	// bottom of while loop


	// Got to the end of one array so determine which one and copy the rest of the elements from the other array to c
	if (i < MAX)
	{
		while (i < MAX)
		{
			// ADD CODE HERE to copy the rest of a to c
			c[k] = a[i];
			i++;
			k++;
		}
	}
	else
	{
		while (j < MAX)
		{
			// ADD CODE HERE to copy the rest of b to c
			c[k] = b[j];
			j++;
			k++;

		}
	}


	// Display the merged list
	cout << "Here is the merged array:\n";
	// ADD CODE HERE to display the contents of c
	for (n = 0; n < k; n++) {
		cout << c[n];
		cout << "\n";

	}

	system("pause");
	return 0;
}