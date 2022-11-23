# 42minitalk

## Pasos para compilar y ejecutar Minitalk (parte obligatoria)
1. Al ejecutar <code>make</code>, compila dos archivos: <b>client</b> y <b>server</b>.
2. Tras eso, debemos ejecutar primero el <b>server</b>, que te mostrará el PID, y se queda esperando un mensaje.
3. Ahora, ejecutamos el <b>client</b>, con estos argumentos: <code>client PID-DE-SERVER "mensaje para mandar"</code>.
4. En el <b>server</b> se mostrará el mensaje que hemos mandado desde el <b>client</b>, el <b>server</b> seguirá abierto, y el <b>client</b> tras enviar el mensaje se cierra.
## Pasos para compilar y ejecutar Minitalk (parte bonus)
1. Al ejecutar <code>make bonus</code>, compila dos archivos: <b>client_bonus</b> y <b>server_bonus</b>.
2. Los pasos 2 y 3 son iguales a la parte obligatoria.
3. En el <b>server_bonus</b> se mostrará el mensaje, incluyendo emojis y cualquier símbolo Unicode.
4. En el <b>client_bonus</b> se muestra un mensaje cuando termina de enviarse el mensaje, y posteriormente se cierra.
