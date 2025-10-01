
┌──(debthacker㉿DESKTOP-MKJL2BP)-[~]
└─$ ssh bandit1@bandit.labs.overthewire.org -p 2220
                         _                     _ _ _
                        | |__   __ _ _ __   __| (_) |_
                        | '_ \ / _` | '_ \ / _` | | __|
                        | |_) | (_| | | | | (_| | | |_
                        |_.__/ \__,_|_| |_|\__,_|_|\__|


                      This is an OverTheWire game server.
            More information on http://www.overthewire.org/wargames

backend: gibson-1
bandit1@bandit.labs.overthewire.org's password:
Permission denied, please try again.
bandit1@bandit.labs.overthewire.org's password:

      ,----..            ,----,          .---.
     /   /   \         ,/   .`|         /. ./|
    /   .     :      ,`   .'  :     .--'.  ' ;
   .   /   ;.  \   ;    ;     /    /__./ \ : |
  .   ;   /  ` ; .'___,/    ,' .--'.  '   \' .
  ;   |  ; \ ; | |    :     | /___/ \ |    ' '
  |   :  | ; | ' ;    |.';  ; ;   \  \;      :
  .   |  ' ' ' : `----'  |  |  \   ;  `      |
  '   ;  \; /  |     '   :  ;   .   \    .\  ;
   \   \  ',  /      |   |  '    \   \   ' \ |
    ;   :    /       '   :  |     :   '  |--"
     \   \ .'        ;   |.'       \   \ ;
  www. `---` ver     '---' he       '---" ire.org


Welcome to OverTheWire!

If you find any problems, please report them to the #wargames channel on
discord or IRC.

--[ Playing the games ]--

  This machine might hold several wargames.
  If you are playing "somegame", then:

    * USERNAMES are somegame0, somegame1, ...
    * Most LEVELS are stored in /somegame/.
    * PASSWORDS for each level are stored in /etc/somegame_pass/.

  Write-access to homedirectories is disabled. It is advised to create a
  working directory with a hard-to-guess name in /tmp/.  You can use the
  command "mktemp -d" in order to generate a random and hard to guess
  directory in /tmp/.  Read-access to both /tmp/ is disabled and to /proc
  restricted so that users cannot snoop on eachother. Files and directories
  with easily guessable or short names will be periodically deleted! The /tmp
  directory is regularly wiped.
  Please play nice:

    * don't leave orphan processes running
    * don't leave exploit-files laying around
    * don't annoy other players
    * don't post passwords or spoilers
    * again, DONT POST SPOILERS!
      This includes writeups of your solution on your blog or website!

--[ Tips ]--

  This machine has a 64bit processor and many security-features enabled
  by default, although ASLR has been switched off.  The following
  compiler flags might be interesting:

    -m32                    compile for 32bit
    -fno-stack-protector    disable ProPolice
    -Wl,-z,norelro          disable relro

  In addition, the execstack tool can be used to flag the stack as
  executable on ELF binaries.

  Finally, network-access is limited for most levels by a local
  firewall.

--[ Tools ]--

 For your convenience we have installed a few useful tools which you can find
 in the following locations:

    * gef (https://github.com/hugsy/gef) in /opt/gef/
    * pwndbg (https://github.com/pwndbg/pwndbg) in /opt/pwndbg/
    * gdbinit (https://github.com/gdbinit/Gdbinit) in /opt/gdbinit/
    * pwntools (https://github.com/Gallopsled/pwntools)
    * radare2 (http://www.radare.org/)

--[ More information ]--

  For more information regarding individual wargames, visit
  http://www.overthewire.org/wargames/

  For support, questions or comments, contact us on discord or IRC.

  Enjoy your stay!

bandit1@bandit:~$ ls
-
bandit1@bandit:~$ cat -


^Z
[1]+  Stopped                 cat -
bandit1@bandit:~$ ls
-
bandit1@bandit:~$ ls -al
total 24
-rw-r-----   1 bandit2 bandit1   33 Aug 15 13:16 -
drwxr-xr-x   2 root    root    4096 Aug 15 13:16 .
drwxr-xr-x 150 root    root    4096 Aug 15 13:18 ..
-rw-r--r--   1 root    root     220 Mar 31  2024 .bash_logout
-rw-r--r--   1 root    root    3851 Aug 15 13:09 .bashrc
-rw-r--r--   1 root    root     807 Mar 31  2024 .profile
bandit1@bandit:~$ cat ./profile
cat: ./profile: No such file or directory
bandit1@bandit:~$ ls
-
bandit1@bandit:~$ cd ..
bandit1@bandit:/home$ ls
bandit0   bandit20      bandit3       behemoth0  drifter13    formulaone2  leviathan2  manpage7  narnia2  utumno4   vortex16  vortex5
bandit1   bandit21      bandit30      behemoth1  drifter14    formulaone3  leviathan3  maze0     narnia3  utumno5   vortex17  vortex6
bandit10  bandit22      bandit30-git  behemoth2  drifter15    formulaone5  leviathan4  maze1     narnia4  utumno6   vortex18  vortex7
bandit11  bandit23      bandit31      behemoth3  drifter2     formulaone6  leviathan5  maze2     narnia5  utumno7   vortex19  vortex8
bandit12  bandit24      bandit31-git  behemoth4  drifter3     krypton1     leviathan6  maze3     narnia6  utumno8   vortex2   vortex9
bandit13  bandit25      bandit32      behemoth5  drifter4     krypton2     leviathan7  maze4     narnia7  vortex0   vortex20
bandit14  bandit26      bandit33      behemoth6  drifter5     krypton3     manpage0    maze5     narnia8  vortex1   vortex21
bandit15  bandit27      bandit4       behemoth7  drifter6     krypton4     manpage1    maze6     narnia9  vortex10  vortex22
bandit16  bandit27-git  bandit5       behemoth8  drifter7     krypton5     manpage2    maze7     ubuntu   vortex11  vortex23
bandit17  bandit28      bandit6       drifter0   drifter8     krypton6     manpage3    maze8     utumno0  vortex12  vortex24
bandit18  bandit28-git  bandit7       drifter1   drifter9     krypton7     manpage4    maze9     utumno1  vortex13  vortex25
bandit19  bandit29      bandit8       drifter10  formulaone0  leviathan0   manpage5    narnia0   utumno2  vortex14  vortex3
bandit2   bandit29-git  bandit9       drifter12  formulaone1  leviathan1   manpage6    narnia1   utumno3  vortex15  vortex4
bandit1@bandit:/home$ cd bandit1
bandit1@bandit:~$ ls
-
bandit1@bandit:~$ cat -

^Z
[2]+  Stopped                 cat -
bandit1@bandit:~$ cat ./-
263JGJPfgU6LtdEvgfWU1XP5yac29mFx
bandit1@bandit:~$ ls
-
bandit1@bandit:~$


[Password is: 263JGJPfgU6LtdEvgfWU1XP5yac29mFx]




