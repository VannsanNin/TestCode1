ចាប់ផ្តើម

អនុគមន៍ Largest()
បង្ហាញ "Enter two numbers: "
បញ្ជូល num1, num2
ប្រសិនបើ num1 > num2 THEN
បង្ហាញ "The largest number is: ", num1
ផ្ទុយមកវិញប្រសិនបើ num2 > num1 THEN
បង្ហាញ "The largest number is: ", num2
ផ្ទុយមកវិញ
បង្ហាញ "Both numbers are equal."
បញ្ចប់លក្ខខណ្ឌ
បញ្ចប់អនុគមន៍

អនុគមន៍ PositiveNegative()
បង្ហាញ "Enter a number: "
បញ្ជូល num
ប្រសិនបើ num > 0 THEN
បង្ហាញ "The number is positive."
ផ្ទុយមកវិញប្រសិនបើ num < 0 THEN
បង្ហាញ "The number is negative."
ផ្ទុយមកវិញ
បង្ហាញ "The number is zero."
បញ្ចប់លក្ខខណ្ឌ
បញ្ចប់អនុគមន៍

អនុគមន៍ EvenOddNumbers()
បង្ហាញ "Enter a number: "
បញ្ជូល num
ប្រសិនបើ num MOD 2 == 0 THEN
បង្ហាញ "The number is even."
ផ្ទុយមកវិញ
បង្ហាញ "The number is odd."
បញ្ចប់លក្ខខណ្ឌ
បញ្ចប់អនុគមន៍

អនុគមន៍ evaluateScore()
បង្ហាញ "Enter the score: "
បញ្ជូល score
ប្រសិនបើ score >= 95 THEN
បង្ហាញ "Excellence"
ផ្ទុយមកវិញប្រសិនបើ score >= 85 THEN
បង្ហាញ "Very Good"
ផ្ទុយមកវិញប្រសិនបើ score >= 75 THEN
បង្ហាញ "Good"
ផ្ទុយមកវិញប្រសិនបើ score >= 60 THEN
បង្ហាញ "Fair"
ផ្ទុយមកវិញប្រសិនបើ score >= 50 THEN
បង្ហាញ "Passed"
ផ្ទុយមកវិញ
បង្ហាញ "Failed"
បញ្ចប់លក្ខខណ្ឌ
បញ្ចប់អនុគមន៍

MAIN PROGRAM
DO loop
បង្ហាញ "Select an option:"
បង្ហាញ "1. Calculate the largest of two numbers"
បង្ហាញ "2. Calculate positive or negative number"
បង្ហាញ "3. Calculate even or odd number"
បង្ហាញ "4. Enter the score and evaluate"
បង្ហាញ "5. Exit"
បង្ហាញ "Enter your choice: "
បញ្ជូល choice

    SWITCH choice
        CASE 1:
            CALL Largest()
        CASE 2:
            CALL PositiveNegative()
        CASE 3:
            CALL EvenOddNumbers()
        CASE 4:
            CALL evaluateScore()
        CASE 5:
            បង្ហាញ "Exiting the program."
        DEFAULT:
            បង្ហាញ "Invalid choice. Please try again."
    បញ្ចប់ SWITCH

WHILE choice != 5

បញ្ចប់ MAIN PROGRAM
STOP
