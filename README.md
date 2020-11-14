<h2>Проект очередной погодной станции на Arduino.</h2>
<h3>Применены модули SGP30 и BME280.<h3>
<p>Для того что залить скетч, необходимо предварительно установить ядро Optiboot 8.0 или закомментировать один из режимов.</p>
<p>Тем кто предварительно захочет протестировать проект виртуально, оставляю ссылку на схему в <a href="https://www.circuito.io/app?components=97,97,11114,13813,35286,466193,999979">circuito.io</a></p>
  
<h3>Подключение OLED дисплея</h3>
<h4>OLED&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<p>D0&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;13</p>
<p>D1&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;11</p>
<p>CS&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;10</p>
<p>DC&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;9</p>
<p>RES&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;8</p>
<p>Vcc&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;5V</p>
<p>GND&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND</p>

<h3>Подключение датчика BME280</h3>
<h4>BME280&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
SDA&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A4
SCL&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A5
Vcc&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;6
GND&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND

<h3>Подключение датчика SGP30</h3>
<h4>SGP30&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
SDA&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A4
SCL&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A5
Vcc&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;7
GND&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND

<h3>Подключение приемника SYN470R/SYN480R</h3>
<h4>SYN480R&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
Data&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;2
Vcc&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;3
GND&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND

<h3>Подключение кнопок</h3>
<div>Кн.1&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;5</div>
<div>Кн.2&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;4</div>

