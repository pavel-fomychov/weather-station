<h2>Проект очередной погодной станции на Arduino.</h2>

<img src="https://raw.githubusercontent.com/pavel-fomychov/weather-station/main/IMG_20201125_195030.jpg" height="300">

<h3>Применены модули SGP30 и BME280.<h3>

<img src="https://raw.githubusercontent.com/pavel-fomychov/weather-station/main/IMG_20201125_194944.jpg" height="300">

<p>Для того что залить скетч, необходимо предварительно установить ядро Optiboot 8.0 или закомментировать один из режимов.</p>
<p>Тем кто предварительно захочет протестировать проект виртуально, оставляю ссылку на схему в <a href="https://www.circuito.io/app?components=97,97,11114,13813,35286,466193,999979">circuito.io</a></p>

<img src="https://raw.githubusercontent.com/pavel-fomychov/weather-station/main/IMG_20201125_194918.jpg" height="300">

<img src="https://raw.githubusercontent.com/pavel-fomychov/weather-station/main/IMG_20201125_195118.jpg" height="300">
  
<h3>Подключение OLED дисплея</h3>
<h4>OLED&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<div>D0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;13</div>
<div>D1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;11</div>
<div>CS&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;10</div>
<div>DC&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;9</div>
<div>RES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;8</div>
<div>Vcc&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;5V</div>
<div>GND&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND</div>

<h3>Подключение датчика BME280</h3>
<h4>BME280&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<div>SDA&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A4</div>
<div>SCL&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A5</div>
<div>Vcc&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;6</div>
<div>GND&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND</div>

<h3>Подключение датчика SGP30</h3>
<h4>SGP30&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<div>SDA&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A4</div>
<div>SCL&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A5</div>
<div>Vcc&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;7</div>
<div>GND&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND</div>

<h3>Подключение приемника SYN470R/SYN480R</h3>
<h4>SYN480R&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<div>Data&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;2</div>
<div>Vcc&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;3</div>
<div>GND&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND</div>

<h3>Подключение кнопок</h3>
<h4>Кнопка&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<div>Кн.1&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;5</div>
<div>Кн.2&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;4</div>

<br>
<hr>
<br>

<h2>Выносной модуль</h2>
<h3>Подключение датчика AHT10</h3>
<h4>AHT10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<div>SDA&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A4</div>
<div>SCL&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A5</div>
<div>Vcc&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;Vcc</div>
<div>GND&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND</div>


<h3>Подключение передатчика SYN115</h3>
<h4>SYN115&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<div>Data&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;2</div>
<div>Vcc&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;Vcc</div>
<div>GND&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND</div>
