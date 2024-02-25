import random


player_1 = []
player_2 = []
result = []
list_choice = ["steal","split"]
def choseP2(count):
    if count == 0:
       return list_choice[0] 
    if count > 0:
        if player_1[count - 1] == "steal":
            return list_choice[0]
    return list_choice[1]


def choseP1(index):
    return list_choice[0]

count = 2000
index = 0
while index < count:
    player_1.append(choseP1(index))
    player_2.append(choseP2(index))
    index = index + 1


for i in range(0,len(player_1)):
    if(player_1[i] == "split" and player_2[i] == "split"):
        result.append("both")
    elif(player_1[i] == "split" and player_2[i] == "steal"):
        result.append("p2")
    elif(player_1[i] == "steal" and player_2[i] == "split"):
        result.append("p1")
    else:
        result.append("lose")

# if both coprate both will geat 3 points
# if one defects and one coprate defect one will get 5 points
# if both defects will get 1 coins


player_1_points = 0
player_2_points = 0

for i in result:
    if i == "p1":
        player_1_points = player_1_points + 5
    elif i == "p2":
        player_2_points = player_2_points + 5
    elif i == "both":
        player_1_points = player_1_points + 3
        player_2_points = player_2_points + 3
    else:
        player_1_points = player_1_points + 1
        player_2_points = player_2_points + 1
print(result)
if player_1_points > player_2_points:
    print(f"player 1 win with points -> {player_1_points} and playe 2 points -> {player_2_points}")
else:
    print(f"player 2 win with points -> {player_2_points} and playe 1 points -> {player_1_points}")