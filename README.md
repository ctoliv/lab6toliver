# Lab 6 - Moving Custom Sprite with Collision

This repository contains my Lab 6 project for CPSC 440 Game Programming.

## Description

This project modifies the Moving Custom Sprite with Collision starter code. The player controls a custom ship bitmap created from my previous lab. The goal is to move the ship and collide with as many bullets as possible before the 30-second timer runs out.

The program displays the countdown timer and score at the bottom of the screen.

## Features

- Custom ship/player bitmap from Lab 5
- Custom bullet bitmap made with Allegro primitives
- Bullet bitmap uses at least two primitives and two colors
- 30-second countdown timer
- Timer displayed on screen
- Score displayed on screen
- Collision detection between the ship and bullets
- Score increases when the ship collides with bullets
- Timer and score display appear in the bottom
- Escape key closes the program

## Controls

- Up Arrow: Move ship up
- Down Arrow: Move ship down
- Left Arrow: Move ship left
- Right Arrow: Move ship right
- Escape: Close the program

## Project Files

- `movingCustom.cpp` - Main game loop, timer, score display, and event handling
- `arrow.cpp` - Custom ship bitmap, movement, and drawing
- `arrow.h` - Ship class definition
- `bullet.cpp` - Custom bullet bitmap, bullet movement, and collision detection
- `bullet.h` - Bullet class definition

## How to Run

1. Open `Moving Custom Sprite.sln` in Visual Studio.
2. Restore NuGet packages if Visual Studio asks.
3. Make sure Allegro is installed through NuGet.
4. Make sure the required Allegro add-ons are enabled:
   - Primitives Addon
   - Font Addon
5. Build and run the project.
6. Use the arrow keys to move the ship and collide with bullets before time runs out.

## Author

Christian Toliver
