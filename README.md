<h2>Проект очередной погодной станции на Arduino.</h2>
<h3>Применены модули SGP30 и BME280.<h3>
<p>Для того что залить скетч, необходимо предварительно установить ядро Optiboot 8.0 или закомментировать один из режимов.</p>
<p>Тем кто предварительно захочет протестировать проект виртуально, оставляю ссылку на схему в <a href="https://www.circuito.io/app?components=97,97,11114,13813,35286,466193,999979">circuito.io</a></p>
  
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
<h4>SGP30&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<div>SDA&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A4</div>
<div>SCL&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;A5</div>
<div>Vcc&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;7</div>
<div>GND&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND</div>

<h3>Подключение приемника SYN470R/SYN480R</h3>
<h4>SYN480R&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Аrduino</h4>
<div>Data&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;2</div>
<div>Vcc&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;3</div>
<div>GND&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;GND</div>

<h3>Подключение кнопок</h3>
<div>Кн.1&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;5</div>
<div>Кн.2&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;4</div>

