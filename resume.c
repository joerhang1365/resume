#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#define NAME "Joseph Ryan Hanger"
#define PHONE 6186127001
#define EMAIL "joerhang@gmail.com"
#define GITHUB "https://github.com/joerhang1365"

struct job
{
  char title[32];
  char company_name[32];
  uint32_t year;
  char description[512];
};

int main(int argc, char **argv)
{
  /* eduction */
  printf(
      "University Of Illinois Urbana-Champaign || Computer Engineering || Freshman\n"
      "Southwestern Illinois College || Associates of Science and Associates of"
      "Arts May 2023 || GPA: 3.8\n"
      "Red Bud High School || High School Diploma May 2023 || GPA: 3.9\n"
      );

  /* previous jobs */
  struct job job1 = 
  {
    .title = "Counselor/Tutor",
    .company_name = "AmeriCorps",
    .year = 2023,
    .description = 
      "Volunteered at the school Ellis Elementry in Belleville, IL. Was tasked"
      "with creating and executing activities, arts, crafts, and lessons for"
      "fifth grade students that relate to specific subjects such as STEM."
      "Volunteered at multiple other sites such as the Shelter Shop and TOCO"
      "Shop in Belleville, IL."
  };

  struct job job2 =
  {
    .title = "Manufacturing Internship",
    .company_name = "Roeslein & Associates, Inc.",
    .year = 2022,
    .description =
      "Worked in the assembly line and the electrical department. The assembly"
      "line helped create railings for conveyor belts. The electrical department"
      "created dividers put under platforms which separated the high voltage"
      "lines for the lower voltage lines. Helped install the dividers onto the"
      "platforms."
  };

  struct job job3 = 
  {
    .title = "Lifeguard",
    .company_name = "Red Bud YMCA",
    .year = 2021,
    .description =
      "Supervised and monitored the Red Bud pool. Made sure that swimmers"
      "abided by the rules and practiced safe swimming. Cleaned and prepped"
      "the pool before and after opening. Received training and certificates"
      "for Basic Life Support, Basic First Aid, and Emergency Oxygen."
  };

  /* experience and skills */
  int16_t blender_modeling, lathe_machining, vertical_mill_machining,
          mig_welding, stick_welding, wood_working, video_editing, web_design = 255;
  bool CPR = true;

 
  /* hobbies and clubs */
  int8_t national_honors_society, cross_country, track, waterloo_municipal_band,
         game_development, future_buisness_leaders_of_america, academi_challenge,
         rock_climbig, illinois_robotics_in_space = 127;

  /* projects */
  char W650C2S_2023[512] = 
    "Created a 8-bit computer using a W65C02S microprocessor and bread boards."
    "This project was inspired by a video series created by Ben Eater"
    "(youtube series link: https://www.youtube.com/watch?v=LnzuMJLZRdU). In the"
    "end I created a functional 8-bit computer that could be programmed using an"
    "EEPROM and 6502 assembly. Right now the computer can output text to an"
    "analog display. I am currently designing a PCB for the computer will create a"
    "basic operating system.";

  char national_honors_society_website_2022[512] =
    "Made a website for my National Honors Society project about the history of"
    "my small town Red Bud Illinois. For this project I used HTML and Java Web"
    "Applications to create a website. The address to the site is linked here:"
    "http://nhsproject-env.eba-vtud76qd.us-east-1.elasticbeanstalk.com/."
    "While making this project I learned about receiving and sending data using"
    "HTTPS and Java logic for web user input.";

  // check out more of my projects on github.

  return 0;
}
