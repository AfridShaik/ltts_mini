# Student Report Card

![Banner](https://github.com/AfridShaik/ltts_mini/blob/main/1-Requirments/banner.jpg)

Codacy | Code Coverage | Unity | Build 
|---------|--------------|-----------|------------------
|[![Codacy Badge](https://api.codacy.com/project/badge/Grade/93e8384776f44d0c971c1b03171b0bc9)](https://app.codacy.com/gh/AfridShaik/ltts_mini?utm_source=github.com&utm_medium=referral&utm_content=AfridShaik/ltts_mini&utm_campaign=Badge_Grade_Settings) |[![CI](https://github.com/AfridShaik/ltts_mini/actions/workflows/main.yml/badge.svg)](https://github.com/AfridShaik/ltts_mini/actions/workflows/main.yml)|[![Unit Testing - Unity](https://github.com/AfridShaik/ltts_mini/actions/workflows/unity.yml/badge.svg)](https://github.com/AfridShaik/ltts_mini/actions/workflows/unity.yml)| [![C/C++ CI - Build Status](https://github.com/AfridShaik/ltts_mini/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/AfridShaik/ltts_mini/actions/workflows/c-cpp.yml) 


| Code Quality - Static analysis | Code Quality - Dynamic analysis
|------------------|------------------
 | [![Code Quality - Static Code - Cppcheck](https://github.com/AfridShaik/ltts_mini/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/AfridShaik/ltts_mini/actions/workflows/cppcheck.yml)|[![Code Quality Dynamic Code Analysis Valgrind](https://github.com/AfridShaik/ltts_mini/actions/workflows/Valgring.yml/badge.svg)](https://github.com/AfridShaik/ltts_mini/actions/workflows/Valgring.yml)

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1-Requirements`   | Documents detailing requirements and research
`2-Design`         | Documents specifying design details
`3-Implementation` | All code and documentation
`4-Test_plan`      | All the 23 Test Plans
`5-Images`         | All the output files are updated   



# Requirements
## Introduction
 * When I was in college, we had a lot of problems calculating internal marks and external marks for our mid and weekly test exams because one student uses one logic while another uses another without knowing which logic to use, and some students use the correct logic but something goes wrong during calculations, so I decided to make a software that can measure the students marks and add some extra features like calculating their CGPA, Percentage etc
 * In this project, we will generate a report for the student based on their information and grades to determine whether or not they passed the semester exams.

### Benefits
Users will measure their grades before and after exams and strive for high grades.
 
 
 


## Contributors List and Summary

SF Id. |  Name   |    Features    |No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|
`293653` | Afrid Ali Shaik  | Get a detail report text file    | 0    |23   

### Explanation:
* Student Report:
    * Create a comprehensive personal report for each student.
    * Students should save their personal information in a text file.
    * Student can calculate their internal marks.
    * Students should figure out their external grades.


# 4W&#39;s and 1&#39;H

## Who:
* Students can use this to measure their grades to determine whether or not they completed the semester.

## What:
* Student can calculate their internals and external marks

## When:
* If a student wants to know how well he did this semester, he should look at his grades.

## Where:
* Since a student needs to do well in college, he can measure his grades ahead of time and analyse how to pass the semester exams.

## How:
* Calculating their marks manually for each subject would be a time-consuming operation, and if anything goes wrong, the whole process will have to be repeated from the beginning..

## Cost and Features
The Student Report Card Generates the report card of the student with all his/her details

#### output will be in txt file
- Name, Registration Number, Year, Branch, Age
- Marks Input
- Calculate accurate marks
- The file will not be changed unit you add or change the details manually



## Defining Our System
The Student Report Card Has 3 
1. Student Details
2. Marks Input
3. Calculate the marks


### SWOT Analysis

![Banner](https://github.com/AfridShaik/ltts_mini/blob/main/2-Design/swot.png)


# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| 1 | A comprehensive report of a student's grades can be produced. | Techincal | TBD-S1 | 
| 2 | Students will see if they passed or failed their semester exams.| Techincal | TBD-S1 |
| 3 | In their student information, students can choose a course. | Techincal | TBD-S1 |
| 4 | Students may choose their preferred year. | Techincal | TBD-S1 |
| 5 | Students may compute their internal and external grades. | Techincal | TBD-S1 |


## Low Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| 1 | A text file will be created in thet file all the detials like name,registration number,year,branch,age,internal amrks exxternal marks and weather you have passed the semister or not all will be created in a text file which user can see  | Techincal | TBD-S1 | 
| 2 | At the end of the report all the internal and externals are to be calculated inter maximum makrs are 40 minimum marks are 18 and in external marks are maimum marks are 60 minumum marks are 24 and attendance marks are maximum marks are 4 minimun marks are 1 all will be calculated to geated and if he gets above 50 he is passed and less than 50 failed in semister exams.| Techincal | TBD-S1 |
| 3 | The student will choose a preferred course, such as CSE, IT, or ECE, which will be shown on the report card. | Techincal | TBD-S1 |
| 4 | Students have the option of choosing which year they want to study in! first year, second year, third year, fourth year | Techincal | TBD-S1 |
| 5 | The internals and externals marks of each student will be measured separately. | Techincal | TBD-S1 |
