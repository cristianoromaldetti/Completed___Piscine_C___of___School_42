# day 01 Exercise 06

 - Напишите командную строку, которая отображает ls -l каждую следующую строку, начиная с первой.


---
---
---


Создадим файл скрипта:

	touch skip.sh





Поместим в него ВОТ ЭТОТ код отбражающий каждую вторую строку, начиная с первой (2,4,6,8):
```
#!/bin/sh
ls -l | awk 'NR % 2 == 1'
```






ИЛИ ЭТОТ:
```
#!/bin/sh
ls -l | sed 'n; d'
```




ИЛИ ЭТОТ:
```
#!/bin/sh
ls -l | sed '2!n;d'
```




> просто для примера.
>
> отбражаем каждую вторую строку, начиная со второй(1,3,5,7):
>
> ```
> ls -l | sed '1!n;d'

>или так:
>
>ls -l | sed -n "n;p"


---
---
---


## Документация.



https://losst.ru/ispolzovanie-awk-v-linux


https://itproffi.ru/komanda-sed-v-linux-vyvod-teksta-udalenie-zamena/


Google.com :)