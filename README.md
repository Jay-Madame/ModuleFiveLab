# Module Five Lab

## CSCII with Jonathon Baarsch

### Jewell Callahan

## Problem One
<br>
Write a program that reads in a number of color coordinates from a file and prints out a representation of those coordinates to the console in the form of a "picture."
<br>Use the Color and Picture class specifications from the <i>Module 3</i> programming exam (reproduced here). 
<br><b>However</b>, your new program needs to read the colors in from a file and handle the following exceptions: <br><br>
&nbsp; &nbsp; &nbsp; &nbsp;
    [x] FileNotFoundException - if the file holding the colors is not found. Print a message to the console explaining what happened and shut down the program <br>
 &nbsp; &nbsp; &nbsp; &nbsp; 
    [x] ColorFileFormatException - if the file format seems to be wrong, that is, if it cannot pull a color coordinate from the file. Print an appropiate message to the console and shut down the program <br>
&nbsp; &nbsp; &nbsp; &nbsp;
    [x] CoordinateOutOfRangeException - if the X or Y coordinate is negative. Log the error and do not create a color vector for that coordinate <br>
&nbsp; &nbsp; &nbsp; &nbsp;
    [x] ColorVectorOutOfRangeException - if the numbers in the Color vector are less than 0 or greater than 255.<br>
    &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] Log the error by printing out the message like: "Error! X: [coord] Y:[coord] Green value too low: min: 0, actual -56."<br>
    &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] Then, change the vector so that if the number was less than 0, bring it to 0, and if the number was greater than 255, bring it to 255.<br>
    &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] Color Vector file format: The Color vector file shoudl hold five integers on each line, separated by spaces: <br>
    &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        XCoord YCoord Red Green Blue <br>
<br>

<hr width="100%" size="2">

<br>

__Color__ 
<br>
Color should have three int instance data: <br>
[x] red
[x] green
[x] blue
<br>
&nbsp; &nbsp; &nbsp; &nbsp;
    [x] Color shoud have a constructor that creates a Color using those three parameters
    [x] Should have static Color constants:<br> 
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] RED(255, 0, 0)<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] YELLOW(255, 255, 0) <br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] BLUE(0, 0, 255)<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] GREEN(0, 255, 0)<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] PURPLE(150, 0, 255)<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] ORANGE(255, 150, 0)<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] BLACK(0, 0, 0)<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] WHITE(255, 255, 255)<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        [x] GRAY(150, 150, 150)<br>
&nbsp; &nbsp; &nbsp; &nbsp;
    [x] Color should override the << operator that will print out a capital lettter based on the highest value of the color member <br>
<br>

<hr width="100%" size="2">
<br> 

__Picture__
<br>
[x] Picture should hold a 2D vector of colors. <br>
[x] Should have a constructor that takes in a width and height and sets all the colors to white. <br>
[x] Also have a setPixel(x: int, y: int, c: Color): void function that sets the appropiate member of the 2D array to c. <br>
[x] Include the getHeight(): int and getWidth(): int functions that returns the two dimensions of your 2D vector <br>
[x] Ovverride the << operator in picture to display the picture by displaying each of the Colors in their appropiate location in the image <br>

<hr width="100%" size="2">

## Problem Two

[x] Modify StatTools from Module Three so it will take arrays of any integer or floating point values using **templates**. Demonstrate your solution in a main.cpp <br>

<hr width="100%" size="2">

## Problem Three

[x] Return back to PEMMDAS quizer, and use recursion to create a PEMMDAS quizzer that actually solves the problems.
