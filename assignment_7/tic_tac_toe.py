def print_board(board):
    for i in  range(3):
        for j in range(3):
            print(board[i][j], end=" ")
        print("\n")

def winner_check(board):
    #row-check
    for i in range(3):
        if board[i][0]=='-' or \
            board[i][1]=='-' or \
            board[i][2]=='-':
            continue
        elif board[i][0]==board[i][1] and board[i][1]==board[i][2]:
            return True
        
    #column-check
    for i in range(3):
        if board[0][i]=='-' or \
            board[1][i]=='-' or \
            board[2][i]=='-':
            continue
        elif board[0][i]==board[1][i] and board[1][i]==board[2][i]:
            return True
        
    #diag check
    if board[0][0]!='-' or \
        board[1][1]!='-' or \
        board[2][2]!='-':
        if board[0][0] == board[1][1] and \
            board[1][1] == board[2][2]:
            return True

    #minor-diag check
    if board[0][2]!='-' or \
        board[1][1]!='-' or \
        board[2][0]!='-':
        if board[0][2] == board[1][1] and \
            board[1][1] == board[2][0]:
            return True
        
        
        
def draw_check(board):
    counter = 0
    for i in range(3):
        for j in range(3):
            if board[i][j]!='-':
                counter += 1

    if counter == 9:
        return True 
    else:
        return False 

def within_bound(x, y):
    if 1<=x<=3 and 1<=y<=3:
        return True
    return False

def is_validmove(board, x, y):
    if board[x-1][y-1]!='-':
        return False
    else:
        return True 

def main():
    board = [['-','-','-'],
             ['-','-','-'],
             ['-','-','-']]
    
    print("Welcome to tic-tac-toe ...")
    print_board(board=board)

    player1 = 'x'
    player2 = 'o'
    is_winner = False

    while True:
        x,y = map(int, input("Player1 move: ").split())

        while True:
            if not within_bound(x, y):
                print("Move out of bound. Try again.")
                x, y = map(int, input("Player1 move: ").split())

            if not is_validmove(board, x, y):
                print("Position already taken. Try another move.")
                x, y = map(int, input("Player1 move: ").split())
            
            break
        board[x-1][y-1] = player1
        print_board(board=board)
        is_winner = winner_check(board)
        if is_winner:
            print("player1 wins.")
            break
        elif draw_check(board):
            print("Game drawn.")
            break

        x,y = map(int, input("Player2 move: ").split())

        while True:
            if not within_bound(x, y):
                print("Move out of bound. Try again.")
                x, y = map(int, input("Player2 move: ").split())

            if not is_validmove(board, x, y):
                print("Position already taken. Try another move.")
                x, y = map(int, input("Player2 move: ").split())
            
            break
        board[x-1][y-1] = player2
        print_board(board=board)
        is_winner = winner_check(board)
        if is_winner:
            print("player2 wins.")
            break
        elif draw_check(board):
            print("Game drawn.")
            break

if __name__ == '__main__':
    main()