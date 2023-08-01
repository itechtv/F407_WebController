var langbutton = new Array();
langbutton[1] = "ID - уникальный числовой идентификатор кнопки. Будет использоваться при настройке соединений (можно задавать просто по порядку)";
langbutton[2] = "Pin - номер пина (цифрового или аналогового), куда подключена кнопка.";
langbutton[3] = "Pullup type - тип подтяжки: ";
langbutton[4] = "Bounce interval (ms) - интервал подавления дребезга контактов (мс). Обычно 40мс достаточно.";
langbutton[5] = "Hold interval (ms) - время в мс, которое нужно удерживать кнопку, чтобы она перешла в состояние Hold (удержание).";
langbutton[6] = "Repeat - 1 или 0 - включить или выключить автоповтор нажатия в режиме удержания.";
langbutton[7] = "Repeat interval (ms) - интервал в мс, с которым повторять нажатия в режиме удержания (Repeat должно быть 1). Я обычно использую 150мс.";
langbutton[8] = "Double-click interval (ms) - интервал в мс, в течение которого два последовательных нажатия кнопки сгенерируют событие DoubleClick. 0 - не отслеживать двойное нажатие. Я обычно использую 800мс.";
langbutton[9] = "Prevent Click - 1 или 0 - предотвращать(1) генерацию события Click при первом нажатии, если за ним последовал DoubleClick. Имеет смысл только если Double-click interval больше нуля.";
langbutton[10] = "Relay connection - Здесь указаны пины одного реле или несколько с которыми взаимодействует данная кнопка."
langbutton[11] = "INFO - Дайте название данной кнопки для быстрой навигации на пример \"Кухня\", \"Детская\" и т.д. Не более 30-ти символов!"
langbutton[12] = "On/Off - \"Вкл\"\"Откл\" данный выключатель."
langbutton[13] = "Action - Нет идей как назвать этот пункт!"

var langrelay = new Array();
langrelay[1] = "ID - уникальный числовой идентификатор реле. Будет использоваться при настройке соединений (можно задавать просто по порядку)";
langrelay[2] = "Pin - номер пина, к которому подключено управляемое устройство.";
langrelay[3] = "PWM frequency (Hz) - частота ШИМ в герцах. Если 0 - то ШИМ не используется.";
langrelay[4] = "On - состояние выхода - 1-вкл, 0-выкл.";
langrelay[5] = "Invert State - инверсия порта (Выкл - на выходе логическая 1, вкл - 0).";
langrelay[6] = "Dimmer value - если используется ШИМ - его скважность (0-255).";
langrelay[7] = "PowerOn Restore - какие параметры нужно сохранять при изменении и восстановить при включении контроллера None - ничего не сохранять, при включении состояние и значение равны установленным при конфигурировании. State - восстанавливать последнее установленное состояние параметра On. Value - восстанавливать последнее установленное значение диммера (ШИМ). State&Value - восстанавливать состояние и значение.";
langrelay[8] = "INFO - Дайте название реле для быстрой навигации на пример \"Кухня\", \"Детская\" и т.д. Не более 30-ти символов! "
langrelay[9] = "On/Off - \"Вкл\"/\"Откл\" данное реле."
langrelay[10] = "Action - Нет идей как назвать этот пункт!"