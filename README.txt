Program Overview : Modeling Water Runnoff
  - this program takes in data in groups of 3 doubles
  - each group represents the x and y coordinate and then the height of the water level in a stream
  - A data text file with groups of these points is read in to find/calculate:
     1) The X and Y coordinate in the stream with the highest water level
     2) The average water level of the stream
  - The result of these calculations when reaching the end of the data file/stream is printed to the console

Running the Program:
  - Open a terminal
  - Use cd to get into the top directory of "coms327P1"
  - Get a text file containing a stream of 3-tuples which are 3 double floating point numbers for x coordinate, y coordinate, and water level
  - Run "make" in the terminal to set up the executable
  - Run the Executable in the terminal, use piping to put data from the text file as input
    - EX: ".\pointcloud.exe < data.txt"
