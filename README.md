# Zombie-Apocalyps-Game-
ZOMBIE APOCALYPSE SIMULATION
MOYO, FABIAN AND MATHEUS GROUP 
 DESCRIPTION 
This project is made to be a Zombie Apocalypse Simulation that is taking place in a large city called Simville. The city itself is broken into different smaller districts with different amounts of people, each district is shown below  
1.      Downtown
2.      The Burbs
3.      Medical Hill
4.      The University
The zombies' apocalypse would be caused by a virus that was mistakenly released during an experiment in an airtight lab. As the virus got out, it started spreading through bodily fluids and starts turning its victim into a lifeless, pale, body-eating zombie. At the moment the only one infected with such a virus is in the medical hill. As time goes on the people of Simville located in medical hill would start to notice the presence of the undead and the way it is spreading at an exponential rate, out of fear they start to run around the city and try to convince those who have not an idea of what it going on, at that moment they start to serve as the alarmed/ alerted. As the alarmed/alerted try to spread the news some people do not believe them and just ignore them and continue going on their way, these people serve as the ignorant and some of them later become corpses and also undead Zombies after being bitten or clawed to death and some believe that they are saying and join them to be alerted and informed. Now the aim of this simulation is to get an analysis of people who get infected with the virus, those who become corpses, those who become alarmed/alerted, and those who stay ignorant over a period set by the user. 
SPECIFICATION
For the development of this project we employed the use of certain specifications
Distribution of Population and Map of the population:
●	Downtown has a population of 750 with a lot of ignorant people 
●	The ‘Burbs has a population of 500 and is East of downtown with a lot of ignorant people 
●	University has a population of 400 and is North of downtown and has the first person to be alerted /alarmed 
●	 Medical Hill has a population of 350 and is SouthWest of downtown and has the first zombie to be made 
○ When seeing a zombie the user would be asked to input the probability of the ignorant person being bitten and becoming a zombie and also the probability of the zombie becoming alarmed and escaping. Starting on day 0, the probability is 0 of an ignorant becoming alarmed. When an alarmed citizen says “zombies are coming,” is equal to the current day in the simulation squared (probability = day2 ).
○ Alarmed/alerted
As an alarmed/alerted the user would be asked to input three possibilities which can later determine their actions of the alerted/alarmed. The actions that the alarmed would perform depending on the probability are,  escaping from the zombie, killing the zombie, or becoming a zombie. 
○ Zombie
These are the people who got bitten and exposed to the virus, they move one paced but they can turn people into zombies or just kill them, they can be killed but it all depends on the probability 
■ I bite per click. (1 click = 1 day)
● Cure: 
○ The University District is going to start to develop a cure as soon as day one.
○ However, how fast the cure is being developed depends on the number of zombies and ignorant in the district. ○ If the percentage of alarms in the city is the biggest, the cure will be made in exponential time.
○ If the of alarmed is the lo
 
 
 DETAILED USE CASE
●	Use case for Zombie Simulation: Researchers /users would be able to use this simulation to reenact a zombie invasion. The simulation allows the user to choose certain probabilities that can affect the actions of the citizens. This can help in research and understating of certain subjects and situations  
●	System: Zombie Apocalyps Simulation 
●	Primary actor: Researcher/ User 
●	Scenario:  The Zombie Simulation gives the user a real-life situation of the outbreak of a virus that turns people into real-life zombies. The user can control the outcome of 3 sets of denizens; The zombies, the alerted /alarmed, and the ignorant, all through the power of probability. The user can input the probability of an action happening, the actions are as follows:
●	The probability of an ignorant person becoming a zombie if bitten.
●	The probability of an ignorant person becoming alarmed if alerted by an alarmed person.
●	The probability of an alarmed person becoming a zombie if bitten.
●	The probability of an alarmed person killing a zombie.
●	The probability of an alarmed person escaping from a zombie.
       The user gets to see the reactions and the result gotten from the simulation which can differ depending on the parameters set. The simulation then releases a detailed analysis of the activities happening on each day for the number of days that the user set it to. The activities include how many corpses were made, how many people are still ignorant, how many people turned to zombies, and how became alarmed and alerted. These values are then placed in a visual representation of a graph.
This use case illustrates how both the Use (The actor ) interact with the Zombieapocalyps (the system) and the expected outcome of each interaction.

      ![image](https://user-images.githubusercontent.com/86128616/211953527-2a9cadc9-9bd4-46b4-b79f-b2faa98935ff.png)

Chance of Ignorant becoming a zombie when seeing a zombie:70%
Chance of Ignorant believing the alarmed person: 40%
Chance of Alerted escaping from the zombie: 20%
Chance of Alerted killing the zombie: 40%
Chance of Alerted becoming a zombie: 40%
