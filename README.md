# Completed Task of the Piscine C
##############################################################################################

 • Этот репозиторий содержит множество версий выполненных задач на каждый день самого первого басейна по Си. 



 • На данный момент выполнена работа по проверке заданий на корректную работоспособность у папки "Exam_C", "Rush00", "Rush01" и папок от d00 до d11 включительно.



 • Каждая папка каждого дня содержит pdf файл с заданиями написаные на английском либо французском языке. 



 • Также, каждая папка каждого дня содержит папку с заданием(например(./d03/ex00/)), в которой содержится одиночный файл(или группа файлов) с требуемым названием, а внутри этого файла будут находиться несколько версий выполения этого задания, которые разделены между собой тройной строкой комментария. 




 • Если задание требует содержать в себе несколько файлов(такие задания будут ближе к концу) то тогда версии его выполнения будут разделены по папкам. Например:  "./d10/ex06/Solution_00/", "./d10/ex06/Solution_01/", "./d10/ex06/Solution_02/", и т.д.




 • Так же папка задания будет содержать тестовый файл или папку с тестовыми файлами, скомпилировав которые можно запустить получившуюся программу и увидеть то как работает требуемая в заданиии функция(или нескотлько функций).

##############################################################################################

Что бы скомпилировать файл "test.c" откройте окно терминала и перейдите в папку где находится этот файл (допустим у меня он лежит в папке Документы): 

      cd ~/Документы


Далее напишите в окне терминала имя программы-компилятора(с помощью которого вы будете перобразовывать наш файл с текстовыми инструкциями в машинный код понятный процессору).


После имени программы компилятора напишите параметры компиляции и путь до файла(у нас он будет в дериктории в которой мы уже находимся так что мы адрес запишем так "./test.c" ). 


В терминале у вас должна получиться вот такая команда для компиляции файла с исходным кодом(на языке Cи) в исполняемый файл понятный процессору :  

      gcc -Wall -Werror -Wextra test.c 


Далее нажимаем Enter и на выходе(если у вас unix система) получим файл "a.out". Но если у вас система windows на выходе вы получите файл "a.exe". 


На выходе из компилятора исполняемый файл с программой появиться в той дерриктории, в которую вы перешли в через окно терминала(в котором компилировали файл с исходным кодом).

##############################################################################################

Если у вас Windows запустить программму можно просто написав в окне терминала путь к ней (./a.exe)


Если у вас Linux или др операционная система семейства Unix то здесь, чтобы система позволила вам запустить исполняемый файл с созданной вами программой, перед запуском необходимо дать этому исполняемому файлу права на выполнение, иначе запустить его не позволит система. Даем нашему исполняемому файлу права на выполнение вот такой командой прописав путь к нашему файлу:  

      chmod +x ./a.out


Вот теперь её можно запустить(чтобы это сделать напишите в окне терминала путь к ней): 

      ./a.out


##############################################################################################

Чтобы не терять время, можно все команды соединить в одну строку записав в окне терминала вот так:  

        gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out