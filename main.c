#include <kipr/wombat.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <constants.h>
#include <time.h>
#include <stddef.h>
#include <stdbool.h>
//#define LIBS-SH_STATIC 1
//#include <libssh/libssh.h>
////////////////////////////////////////////////////////////////
//ALERT OMNI_STRAFE IS HARD CODED TO 90 DEGREES and 45 DEGREES//
////////////////////////////////////////////////////////////////



int main()
{
   new_calibrate_z();
    //Servo setting for starting position
    //omni_strafe(90,4);
//slide_cup();
  
	smart_servo(arm,55,2.0);//starting position of arm
   
    smart_servo(claw,100,2);//claw open starting box
    smart_servo(rotate,100,0.5);//
    msleep(900);
    //Light going off
    
    int timer = systime();
   msleep(500);
   // smart_servo(rotate,100,0.5);
    /*
    demo_gyro_square_up(1200);
    smart_servo(arm,0,1.0,1);
    four_wheel_drive(1000,12.0);
    smart_servo(claw,100,2);
    smart_servo(arm,80,2.0);
    msleep(2600);
    */
    //goes forward
    four_wheel_drive(1450,4.5);
    //turns  to back up out of starting box
    four_turn(-50);
    //back up out of starting box
    four_wheel_drive(1450,-14.0);
    //square up 
    demo_gyro_square_up(1450);
	//back up
    four_wheel_drive(1450,-5.0);
    //turn to push poms
    four_turn(-90);
     back_until_black();
     four_wheel_drive(1450,2.0);
    four_wheel_drive(1450,15.0);
   // msleep(5000);
    //backup from pushing poms
    four_wheel_drive(1450,-7.0);
    
    //this is where jumper section
    four_wheel_drive(1450,-4.0);//4.0
    four_turn(-90);
     demo_gyro_square_up(-1450);
     smart_servo(rotate,100,0.5);//trying to move around blue water bottles and rotate to pickup light blues
    smart_servo(arm,-5,1.0,1);
    four_wheel_drive(1450,8.4);//9.5//3
    //smart_servo(claw,100,.60,0.8);
    smart_servo(arm,0,1.7,0.7);//this lifts poms out of tray//0.6//0.5
    msleep(1100);
    omni_strafe(-90,0.9);
    omni_strafe(-90,2.8);//1.9
    smart_servo(claw,0,0.5);
    msleep(100);
    smart_servo(arm,100,1.5);
    //msleep(1900);
    demo_gyro_square_up(-1350);
     four_wheel_drive(1450,5.0);
    four_turn(-70);
    smart_servo(rotate,40,0.5);
    four_wheel_drive(1450,1.2);
    smart_servo(claw,100,.60);
    msleep(600);
    //////////////////////////////////////////////
    four_wheel_drive(-1450,2.5);
    
    four_turn(70);
    demo_gyro_square_up(-1450);
     //four_wheel_drive(1450,2.0);
    /*four_turn(90);
    //four_wheel_drive(1450,1.0);//set claw over poms//idk maybe
     smart_servo(arm,0,0.7);//0.8
    msleep(600);
     smart_servo(claw,0,.6);
    msleep(900);
      smart_servo(arm,60,.5);
    msleep(500);
    four_wheel_drive(1450,9.0);//this is the original move forward//12
     four_wheel_drive(1450,5.0);
    four_wheel_drive(1450,8.5);//must go past black tape//7
    back_until_black();
   four_turn(90);
    four_wheel_drive(1450,7.0);
    four_wheel_drive(-1450,2.0);
    smart_servo(claw,100,.6);
    //four_wheel_drive(-1450,2.0);//maybe
    four_turn(90);
    smart_servo(rotate,50,0.5);
    smart_servo(arm,100,.5);
    four_wheel_drive(1450,21.0);
    four_turn(90);
    demo_gyro_square_up(1200);
    //////////////////////////////////////////////////////////////////////
    
    four_wheel_drive(1300,2.0);//3.4
    smart_servo(arm,15,1.2);
    msleep(1200);
    
    smart_servo(claw,100,0.5);
    msleep(500);
    smart_servo(arm,75,1.0);
    msleep(800);
    demo_gyro_square_up(-1200);
    four_turn(-90);
    four_wheel_drive(1300,7.0);
    four_turn(-90);
    four_wheel_drive(1300,3.0);
    four_wheel_drive(1300,-1.0);
    smart_servo(arm,15,1.0);
    msleep(800);
    smart_servo(claw,0,1.0);
    msleep(500);*/
    
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    ///
    //lowering arm to catch poms
    
    
    
   /* smart_servo(rotate,40,0.5);
    smart_servo(arm,0,0.7);//0.8
    msleep(600);
    four_wheel_drive(1450,-4.1);
    smart_servo(claw,100,.6);
    msleep(600);
    smart_servo(arm,45,1.1);
    four_wheel_drive(1450,12.0);//this is the original move forward
    //
   four_wheel_drive(1450,10);//this must stay to keep sequencing
    msleep(1500);
    //
    four_turn(90);
    smart_servo(rotate,0,0.5);
    four_wheel_drive(1450,3.0);
    smart_servo(claw,0,0.5);
    msleep(500);
	smart_servo(arm,40,2.0);
    msleep(200);
    //////////////////////////////////////////
    //ice cubes
    smart_servo(rotate,100,0.5);
    four_turn(90);
    msleep(3000);//timing
    four_wheel_drive(1500,10.0);
    four_turn(-90);
    four_turn(-90);
    four_turn(-90);
    
    demo_gyro_square_up(1450);
    smart_servo(arm,0,1.0,1);
    four_wheel_drive(1450,11.0);
    smart_servo(claw,100,.60);
    smart_servo(arm,60,.60,0.5);
    msleep(1100);
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    four_turn(-90);
    ///last add in that annoyed me
    four_wheel_drive(1200,7.0);
    smart_servo(rotate,0,0.5,0.1);//uncomment out this */
    
    ////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////
    //right in between blue bottle and pom drop facing straight forward on black line
    /*
    four_turn(-90);
    demo_gyro_square_up(-1200);
    four_wheel_drive(1300,2.0);//3.4
    smart_servo(arm,15,1.2);
    msleep(1200);
    
    smart_servo(claw,100,0.5);
    msleep(500);
    smart_servo(arm,75,1.0);
    msleep(800);
    demo_gyro_square_up(-1200);
    four_turn(-90);
    four_wheel_drive(1300,7.0);
    four_turn(-90);
    four_wheel_drive(1300,3.0);
    four_wheel_drive(1300,-1.0);
    smart_servo(arm,15,1.0);
    msleep(800);
    smart_servo(claw,0,1.0);
    msleep(500);
    
    
    
    
    
    //rotate
    smart_servo(rotate,46,0.5);
    smart_servo(arm,65,1.0);
    msleep(800);
    four_turn(-90);
    four_wheel_drive(1300,7.0);
    four_turn(-90);
    demo_gyro_square_up(-1200);
    four_wheel_drive(1300,6.9);
    smart_servo(arm,20,1.2);
    msleep(1200);
    smart_servo(claw,100,0.5);
    msleep(500);
    smart_servo(arm,75,1.0);
    msleep(800);
    four_turn(-90);
    four_wheel_drive(1300,6.0);
    four_turn(-90);
    four_wheel_drive(1300,2.0);
    //four_wheel_drive(1300,-1.5);
    smart_servo(arm,20,1.0);
    msleep(800);
    smart_servo(claw,0,1.0);
    msleep(500);
    smart_servo(arm,75,1.0);
    msleep(800);
    */
    
    
    
    
    
    
    
timer = systime()-timer;
printf("\nThe total time is %d\n",timer);
    
    return 0;
    
}



