# tetris
Project Description.
This is a classic game.


User Function:
1. Able to generate random shape (when the previous one has fallen 'on the ground')
2. Able to let user rotate the shape
3. Able to drop the shape constantly based a unit of time
4. Able to delete the a line of bricks when it is fully occupied
5. Able to display after a piece has been dropped
6. Able to check if game over

Structure:
1. Board (2D Array)
2. Piece (4-unit-size shape)
    1. direction
    2. center
    3. shape_type
3. Control the game play (main function)
    1. display
    2. update
        1. update time
        2. update piece status including direction and center
        3. update the bricks 'on the ground'
    3. generate random shape