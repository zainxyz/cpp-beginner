# TripleX

> You're Lightning McQueen, and are trying to win your first "Piston Cup".
>
> After blowing out your rear tires, your pit crew has set you up with a brand new set of Nitto(s).
>
> Your now a few laps behind, but have enough NOS tanks to get you back in the lead.
>
> However, you seem to have forgotten the 3 digit lock combination to your tanks.
>
> Play through 'TripleX' to remember the combination, unlock your NOS tanks, and win the "Piston Cup".

## Compiling

You can run the following command in order to easily compile and run the 'TripleX' application:

```bash
# macOS
g++ triplex.cpp -o triplex && clear && triplex
# Windows
cl triplex.cpp && cls && triplex
```

## Playing

The label on your NOS tanks has some helpful hints, which will be printed out at the start of the game.

```bash
You're Lightning McQueen, and want to unlock your full potential!
Your NOS tank has a 3 digit lock on it, and the label underneath reads...
```

You'll then be provided with two hints, as to the SUM and PRODUCT of the 3 numbers in the code:

```bash
+ There are 3 numbers in the code.
+ The codes add-up to: 6
+ The codes multiply to: 6

Please enter your guess for the codes, (1 2 3) :
```

You must enter the correct combination to unlock and win the race!

```bash
Fantastic! You've unlocked the NOS tank and are on your way to win the race!
```

Otherwise, you'll fail miserably, and we can't guarantee your victory...

```bash
Sorry, but the code you entered doesn't match the records.
You've failed to unlock your NOS tank(s) and might loose the race. Good luck!
```

Have fun playing!
