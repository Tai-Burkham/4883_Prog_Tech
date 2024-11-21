class Solution:
    def maxMoves(self, kx: int, ky: int, positions: List[List[int]]) -> int:
        # This function calculates the shortest distance (in knight moves) from the 'start' position to each 'target' pawn position.
        def knight_moves(start, targets):
            # List of all possible knight moves.
            directions = [(2, 1), (2, -1), (-2, 1), (-2, -1), (1, 2), (1, -2), (-1, 2), (-1, -2)]
            # BFS queue initialized with the knight's starting position and 0 steps taken.
            queue = deque([(start[0], start[1], 0)])
            # Dictionary to store the number of moves needed to reach each target pawn.
            distances = {}
            # Set to keep track of visited positions to avoid cycles.
            visited = set([(start[0], start[1])])
            
            # BFS loop to explore all positions the knight can move to.
            while queue:
                x, y, steps = queue.popleft()
                # If the current position contains a pawn, record the number of moves taken to reach it.
                if (x, y) in targets:
                    distances[(x, y)] = steps
                # If all pawns are reached, stop searching.
                if len(distances) == len(targets):
                    break
                # Explore all 8 possible knight moves.
                for dx, dy in directions:
                    nx, ny = x + dx, y + dy
                    # Ensure the knight stays within the chessboard and hasn't visited the position already.
                    if 0 <= nx < 50 and 0 <= ny < 50 and (nx, ny) not in visited:
                        visited.add((nx, ny))
                        queue.append((nx, ny, steps + 1))
            # Return a dictionary with the number of moves required to reach each pawn.
            return distances
        
        # This is the core recursive minimax function for the game simulation.
        # pos_mask: bitmask to track which pawns have been captured.
        # knight_pos: current position of the knight.
        # turn: 0 for Alice's turn, 1 for Bob's turn.
        def minimax(pos_mask, knight_pos, turn):
            # Base case: all pawns have been captured.
            if pos_mask == (1 << len(pawns)) - 1:
                return 0
            
            # If this state has already been computed, return the stored result to avoid recomputation.
            if (pos_mask, knight_pos, turn) in memo:
                return memo[(pos_mask, knight_pos, turn)]
            
            # Alice (turn 0) tries to maximize the total moves, while Bob (turn 1) tries to minimize them.
            best_score = float('-inf') if turn == 0 else float('inf')
            
            # Try capturing each remaining pawn.
            for i, pawn_pos in enumerate(pawns):
                # Skip the pawn if it has already been captured (indicated by the bitmask).
                if pos_mask & (1 << i):
                    continue
                # Find the number of moves to capture this pawn.
                moves = distances[knight_pos].get(pawn_pos, float('inf'))
                if moves == float('inf'):
                    continue
                # Update the bitmask to indicate this pawn has been captured.
                new_mask = pos_mask | (1 << i)
                # Recursively calculate the total moves for the next state.
                next_score = moves + minimax(new_mask, pawn_pos, 1 - turn)
                
                # Alice maximizes the moves, Bob minimizes the moves.
                if turn == 0:
                    best_score = max(best_score, next_score)
                else:
                    best_score = min(best_score, next_score)
            
            # Store the result of the current state in memoization table.
            memo[(pos_mask, knight_pos, turn)] = best_score
            return best_score
        
        # List of all pawns' positions.
        pawns = [(x, y) for x, y in positions]
        # Combine the knight's initial position with the pawn positions for distance calculation.
        all_positions = [(kx, ky)] + pawns
        
        # Precompute the shortest distance between all pairs of positions (knight to pawns).
        distances = {}
        for pos in all_positions:
            distances[pos] = knight_moves(pos, pawns)
        
        # Dictionary to store the results of subproblems (memoization).
        memo = {}
        # Start the game with Alice's turn (turn 0) and return the maximum moves Alice can achieve.
        return minimax(0, (kx, ky), 0)
