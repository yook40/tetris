struct Piece {
  int x[2];
  int y[2];
  int z[2];
  Piece(int, int, int, int, int, int);
  virtual void initialization(int (&)[][10]) = 0;
  void rotation(int (&)[][10]);
};

void Piece::rotation(int (&board)[][10]) {
  int temp = x[0];
  x[0] = -x[1];
  x[1] = -temp;
  temp = y[0];
  y[0] = -y[1];
  y[1] = -temp;
  temp = z[0];
  z[0] = -z[1];
  z[1] = -temp;
}

Piece::Piece(int x1, int x2, int y1, int y2, int z1, int z2):
  x{x1, x2}, y{y1, y2}, z{z1, z2} {}

struct O_Piece: public Piece {
  O_Piece();
  void initialization(int (&board)[][10]) override;
};

O_Piece::O_Piece(): Piece{-1, -1, -1, 0, 0, -1} {}

void O_Piece::initialization(int (&board)[][10]) {  //   o o
  board[0][5] = 1;                                           //   o 1
  board[0][4] = 1;                         
  board[1][5] = 1;
  board[1][4] = 1;
}

struct I_Piece: public Piece {
  I_Piece();
  void initialization(int (&board)[][10]) override;
};

I_Piece::I_Piece(): Piece{0, -1, 0, 1, 0, 2} {}

void I_Piece::initialization(int (&board)[][10]) {
  board[2][3] = 1;
  board[2][4] = 1;
  board[2][5] = 1;
  board[2][6] = 1;
}

struct S_Piece: public Piece {
  S_Piece();
  void initialization(int (&board)[][10]) override;
};

S_Piece::S_Piece(): Piece{-1, 0, -1, 1, 0, -1} {}

void S_Piece::initialization(int (&board)[][10]) {
  board[1][6] = 1;
  board[1][5] = 1;
  board[2][5] = 1;
  board[2][4] = 1;
}

struct Z_Piece: public Piece {
  Z_Piece();
  void initialization(int (&board)[][10]) override;
};

Z_Piece::Z_Piece(): Piece{-1, 0, -1, -1, 0, 1} {}

void Z_Piece::initialization(int (&board)[][10]) {
  board[1][4] = 1;
  board[1][5] = 1;
  board[2][5] = 1;
  board[2][6] = 1;
}

struct L_Piece: public Piece {
  L_Piece();
  void initialization(int (&board)[][10]) override;
};

L_Piece::L_Piece(): Piece{-1, 1, 0, -1, 0, 1} {}

void L_Piece::initialization(int (&board)[][10]) {
  board[1][6] = 1;   //         |
  board[2][6] = 1;   //     _ _ _
  board[2][5] = 1;   //
  board[2][4] = 1;
}

struct J_Piece: public Piece {
  J_Piece();
  void initialization(int (&board)[][10]) override;
};

J_Piece::J_Piece(): Piece{-1, -1, 0, -1, 0, 1} {}

void J_Piece::initialization(int (&board)[][10]) {
  board[1][4] = 1;   //     |
  board[2][6] = 1;   //     _ _ _
  board[2][5] = 1;   //
  board[2][4] = 1;
}

struct T_Piece: public Piece {
  T_Piece();
  void initialization(int (&board)[][10]) override;
};

T_Piece::T_Piece(): Piece{-1, 0, 0, -1, 0, 1} {}

void T_Piece::initialization(int (&board)[][10]) {
  board[1][5] = 1;   //       |
  board[2][6] = 1;   //     _ _ _
  board[2][5] = 1;   //
  board[2][4] = 1;
}
