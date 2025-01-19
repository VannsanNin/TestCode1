START

FUNCTION Largest()
SHOW "Enter two numbers: "
INPUT num1, num2
IF num1 > num2 THEN
PRINT "The largest number is: ", num1
ELSE IF num2 > num1 THEN
PRINT "The largest number is: ", num2
ELSE
PRINT "Both numbers are equal."
ENDIF
END FUNCTION

FUNCTION PositiveNegative()
SHOW "Enter a number: "
INPUT num
IF num > 0 THEN
PRINT "The number is positive."
ELSE IF num < 0 THEN
PRINT "The number is negative."
ELSE
PRINT "The number is zero."
ENDIF
END FUNCTION

FUNCTION EvenOddNumbers()
SHOW "Enter a number: "
INPUT num
IF num MOD 2 == 0 THEN
PRINT "The number is even."
ELSE
PRINT "The number is odd."
ENDIF
END FUNCTION

FUNCTION evaluateScore()
SHOW "Enter the score: "
INPUT score
IF score >= 95 THEN
PRINT "Excellence"
ELSE IF score >= 85 THEN
PRINT "Very Good"
ELSE IF score >= 75 THEN
PRINT "Good"
ELSE IF score >= 60 THEN
PRINT "Fair"
ELSE IF score >= 50 THEN
PRINT "Passed"
ELSE
PRINT "Failed"
ENDIF
END FUNCTION

MAIN PROGRAM
DO
SHOW "Select an option:"
SHOW "1. Calculate the largest of two numbers"
SHOW "2. Calculate positive or negative number"
SHOW "3. Calculate even or odd number"
SHOW "4. Enter the score and evaluate"
SHOW "5. Exit"
SHOW "Enter your choice: "
INPUT choice

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
            PRINT "Exiting the program."
        DEFAULT:
            PRINT "Invalid choice. Please try again."
    END SWITCH

WHILE choice != 5

END MAIN PROGRAM
STOP
