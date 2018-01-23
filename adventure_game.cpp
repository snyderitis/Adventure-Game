/*
 * Program name: The Haunted House
 * Author: Thomas Snyder
 * Description: You start in a haunted house's library. The power has been cut and you 
 * need to find the key to get out of the front door. The catch is that there is a chance
 * you will never come out.
 * Date: 19 January 2018
 *
 */

#include <ctime>
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
using namespace std;


void print_house()
{

                                                                                 
cout <<"                                     `/dNs-                                   \n";
cout <<"                                   .sNMMMMMh/`                                \n";
cout <<"                                 `/hMMMMMMMMMMmo`                             \n";
cout <<"                               .sNMMMMMMMMMMMMMMNs.                           \n";
cout <<"                             `/hMMMMMMMMMMMMMMMMMMMMy-                        \n";
cout <<"                          -sNMMMMMMMMMMMMMMMMMMMMMMMMh:                       \n";
cout <<"                        `+dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd:                    \n";
cout <<"                       :yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd/`                \n";
cout <<"                    .+dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd/`              \n";
cout <<"                 `:yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd:             \n";
cout <<"               `+hmNNNMMMMMMMMMMMMdd++oymMMMMMMMMMMMMMMMs....````             \n";
cout <<"                ``````.-+MMMMMMMMo:s:::::sMMMMMMMMMMMMMMo                     \n";
cout <<"                        :MMMMMMMh//y++++++hMMMMMMMMMMMMMs                     \n";
cout <<"                        :MMMMMMN/::o+::::::NMMMMMMMMMMMMh                     \n";
cout <<"                        :MMMMMMm/:/os/:/:/:hMMMMMMMMMMMMm                     \n";
cout <<"                        :MMMMMMh:/:/s:/:/:/oMMMMMMMMMMMMM`                    \n";
cout <<"                        :MMMMMMh::::s::::::+MMMMMMMMMMMMM-                    \n";
cout <<"                        :MMMMMMNyhhhmhhhdddmMMMMMMMMMMMMMs.                   \n";
cout <<"                       .sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmho-`               \n";
cout <<"                     .omMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNms:`            \n";
cout <<"                  `:yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmy:.         \n";
cout <<"                `/hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmy/.      \n";
cout <<"              .+dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmh+-`  \n";
cout <<"           `-smMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmo` \n";
cout <<"         `/hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNh/.`  \n";
cout <<"      `-omMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdmNMMMMMMMMMMMd/.      \n";
cout <<"    `/hNMMMMMMMMMMMMMMMMMMMMMMMNNNmmmNmmmmmMMMMMMMMMMMm::/+oddNMMMMMM-        \n";
cout <<" `-omMMMMMMMMMMMMMMMMNNNMMMMMMMo/////y/////MMMMMMMMMMMh+//:o+:/oyMMMd         \n";
cout <<":hNMMMMMMMMMMMMMNNhyo+/sMMMMMMMm+++++y++++oMMMMMMMMMMMo:/+yo/:::oMMM/         \n";
cout <<"-://+ooshMMMNds+/o+::::/MMMMMMMMs::::s::::oMMMMMMMMMMN:::o///+/oNMMm`         \n";
cout <<"        `mMMm/::::o+::::dMMMMMMMN/:::s::::hMMMMMMMMMMd+os+/:::yMMMMo          \n";
cout <<"         :MMMm+::::s+/++yMMMMMMMMd++os++++NMMMMMMMMMM+:s//+++hMMMMN.          \n";
cout <<"          sMMMNs+++/s+:::NMMMMMMMM+:o/:::+MMMMMMMMMMm:s/:::+NMMMMMy           \n";
cout <<"          `mMMMMh/:::o/::sMMMMMMMMh:s::::hMMMMMMMMMMys/:::/NMMMMMM-           \n";
cout <<"           :NMMMMm+:::s//+MMMMMMMMNhmdddmMMMMMMMMMMMMNmhyymMMMMMMh            \n";
cout <<"            oMMMMMNyyhmmNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM:            \n";
cout <<"             .NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/             \n";
cout <<"              /MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm`             \n";
cout <<"               sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+              \n";
cout <<"               `mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssssymhdmNMMMN`              \n";
cout <<"                -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd::::+o:::/dMMs               \n";
cout <<"                 oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM++++h/:::/NMM.               \n";
cout <<"                 `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/::o+/+++hMMh                \n";
cout <<"                  -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo::s::::/NMM:                \n";
cout <<"                   oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy+so++++mMMd                 \n";
cout <<"                   `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMy:s::::hMMM/                 \n";
cout <<"                    -MMMMMMMMMMMMMMMMMMMMMMMMMMMMh/s::::NMMm`                 \n";
cout <<"                     sMMMMMMMMMMMMMMMMMMMMMMMMMMMmysoooyMMM+                  \n";
cout <<"                     `mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN`                  \n";
cout <<"                      -MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo                   \n";
cout <<"                       oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.                   \n";
cout <<"                       `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                    \n";
cout <<"                        .dmmNNNMMMMMMMMMMMMMMMMMMMNNNmmmd-                    \n";

                                                                                
}



