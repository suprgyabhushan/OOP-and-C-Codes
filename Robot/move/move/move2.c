#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <libplayerc/playerc.h>
#include "playerc.h"
// Random numbers generated for random walk movement by robots





void move_straight(int x,playerc_client_t *client,playerc_position2d_t *position2d)
{

int i = 0;
while(i<1)
{
        // Wait for new data from server
        playerc_client_read(client);
        fprintf(stdout, "X: %3.2f, Y: %3.2f, Yaw: %3.2f \n",position2d->px, position2d->py, position2d->pa);
        //Random walk is continued till finding first marker
        playerc_position2d_set_cmd_vel(position2d, x , 0 , 0 , 1 );
        sleep(1);
playerc_position2d_set_cmd_vel(position2d, 0 , 0 , 0 , 0 );
i+=1;
}
//playerc_position2d_set_cmd_vel(position2d, 0 , 0 , 0 , 1 );
sleep(1);


playerc_position2d_set_cmd_vel(position2d, 0 , 0 , 0 , 0 );


}



int turn_left(playerc_client_t *client,playerc_position2d_t *position2d)

{
    playerc_client_read(client);
    fprintf(stdout, "X: %3.2f, Y: %3.2f, Yaw: %3.2f \n",position2d->px, position2d->py, position2d->pa);
    playerc_position2d_set_cmd_vel(position2d, 0,0 , DTOR(47),1);
    sleep(1);
    playerc_position2d_set_cmd_vel(position2d, 0, 0, 0, 1);
    sleep(1);
}




int turn_right(playerc_client_t *client,playerc_position2d_t *position2d)

{
    playerc_client_read(client);
    fprintf(stdout, "X: %3.2f, Y: %3.2f, Yaw: %3.2f \n",position2d->px, position2d->py, position2d->pa);
    playerc_position2d_set_cmd_vel(position2d, 0,0 , -1*DTOR(46),1);
    sleep(1);
    playerc_position2d_set_cmd_vel(position2d, 0, 0, 0, 1);
    sleep(1);
}
int rotate120(playerc_client_t *client,playerc_position2d_t *position2d)
{
    playerc_client_read(client);
    fprintf(stdout, "X: %3.2f, Y: %3.2f, Yaw: %3.2f \n",position2d->px, position2d->py, position2d->pa);
    playerc_position2d_set_cmd_vel(position2d, 0,0 , -1*DTOR(123),1);
    sleep(1);
    playerc_position2d_set_cmd_vel(position2d, 0, 0, 0, 1);
    sleep(1);
}

int square(playerc_client_t *client,playerc_position2d_t *position2d)
{
	playerc_client_read(client);
	move_straight(1,client,position2d);
	turn_left(client,position2d);
	turn_left(client,position2d);	
	move_straight(1,client,position2d);
	turn_left(client,position2d);
	turn_left(client,position2d);
	move_straight(1,client,position2d);
	turn_left(client,position2d);
	turn_left(client,position2d);
	move_straight(1,client,position2d);
	turn_left(client,position2d);
	turn_left(client,position2d);
	sleep(1);
}	


int triangle(playerc_client_t *client,playerc_position2d_t *position2d)
{
	playerc_client_read(client);
	move_straight(1,client,position2d);
	rotate120(client,position2d);
	move_straight(1,client,position2d);	
	rotate120(client,position2d);
	move_straight(1,client,position2d);
	
	sleep(1);
}

int main(int argc, const char **argv)
{
int history[500];
int i,count=0;
playerc_client_t *client;
playerc_position2d_t *position2d;
int cycle, index=0;
double dist,angle,fidAngle = 0,lineAngle=0, fidDist=0, prevYaw=0,posAngle=0;
// Create a client and connect it to the server.
client = playerc_client_create(NULL, "localhost", 6665);
if (0 != playerc_client_connect(client))
{
fprintf(stdout,"Error!!");
return -1;
}
// Create and subscribe to a position2d device.
position2d = playerc_position2d_create(client, 0);
if (playerc_position2d_subscribe(position2d, PLAYER_OPEN_MODE))
return -1;
int choice,ch,bump1,bump2,bumpcount=0;

playerc_client_read(client);



do
{
count+=1;
printf("\n8.Straight    4.Left   6.Right   2.Reverse   5.exit  3.square  7.triangle\n");
scanf("%d",&choice);
history[count-1]=choice;
switch(choice)
{
case 8 : {move_straight(1,client,position2d);break;}
case 4 : {turn_left(client,position2d);break;}
case 6 : {turn_right(client,position2d);break;}
case 2 : {move_straight(-1,client,position2d);break;}
case 3 : {square(client,position2d);break;}
case 7 : {triangle(client,position2d);break;}
case 5 : break;
default : {printf("Wrong Choice!!!!!\n"); break;}
}
playerc_client_read(client);

}while(choice != 5 );

playerc_position2d_unsubscribe(position2d);

playerc_position2d_destroy(position2d);

playerc_client_disconnect(client);
playerc_client_destroy(client);
return 0;
}

//​



