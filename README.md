# Ngrok_backdoor_auto_update_with_persistence
Backdoor using nc, in c++ with persistence mode

-------------------------------------------------------------------------------
### Backdoor auto update ngrok
-------------------------------------------------------------------------------

 This backdoor made in c ++ for windows uses a pastebin link with the ngrok url
and port to keep it always up to date, for free accounts where the link is
changed at each new connection.
 
 -------------------------------------------------------------------------------
 
 Change the var $url for your raw pastebin link.
example: > https://pastebin.com/raw/zMhN9N3s (printscreen)

-------------------------------------------------------------------------------

 In the first line of the file you must put the link ngrok, and the port separated by "|".
example: > 0.ngrok.com|4444 (printscreen)

-------------------------------------------------------------------------------

 On the second line, the link to paste the file, for example, containing nc.exe
example: > https://www.pastefile.com/fwcfw5 (printscreen)

-------------------------------------------------------------------------------

 The program will download nc, get ngrok link, and port from pastebin, and start a
conection, giving cmd.exe for you.

 If the first connection dont work, it try every 3 minutes.
 
 > By Rob <