/*
 *  Function: Scene on the map
 *  Description: This will be the scenes that makes up the world
 *  in this text adventure
 *  Parameters: description, list of exits, name of scene, option text,
 *  end flag, chance flag
 *  Pre-conditions: scenes that are supposed to be exits should already exist.
 *  This means that the exits should be declared after the scenes are declared in 
 *  main.
 *  Post-conditions: none
 */
class Scene
{
    public:
        bool chance;
        bool end;
        string descript; //description of scene
        string name;
        string option;
        //a vector allows me to add things in willy nilly
        vector<Scene*> exits;
        Scene(string new_name, string new_option, string new_descript, bool end_scene, bool chance_scene)
        {
            option = new_option;
            end = end_scene;
            chance = chance_scene;
            name = new_name;
            descript = new_descript;
            //make scene for 5 exits without unnencessary copy
            exits.reserve(5);  
        }    
        //copy construcor
        /*
        Scene(const Scene& next_scene)
        {
            name = next_scene.name;
            descript = next_scene.descript;
            exits = next_scene.exits;
        }*/

    /*
     * These getters and setters allow me to easily 
     * set the parameters of the scene on the fly.
     */


    //setters
    void set_option(string new_opt)
    {
        option = new_opt;
    }
    void set_chance(bool is_chance)
    {
        chance = is_chance;
    }
    void set_end(bool is_end)
    {
        end = is_end;
    }
    void set_name(string des_name)
    {
        name = des_name;
    }    
    void set_descript(string des_descript)
    {
        descript = des_descript;
    }
    void add_exit(Scene* new_exits)
    {
        exits.push_back(new_exits);
    }


   //getters 
    string get_option()
    {
        return option;
    }
    bool is_end()
    {
        return end;
    }
    bool is_chance()
    {
        return chance;
    }
    string get_name()
    {
        return name;
    }
    vector<Scene*> get_exits()
    {
        return exits;
    }
    string get_descript()
    {
        return descript;
    }

    /*
     * No destructor needed becayse the dynamic
     * standard classes that I use will take care of the 
     * destroying for me:
     *
     * http://bit.ly/2EPaY4q
     */
};



/*
 * Function: print exits
 * Description: This will print to terminal the scenes that can be accessed
 * by the current scene that Auch is in.
 * Parameters: the current scene Auch is in
 * Pre-conditions: exits have been assigned and rooms have been declared
 * Post-conditions: exits of current scene printed to screen
 */
void print_exits(Scene* curr_scene)
{
    vector<Scene*> scene_exits = curr_scene->get_exits();
    int num_exits = scene_exits.size();
    cout << "Options: " << endl; 
    for ( int i = 0; i < num_exits; i++ )
    {
        cout << i << ": \33[32;40m" << scene_exits.at(i)->get_option() << "\33[0m" << endl;
    }
}




/*
 * Function: Print help
 * Description: Prints master options for quit and restart to screen
 * Parameters: nothing, just prints instructions
 * Pre-conditions: 10 input
 * Post-conditions: master options printed to screen
 */
