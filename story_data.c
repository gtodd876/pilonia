#include <stdbool.h>

typedef struct {
    const char *description;
    const char *choice_texts[3];
    int next_nodes[3];
    bool is_ending;
} StoryNode;

int STORY_SIZE = 40;

StoryNode story[] = {
    [0] = {.description =
               "You have woken up in a strange yet charming land! You look "
               "around a notice three interesting objects.\n",
           .is_ending = false,
           .choice_texts = {"Grab the mirror\n", "Put on the necklace\n",
                            "Grab the plate with the brownie on it\n"},
           .next_nodes = {1, 2, 3}},
    [1] = {.description =
               "As you look into the mirror you recognize yourself but "
               "something is very strange. You have what looks like a unicorn "
               "horn protruding from your forehead!\n",
           .is_ending = false,
           .choice_texts = {"Touch the horn with your hands\n",
                            "Shake your head back and forth\n",
                            "Poke your horn into the ground\n"},
           .next_nodes = {4, 5, 6}},
    [2] = {.description =
               "You hook the necklace around your neck. A soft glow emits from "
               "the necklace and you start to slowly float above the ground. "
               "You've gained the ability to fly!\n",
           .is_ending = false,
           .choice_texts = {"Fly towards the clouds\n",
                            "Fly towards the town\n",
                            "Fly towards the mountains\n"},
           .next_nodes = {7, 8, 9}},
    [3] = {.description =
               "You bite into the brownie and it's delicious! You've never had "
               "a brownie this good, but wait, you start to feel strange. You "
               "fall to the ground and realize your arms have turned into legs "
               "and hooves. You have become a baby unicorn!\n",
           .is_ending = false,
           .choice_texts = {"Gallop towards the forest\n",
                            "Gallop towards the lake\n",
                            "Gallop towards the mountains\n"},
           .next_nodes = {10, 11, 12}},
    [4] = {.description =
               "As you touch the horn with you hands. Your hands being to glow "
               "bright. You stretch your arm out and shoot a beam of light "
               "from your hand! Maybe this could be useful in the future?\n",
           .is_ending = false,
           .choice_texts = {"Walk towards the town to find some answers\n",
                            "Walk towards the mountains to find answers\n",
                            "Walk towards the lake to find some answers\n"},
           .next_nodes = {13, 14, 15}},
    [5] = {.description = "As you shake your head back and forth. Sparkles "
                          "shoot out from the horn in all directions. I wonder "
                          "if they will help me later?\n",
           .is_ending = false,
           .choice_texts = {"Walk towards the town to find some answers\n",
                            "Walk towards the mountains to find answers\n",
                            "Walk towards the lake to find some answers\n"},
           .next_nodes = {16, 17, 18}},
    [6] = {.description =
               "You poke your horn into the ground and your horn is "
               "immediately pushed back out. A furry little creature called a "
               "Poplament yells, 'Hey pick on somebody your own size and "
               "disappears back into the hole.' \n",
           .is_ending = false,
           .choice_texts =
               {"Peek into the hole in the ground\n",
                "Poke another hole in the ground\n",
                "Leave the Poplament alone and walk away from the hole\n"},
           .next_nodes = {19, 20, 21}},
    [7] = {.description =
               "You fly towards and through the fluffy clouds and as you fly "
               "above the clouds you meet a group of magical birds.\n",
           .is_ending = false,
           .choice_texts = {"Talk with the colorful parrot-like bird wearing "
                            "an interesting looking hat\n",
                            "Talk with the baby bird playing with a toy\n",
                            "Talk with the pink feathering Mom bird\n"},
           .next_nodes = {22, 23, 24}},
    [8] = {.description =
               "You fly towards the town you see off in the distance and it's "
               "doesn't take long to reach your destination.\n",
           .is_ending = false,
           .choice_texts = {"Land at the first house you see",
                            "Land in the center of the village",
                            "Land on the roof of the tallest building"},
           .next_nodes = {25, 26, 27}},
    [9] = {.description = "You fly towards the mountains and it's doesn't take "
                          "long at all to reach your destination.\n",
           .is_ending = false,
           .choice_texts =
               {"Land at the top of the mountain to survey the lands",
                "Land at the opening of a cave halfway up the mountain",
                "Land at the base of the mountain"},
           .next_nodes = {28, 29, 30}},
    [10] = {.description =
                "You gallop through the thick forest for awhile and then the "
                "thick forest opens up and you see a town\n",
            .is_ending = false,
            .choice_texts = {"Gallop up to the first hours you see\n",
                             "Gallop towards the center of town\n",
                             "jump into the fountain and splash\n"},
            .next_nodes = {31, 32, 33}},
    [11] = {.description = "You gallop towards a lake and once you get to the "
                           "water, an axolotl emerges and introduces himself. "
                           "'Hello my name is Addy!'\n",
            .is_ending = false,
            .choice_texts =
                {"Explain to Addy what has happened and how you can turn back "
                 "into a human\n",
                 "Ask Addy how he can talk\n",
                 "Run away from the talking axolotl while screaming\n"},
            .next_nodes = {34, 35, 36}},
    [12] =
        {.description = "You gallop towards the mountains and meet a talking "
                        "snow leopard. He introduces himself, 'Hello my name "
                        "is Mr. Leo Pard. What is your name?'\n",
         .is_ending = false,
         .choice_texts =
             {"You politely ask Mr. Pard how you can turn back into a human\n",
              "Ask Leo how he can talk\n",
              "You gallop away as fast as you can while screaming high pitched "
              "baby unicorn squeals\n"},
         .next_nodes = {37, 38, 39}},
    [13] =
        {.description =
             "The village has many buildings and seems very lively.\n"
             "There are many different living things walking around and "
             "talking \n"
             "but they are unlike any humans or creatures you've ever seen\n",
         .is_ending = false,
         .choice_texts = {"Stop at the first house you see\n",
                          "Head towards the center of the village\n",
                          "Climb up the side of the tallest building\n"},
         .next_nodes = {25, 26, 27}},
    [14] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [15] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [16] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [17] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [18] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [19] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [20] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [21] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [22] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [23] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [24] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [25] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [26] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [27] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [28] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [29] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [30] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [31] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [32] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [33] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [34] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [35] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [36] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [37] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [38] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [39] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [40] = {.description =
                "This story is a work in progress. To be continued.\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},

};
