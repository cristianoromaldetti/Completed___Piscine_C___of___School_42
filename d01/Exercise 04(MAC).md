# day 01 Exercise 04

 - Напишите командную строку, которая отображает MAC-адреса вашего компьютера. Каждый адрес будет сопровождаться переводом строки.

---
---
---

Создадим файл скрипта:

	touch MAC.sh



Запишем в срипт это:
```
#!/bin/sh
ifconfig | grep "ether" | sed "s/ether //" | cut -c 2- | tr -d ' ' | cut -b 1-17
```


или это:
```
#!/bin/sh
ifconfig | grep -o -E '([[:xdigit:]]{2}:){5}[[:xdigit:]]{1,2}'
```




или это:
```
#!/bin/sh
ifconfig | grep "ether" | sed 's/\(.*\)ether //g' | cut -b 1-17
```

---
---
---

## Документация.

Google.com :)