void print_help()
{
    cout << "\n\33[91;40mIf you would like to quit, input 100\33[0m\n";
    cout << "\33[91;40mIf you would like to restart, input 11\33[0m\n\n";
}



/*
 *  Function: Check valid
 *  Description: checks if the input int is an option for the specific scene that it
 *  is in
 *  Parameters: returning true/false
 *  Pre-conditions: input from user and scenes made
 *  Post-conditions: asking user for valid int or moving to next scene
 *
 */
bool check_valid(int input, Scene* curr_scene)
{
    if(input < curr_scene->get_exits().size() && input >= 0)
        return true;
    else
        return false;
}



int main()
{
    print_house();

   //Scene (name, option, descript, end, chance)
   //initialize scenes
    Scene library("in the library", "Go to library", 
            "The lightning flashes in the window \nSomething cut the power...",
            false, false);

    Scene key("You have the key", "Pick up key", "Now it\'s time to find the door", false,
            false);

    Scene kitchen( "in the kitchen", "Go to kitchen", "It\'s erie in here.",
            false, false);

    Scene pantry("in the pantry", "Go to pantry", 
            "I can\'t see very far into there. Should I continue?", false, false);

    Scene continue_pantry("in Limbo", "Continue into the pantry", 
        "You were kicked in the stomach and knocked out never to be seen again"
            ,true, false);

    Scene bathroom("in the bathroom", "Go into bathroom", 
            "Every time the light flickers, you see something in the corner.",
            false, false);

    Scene bath_corner("in the bathroom corner", "Go to corner", 
            "As you get closer, you can make out the form of a rat before it runs away.",
            false, false);

    Scene foyer("in the foyer", "Go to foyer", 
     "The chandelier sways gently overhead\nYou hear something, but you can\'t place it.",
            false, false);

    Scene stairs("on the stairs", "Take the stairs", 
 "As you approach the top of the stairs, the noise gets louder. \nA child... laughing",
            false, false);

    Scene hallway("in the hallway", "Enter the hallway", 
            "You step into the hallway. You still hear the child.",
            false, false);

    Scene master_bed("in the master bedroom", "Enter master bedroom", 
            "There's a man looking at you. Take a chance and try to talk?",
            false, false);

    Scene talk_chance("in the master bedroom", "Talk to the man",
           "" , false, true);

    Scene die_by_man("in the man's layer", "", "You are never seen again", true, false);

    Scene talk_with_man("in the master bedroom", "", 
            "He is afraid. He doesn\'t look well. The child is there every night.",
            false, false);
    
    Scene child_bed("in the bedroom", "Enter bedroom",
            "The laughing is coming from here. Take a chance and go in?",
            false, false);
    
    Scene continue_child_bed("in the bedroom", "Continue into bedroom",
            "", false, true);

    Scene death_by_child("dead", "", "You saw the child and died.", true, false);

    Scene kind_child("in the bedroom", "", 
            "You sit down and the child gives you a \33[38;2;255;165;0mkey\33[0m",
            false, false);

    Scene front_door("outside", "Exit the front door",
            "Hooray! You've exited the creepy house!",
            true, false);
    
    Scene bath_death("dead", "",
            "Someone snuck in behind you and you had no time to react.", true, false);
    
    Scene bath_corner_mid("", "Go to corner", "", false, true);

    Scene den("den", "Go into den", "There is lot's of windows", false, false);
    //add exits to each scene, make them pointers so that you don't have to
    //constantly update each time
    library.add_exit(&kitchen);
    library.add_exit(&foyer);
    library.add_exit(&den);

    den.add_exit(&library);

    kitchen.add_exit(&library);
    kitchen.add_exit(&pantry);
    kitchen.add_exit(&foyer);

    pantry.add_exit(&continue_pantry);
    pantry.add_exit(&kitchen);
    
    continue_pantry.add_exit(&kitchen);
    
    foyer.add_exit(&kitchen);
    foyer.add_exit(&library);
    foyer.add_exit(&stairs);
    foyer.add_exit(&bathroom);
    foyer.add_exit(&front_door);

    bathroom.add_exit(&foyer);
    bathroom.add_exit(&bath_corner_mid);
    
    bath_corner_mid.add_exit(&bath_death);
    bath_corner_mid.add_exit(&bath_corner);

    bath_corner.add_exit(&foyer);

    stairs.add_exit(&hallway);
    stairs.add_exit(&foyer);
    
    hallway.add_exit(&master_bed);
    hallway.add_exit(&stairs);
    hallway.add_exit(&child_bed);

    child_bed.add_exit(&hallway);
    child_bed.add_exit(&continue_child_bed);
    
    continue_child_bed.add_exit(&death_by_child);
    continue_child_bed.add_exit(&kind_child);
    
    kind_child.add_exit(&hallway);

    master_bed.add_exit(&talk_chance);
    master_bed.add_exit(&hallway);

    talk_chance.add_exit(&die_by_man);
    talk_chance.add_exit(&talk_with_man);

    talk_with_man.add_exit(&hallway);

    front_door.add_exit(&foyer);
    

    //start scene 
    Scene* current_scene = &library; 
    srand(time(NULL));//seed rand
    bool playing = true;
    int decision;
    bool has_key = false;
    cout << "\n\33[95;40mInput 10 if you need any help.\33[0m\n" << endl;

    while(playing)
    {
        //print story
        //cout << "You are \33[32;40m" << 
          //  current_scene->get_name() << ".\33[0m" << endl;
        

        if(current_scene == &front_door)
        {
            if(has_key)
            {
                //print story
                cout << "You are \33[32;40m" << 
                    current_scene->get_name() << ".\33[0m" << endl;

                playing = false;
                //print description
                cout << current_scene->get_descript() << endl; 
            }
            else
            {
                cout << 
                 "\33[95;40mThe door is locked. Maybe there's a key somewhere\33[0m\n\n";
                current_scene = &foyer;
            }
        }
        else if(current_scene->is_end())
        {
            //print story
            cout << "You are \33[32;40m" << 
                current_scene->get_name() << ".\33[0m" << endl;

            //print description
            cout << current_scene->get_descript() << endl; 
            playing = false;
        }
        else
        {
            if(current_scene == &kind_child)
            {
                has_key = true;
            }
            
            //print story
            cout << "You are \33[32;40m" << 
                current_scene->get_name() << ".\33[0m" << endl;


            //print description
            cout << current_scene->get_descript() << endl; 

            //print options
            print_exits(current_scene);

            //take input
            cout << "\33[96;40m What would you like to do?\33[0m" << endl;
        
            //check type
            //from http://bit.ly/2FI4eGq
            while(!(cin >> decision))
            {
                //not option
                cout << "\33[95;40m That's not an option!\33[0m" << endl;
                //clear cin
                cin.clear();
                //ignore error message thrown
                cin.ignore();
                //Ask for correct thing
                cout << "\33[96;40m What would you like to do?\33[0m \n" << endl;
            }

            //help master input
            if(decision == 10)
            {
                print_help();
            }
            //restart master input
            else if(decision == 11)
            {
                cout << "\33[91;40mResarting...\33[0m\n\n";
                current_scene = &library;
                has_key = false;
            }
            //quit master input
            else if(decision == 100)
            {
                playing = false;
            }
            else if(check_valid(decision, current_scene) && 
                    current_scene->get_exits().at(decision)->is_chance())
            {
                //rand between 1 and 2
                //The rand chance selections should always be at 0 and 1
                int rand_num = rand() % 2;
                current_scene = 
                    current_scene->get_exits().at(decision)->get_exits().at(rand_num);
                cout << endl;
            }
            //check validity
            else if(check_valid(decision, current_scene))
            {
                //next scene
                current_scene = current_scene->get_exits().at(decision);
                //new line to make it easier to read
                cout << endl; 
            }
            else
            {
                cout << "\33[95;40m That's not an option!\33[0m \n" << endl;
            }
        }
        
    }
    return 0;
}
