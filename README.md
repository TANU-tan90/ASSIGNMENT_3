This game demonstrates how a complete terminal-based game can be built using only basic C programming concepts, making it perfect for beginners.
Each board position is stored as a separate variable (char a, b, c ...) instead of arrays, and all logic is handled with if-else conditions and loops.

In addition to simplicity, this version includes beautiful color output, making the game more engaging and fun to play directly in the terminal.

* How the Game Works :-

# The game uses 9 character variables, each representing a cell on the 3×3 Tic-Tac-Toe board.

# At the start, each cell contains its position number (1–9).

# Player X always makes the first move, followed by Player O.

# After each move:

1) The board is updated.

2) The game checks if the current player has won.

3) If not, the turn switches to the other player.

4) The game continues until someone wins or the board is full.

# Color codes are used to print:

1) X in Red

2) O in Yellow

3) Numbers in Black

* Game Rules :-
  
1. Turns

# Player X goes first.

# Players alternate turns.

2. Valid Moves

# The chosen number is between 1 and 9

# The corresponding cell is not already taken

3. Win Conditions  (A player wins if they place 3 marks in any of these:)

# Horizontal Lines

1–2–3

4–5–6

7–8–9

# Vertical Lines

1–4–7

2–5–8

3–6–9

# Diagonals

1–5–9

3–5–7

The program checks all these using simple if-else statements.

4. Draw Condition

# If all 9 cells are filled and no player has won, the game ends in a Tie.

5. No Undo

# Once a move is accepted, it cannot be undone.

* Features :-
  
1. Colorful Output - This makes the board easy to read and visually attractive.

2. Beginner-Friendly - Only simple loops and if-else logic. Perfect for students learning the basics of C.

3. Error Handling - Rejects illegal moves. Prevents overwriting occupied cells. Prompts the user again for valid input.

4. Clean Terminal UI - The board is neatly arranged using pipes and dashes.

5. Works Everywhere - Windows Terminal, Linux terminal, macOS Terminal, VS Code integrated terminal.

* Color System :-

This game uses ANSI escape codes to add color to the terminal output:

Color	Code	Used For -
Red       -->  \x1b[31m	   -->   Player X
Yellow    -->  \x1b[33m	   -->   Player O
Black     -->  \x1b[30m	   -->   Empty board numbers
Reset     -->  \x1b[0m	   -->   Return to normal color

So,this is all I wanted to add. Give it a try you will definitely enjoy!!!
