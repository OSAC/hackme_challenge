hackme_challenge
================


A challenge posted on OSAC's facebook page (https://www.facebook.com/groups/osacchat/) with the following message

```
Hackers! Are you ready to face a challenge?<br/>
This is a program compiled for linux. Which

-> accepts an integer from command line argument .
-> compares that argv with a pre-stored 4-digit integer.
-> prints a msg and returns 0 if they match
-> returns 1 if they don't match


Write a program to find that pre-stored 4-digit number(pass-pin) using brute force. PM me the code.
hackme
```

******************
It was actually the third challenge on `hack_me` series. <br/>
. 1st hack_me, `hackme1` was to know string password hard-coded in program just by using `cat` or `strings` commands. <br/>
. 2nd hack_me, `hackme2` was to exploite buffer overflow vernability.<br/>
  When given long string as password it overwrite the flag and set it as true.<br/>
  And program behave as if correct password is entered.
