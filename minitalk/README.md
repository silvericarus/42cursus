# 🎤minitalk🎧
## No funny phrase this time
<a href="https://creativecommons.org/licenses/by-nc-sa/4.0/"><img src="https://licensebuttons.net/l/by-nc-sa/4.0/88x31.png" alt="CC BY-NC-SA 4.0 License"></a>
## Steps to compile and execute Minitalk (mandatory part)
1. When executing `make`, it compiles two files: `client` and `server`.
2. After that, we must first execute the `server`, which will show you the PID and will wait for a message.
3. Now, we run the `client` with these arguments: `client SERVER-PID "message to send"`.
4. In the `server`, the message sent from the `client` will be displayed, and the `server` will remain open, while the `client` closes after sending the message.
## Steps to compile and execute Minitalk (bonus part)
1. When executing `make bonus`, it compiles two files: `client_bonus` and `server_bonus`.
2. Steps 2 and 3 are the same as in the mandatory part.
3. In the `server_bonus`, the message will be displayed, including emojis and any Unicode symbol.
4. In the `client_bonus`, a message is shown when the message finishes sending, and then it closes.
