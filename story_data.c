#include <stdbool.h>

typedef struct {
  const char *description;
  const char *choice_texts[3];
  int next_nodes[3];
  bool is_ending;
} StoryNode;

int STORY_SIZE = 70;

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
           .choice_texts = {"Peek into the hole in the ground\n",
                            "Poke another hole in the ground\n",
                            "Leave the Poplament alone and walk away from "
                            "the hole\n"},
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
           .choice_texts = {"Land at the top of the mountain to survey the "
                            "lands",
                            "Land at the opening of a cave halfway up the "
                            "mountain",
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
            .choice_texts = {"Explain to Addy what has happened and how you "
                             "can turn back "
                             "into a human\n",
                             "Ask Addy how he can talk\n",
                             "Run away from the talking axolotl while "
                             "screaming\n"},
            .next_nodes = {34, 35, 36}},
    [12] = {.description =
                "You gallop towards the mountains and meet a talking "
                "snow leopard. He introduces himself, 'Hello my name "
                "is Mr. Leo Pard. What is your name?'\n",
            .is_ending = false,
            .choice_texts = {"You politely ask Mr. Pard how you can turn "
                             "back into a human\n",
                             "Ask Leo how he can talk\n",
                             "You gallop away as fast as you can while "
                             "screaming high pitched "
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
                "As you arrive at the base of the mountains you start to feel "
                "tired\n"
                "but you notice some type of creature up atop the mountains\n"
                "as well as a cave that's about halfway up.\n",
            .is_ending = false,
            .choice_texts =
                {"Climb to the top of the mountain\n",
                 "Head halfway up the mountain towards the cave opening",
                 "Rest here at the bottom of the mountain"},
            .next_nodes = {28, 29, 30}},
    [15] = {.description =
                "You walk towards the shimmering lake. As you approach, a "
                "friendly axolotl named Addy pops his head out of the water!\n",
            .is_ending = false,
            .choice_texts = {"Ask Addy about your magical horn\n",
                             "Ask Addy if he knows any magic\n",
                             "Wave goodbye and walk back towards town\n"},
            .next_nodes = {40, 41, 42}},
    [16] = {.description =
                "You arrive at a bustling town filled with friendly creatures. "
                "The town square has a beautiful fountain in the center. You see "
                "three different paths you could take.\n",
            .is_ending = false,
            .choice_texts = {"Visit the magic shop on the left\n",
                             "Go to the town hall in the center\n",
                             "Explore the library on the right\n"},
            .next_nodes = {43, 44, 45}},
    [17] = {.description =
                "You trek up the tall mountains. The climb is tough but the view "
                "is amazing! At the peak you see three different areas you could "
                "explore.\n",
            .is_ending = false,
            .choice_texts = {"Enter the mysterious cave\n",
                             "Investigate the glowing crystals\n",
                             "Talk to the mountain goat you see\n"},
            .next_nodes = {46, 47, 48}},
    [18] = {.description =
                "At the lake, the water is crystal clear and magical fish swim "
                "beneath the surface. You notice three interesting things.\n",
            .is_ending = false,
            .choice_texts = {"Wade into the water\n",
                             "Follow the path around the lake\n",
                             "Climb the tree by the shore\n"},
            .next_nodes = {49, 50, 51}},
    [19] = {.description =
                "You peek into the hole and see the Poplament family having "
                "dinner! They invite you down to join them. Their underground "
                "home is cozy and warm.\n",
            .is_ending = false,
            .choice_texts = {"Accept their invitation and join dinner\n",
                             "Ask them about the magical land\n",
                             "Politely decline and continue exploring\n"},
            .next_nodes = {52, 53, 54}},
    [20] = {.description =
                "You poke another hole and hear a rumbling sound! A family of "
                "moles pops up. They're not angry, just curious about you.\n",
            .is_ending = false,
            .choice_texts = {"Apologize and introduce yourself\n",
                             "Ask if they know the way home\n",
                             "Back away slowly\n"},
            .next_nodes = {55, 56, 57}},
    [21] = {.description =
                "You walk away from the hole and discover a beautiful meadow "
                "filled with glowing flowers. The flowers hum a gentle melody.\n",
            .is_ending = false,
            .choice_texts = {"Pick a glowing flower\n",
                             "Sit and listen to the melody\n",
                             "Dance through the meadow\n"},
            .next_nodes = {40, 41, 42}},
    [22] = {.description =
                "The colorful parrot introduces himself as Captain Feathers! He's "
                "wearing a fancy hat and has many stories to tell.\n",
            .is_ending = false,
            .choice_texts = {"Ask him about his adventures\n",
                             "Ask if he can help you get home\n",
                             "Compliment his fancy hat\n"},
            .next_nodes = {43, 44, 45}},
    [23] = {.description =
                "The baby bird chirps excitedly and shows you its favorite toy! "
                "It's a shiny spinning top. The bird wants to play with you.\n",
            .is_ending = false,
            .choice_texts = {"Play with the baby bird\n",
                             "Ask where its parents are\n",
                             "Give the bird a gentle pat\n"},
            .next_nodes = {46, 47, 48}},
    [24] = {.description =
                "The pink mom bird smiles warmly at you. She looks wise and kind. "
                "'Welcome, little traveler,' she says in a gentle voice.\n",
            .is_ending = false,
            .choice_texts = {"Ask her about the magical land\n",
                             "Ask if she knows the way home\n",
                             "Thank her for her kindness\n"},
            .next_nodes = {49, 50, 51}},
    [25] = {.description =
                "You land at a cozy little house. A friendly raccoon named "
                "Ranger opens the door. He invites you inside warmly.\n",
            .is_ending = false,
            .choice_texts = {"Accept the tea he offers\n",
                             "Ask him about the village\n",
                             "Politely excuse yourself and leave\n"},
            .next_nodes = {52, 53, 54}},
    [26] = {.description =
                "In the center of the village, you see a beautiful fountain with "
                "sparkling water. A kind fairy named Orina appears before you!\n",
            .is_ending = false,
            .choice_texts = {"Introduce yourself to Orina\n",
                             "Ask about the magical fountain\n",
                             "Ask Orina for help getting home\n"},
            .next_nodes = {55, 56, 57}},
    [27] = {.description =
                "On the roof of the tallest building, you can see the whole "
                "magical land! It's beautiful! You spot interesting things below.\n",
            .is_ending = false,
            .choice_texts = {"Carefully climb down to explore more\n",
                             "Stay and enjoy the amazing view\n",
                             "Look for a safe way to fly down\n"},
            .next_nodes = {40, 41, 42}},
    [28] = {.description =
                "At the mountain peak, you find a wise snow leopard named Mr. Leo "
                "Pard! He greets you warmly. 'Welcome, brave climber!'\n",
            .is_ending = false,
            .choice_texts = {"Ask Leo about the magical land\n",
                             "Ask if he knows the way home\n",
                             "Request to rest here awhile\n"},
            .next_nodes = {43, 44, 45}},
    [29] = {.description =
                "You enter the cave and discover it's filled with glowing "
                "crystals! They sparkle in different colors. It's magical!\n",
            .is_ending = false,
            .choice_texts = {"Touch one of the crystals\n",
                             "Explore deeper into the cave\n",
                             "Take a crystal as a souvenir\n"},
            .next_nodes = {46, 47, 48}},
    [30] = {.description =
                "You decide to rest at the base of the mountain. As you sit, you "
                "notice movement in the nearby bushes.\n",
            .is_ending = false,
            .choice_texts = {"Investigate the bushes\n",
                             "Stay still and watch\n",
                             "Call out 'Hello?'\n"},
            .next_nodes = {49, 50, 51}},
    [31] = {.description =
                "You trot up to the first house and a friendly rabbit opens the "
                "door. She gasps when she sees you! 'A baby unicorn! How "
                "wonderful!' she exclaims.\n",
            .is_ending = false,
            .choice_texts = {"Ask the rabbit for help\n",
                             "Show her your unicorn abilities\n",
                             "Ask if she has any carrots\n"},
            .next_nodes = {52, 53, 54}},
    [32] = {.description =
                "In the center of town, there's a big celebration! Everyone is "
                "dancing and having fun. The music is cheerful and inviting!\n",
            .is_ending = false,
            .choice_texts = {"Join the dancing\n",
                             "Talk to the musicians\n",
                             "Try the festival food\n"},
            .next_nodes = {55, 56, 57}},
    [33] = {.description =
                "You approach the fountain. The water sparkles with magical "
                "energy and looks very inviting!\n",
            .is_ending = false,
            .choice_texts = {"Jump into the fountain\n",
                             "Drink from the fountain\n",
                             "Splash the water playfully\n"},
            .next_nodes = {40, 41, 42}},
    [34] = {.description =
                "Addy the axolotl smiles at your question. 'Your horn is very "
                "special!' he says excitedly.\n",
            .is_ending = false,
            .choice_texts = {"Ask Addy to teach you about the horn\n",
                             "Ask if there are others with horns\n",
                             "Thank Addy and continue exploring\n"},
            .next_nodes = {43, 44, 45}},
    [35] = {.description =
                "'Oh yes, I know lots of magic!' Addy says excitedly. 'Let me "
                "show you some tricks!'\n",
            .is_ending = false,
            .choice_texts = {"Watch Addy perform magic\n",
                             "Ask if he can teach you magic\n",
                             "Ask if magic can help you get home\n"},
            .next_nodes = {46, 47, 48}},
    [36] = {.description =
                "You wave goodbye to Addy and head back towards town. Along the "
                "way, you find a trail of glowing mushrooms.\n",
            .is_ending = false,
            .choice_texts = {"Follow the glowing mushrooms\n",
                             "Pick one mushroom to examine\n",
                             "Go around them to be safe\n"},
            .next_nodes = {49, 50, 51}},
    [37] = {.description =
                "Mr. Leo Pard listens carefully to your story. 'Ah yes, baby "
                "unicorns,' he says thoughtfully. 'I can help you!'\n",
            .is_ending = false,
            .choice_texts = {"Ask Leo how to transform back\n",
                             "Ask if he's seen other unicorns\n",
                             "Request Leo's guidance\n"},
            .next_nodes = {52, 53, 54}},
    [38] = {.description =
                "'Magic flows through all of us in this land,' Leo explains. His "
                "voice is calming and wise.\n",
            .is_ending = false,
            .choice_texts = {"Ask Leo to teach you about magic\n",
                             "Ask how you can use magic\n",
                             "Listen quietly to his wisdom\n"},
            .next_nodes = {55, 56, 57}},
    [39] = {.description =
                "You feel scared and start to gallop away! But Leo calls after "
                "you kindly, 'Wait! Don't be afraid!'\n",
            .is_ending = false,
            .choice_texts = {"Stop and turn back\n",
                             "Keep running but look back\n",
                             "Slow down to a trot\n"},
            .next_nodes = {40, 41, 42}},
    [40] = {.description =
                "As you continue exploring, you discover a magical meadow filled "
                "with glowing flowers! You pick one and it sparkles in your hand!\n",
            .is_ending = false,
            .choice_texts = {"Make a wish on the flower\n",
                             "Put the flower in your hair\n",
                             "Give the flower to a nearby fairy\n"},
            .next_nodes = {58, 59, 60}},
    [41] = {.description =
                "You discover magical singing flowers nearby! You sit and listen "
                "to their melody. The song tells a story of ancient magic and "
                "hidden paths home.\n",
            .is_ending = false,
            .choice_texts = {"Follow the direction the melody suggests\n",
                             "Sing along with the flowers\n",
                             "Ask the flowers for help\n"},
            .next_nodes = {61, 62, 63}},
    [42] = {.description =
                "You find yourself in a beautiful meadow! You dance joyfully and "
                "the flowers sway with you. Their glow intensifies. You feel magical!\n",
            .is_ending = false,
            .choice_texts = {"Keep dancing until something happens\n",
                             "Stop and bow to the flowers\n",
                             "Invite a nearby butterfly to dance\n"},
            .next_nodes = {64, 65, 66}},
    [43] = {.description =
                "You discover a wise old wizard sitting by a campfire! He "
                "introduces himself as Merlin and invites you to sit. He offers "
                "to share his knowledge with you.\n",
            .is_ending = false,
            .choice_texts = {"Ask Merlin if he knows the way home\n",
                             "Ask Merlin about this magical land\n",
                             "Request Merlin to teach you magic\n"},
            .next_nodes = {58, 59, 60}},
    [44] = {.description =
                "A helpful fairy appears before you in a shimmer of light! 'I've "
                "been watching your journey,' she says kindly.\n",
            .is_ending = false,
            .choice_texts = {"Ask the fairy for help getting home\n",
                             "Ask the fairy about your transformation\n",
                             "Thank the fairy for watching over you\n"},
            .next_nodes = {61, 62, 63}},
    [45] = {.description =
                "You find a magical wishing well! It glows with enchanted energy "
                "and a sign says 'Make a wish, but choose wisely!'\n",
            .is_ending = false,
            .choice_texts = {"Wish to go home\n",
                             "Wish for guidance\n",
                             "Wish for magical powers\n"},
            .next_nodes = {64, 65, 66}},
    [46] = {.description =
                "You discover an enchanted grove with a magical talking tree! The "
                "tree's branches glow softly. 'Welcome, traveler,' it says.\n",
            .is_ending = false,
            .choice_texts = {"Ask the tree for directions home\n",
                             "Ask the tree about its wisdom\n",
                             "Thank the tree for greeting you\n"},
            .next_nodes = {58, 59, 60}},
    [47] = {.description =
                "You find a crystal clear pond that shows visions! You look into "
                "the water and see images of magical places.\n",
            .is_ending = false,
            .choice_texts = {"Ask the pond to show you the way home\n",
                             "Touch the water to see more\n",
                             "Drink from the magical pond\n"},
            .next_nodes = {61, 62, 63}},
    [48] = {.description =
                "You encounter a friendly unicorn! It bows its head to you in "
                "greeting. Its horn glows with magical energy.\n",
            .is_ending = false,
            .choice_texts = {"Ask the unicorn for help\n",
                             "Pet the unicorn gently\n",
                             "Ask if you can ride the unicorn\n"},
            .next_nodes = {64, 65, 66}},
    [49] = {.description =
                "You find a magical library floating in the air! Books fly around "
                "and shelves stretch up into the clouds.\n",
            .is_ending = false,
            .choice_texts = {"Search for a book about getting home\n",
                             "Ask a flying book for help\n",
                             "Explore the magical library\n"},
            .next_nodes = {58, 59, 60}},
    [50] = {.description =
                "You discover a beautiful garden with a wise gardener! She tends "
                "to magical plants and smiles when she sees you.\n",
            .is_ending = false,
            .choice_texts = {"Ask the gardener for directions home\n",
                             "Help her tend the magical plants\n",
                             "Ask about the magical garden\n"},
            .next_nodes = {61, 62, 63}},
    [51] = {.description =
                "You find a glowing portal archway! It shimmers with rainbow "
                "colors and seems to lead somewhere magical.\n",
            .is_ending = false,
            .choice_texts = {"Step through the portal\n",
                             "Touch the portal to learn more\n",
                             "Look around for other options\n"},
            .next_nodes = {64, 65, 66}},
    [52] = {.description =
                "Your new friend offers you magical refreshments! The food and "
                "drink glow with enchanted energy. You feel welcomed and safe.\n",
            .is_ending = false,
            .choice_texts = {"Ask your friend if they know the way home\n",
                             "Thank them for their hospitality\n",
                             "Ask about this magical place\n"},
            .next_nodes = {58, 59, 60}},
    [53] = {.description =
                "You learn fascinating things about this magical land! Your "
                "companion shares wisdom and stories with you.\n",
            .is_ending = false,
            .choice_texts = {"Ask if they can help you get home\n",
                             "Ask to learn more magic\n",
                             "Thank them for sharing knowledge\n"},
            .next_nodes = {61, 62, 63}},
    [54] = {.description =
                "You say goodbye and continue on your journey. As you walk, you "
                "discover three different magical paths ahead.\n",
            .is_ending = false,
            .choice_texts = {"Take the glowing golden path\n",
                             "Take the sparkling silver path\n",
                             "Take the shimmering rainbow path\n"},
            .next_nodes = {64, 65, 66}},
    [55] = {.description =
                "You meet kind and magical beings who greet you warmly! They seem "
                "to understand your situation and want to help.\n",
            .is_ending = false,
            .choice_texts = {"Ask them about the magical land\n",
                             "Ask if they can help you get home\n",
                             "Offer to help them in return\n"},
            .next_nodes = {58, 59, 60}},
    [56] = {.description =
                "The magical beings listen carefully. 'Ah yes, the way home,' "
                "they say thoughtfully. 'We know of several paths!'\n",
            .is_ending = false,
            .choice_texts = {"Listen to their advice\n",
                             "Ask which path is safest\n",
                             "Thank them for their wisdom\n"},
            .next_nodes = {61, 62, 63}},
    [57] = {.description =
                "You wave farewell and continue your adventure! The path ahead "
                "splits into three shimmering trails.\n",
            .is_ending = false,
            .choice_texts = {"Follow the trail with blue sparkles\n",
                             "Follow the trail with golden light\n",
                             "Follow the trail with purple mist\n"},
            .next_nodes = {64, 65, 66}},
    [58] = {.description =
                "Your wish comes true! The flower creates a portal of light that "
                "leads straight home! You step through and find yourself back in "
                "your own world. You made it!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [59] = {.description =
                "You put the flower in your hair and suddenly you can understand "
                "all the creatures talking! Orina appears and congratulates you. "
                "'You've proven yourself worthy,' she says, opening a portal "
                "home. You thank her and step through. Success!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [60] = {.description =
                "The fairy accepts the flower with a huge smile! 'This is the "
                "Flower of Kindness!' she exclaims. 'You have a pure heart!' She "
                "grants your wish to go home. You appear back in your own world, "
                "filled with joy!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [61] = {.description =
                "You follow the melody's direction and discover a hidden path! "
                "The path leads to a rainbow bridge that takes you safely home. "
                "The flowers wave goodbye as you cross over!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [62] = {.description =
                "You sing along with the flowers and your voices create a "
                "beautiful harmony! The magic is so strong that it opens a portal "
                "home! You wave to your flower friends and step through!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [63] = {.description =
                "You ask the flowers for help. They whisper the magic words you "
                "need to say to return home! You say 'Sparkle-Home-Sweet-Home!' "
                "and whoosh! You're back in your own world!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [64] = {.description =
                "You keep dancing and dancing! The magic builds up so much that "
                "you start to float! You float higher and higher until you float "
                "right through a cloud portal that leads home! What a fun way to "
                "travel!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [65] = {.description =
                "You bow to the flowers and they bow back! Suddenly, a door "
                "appears made entirely of flowers! You open it and find it leads "
                "straight to your own world! You're home!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [66] = {.description =
                "The butterfly accepts your dance invitation! As you dance "
                "together, the butterfly's magic rubs off on you! You gain the "
                "ability to fly home! You soar through the sky and find your way "
                "back to your own world!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [67] = {.description =
                "The sleepy-time tea makes you very drowsy. You yawn and curl up "
                "in a comfy chair. When you wake up, everything has reset and "
                "you're back at the beginning!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [68] = {.description =
                "You trip over a magical stone and bonk your head! Stars swirl "
                "around you and you fall into a deep sleep. When you wake up, "
                "you're back at the start of your adventure!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},
    [69] = {.description =
                "A mischievous sprite casts a sleeping spell on you for fun! 'Sweet "
                "dreams!' it giggles. You drift off to sleep and when you wake "
                "up, you find yourself back at the beginning!\n",
            .is_ending = true,
            .choice_texts = {"", "", ""},
            .next_nodes = {0, 0, 0}},

};
