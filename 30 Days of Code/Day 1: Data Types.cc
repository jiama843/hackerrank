    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    cin >> i2;
    cin >> d2;
    getline(cin, s2);
    getline(cin, s2);
    
    // Print the sum of both integer variables on a new line.
    cout << (i2 + i) << endl;    

    // Print the sum of the double variables on a new line.
    double d_sum = d2 + d;
    cout << setprecision(2) << d_sum << endl;    
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << s2 << endl;    
