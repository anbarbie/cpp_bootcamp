#!/bin/bash

if [ -z "$1" ];
then
	printf "1 = param test\n2 = char test\n3 = int test\n4 = float test\n5 = double test\n"
	printf "Do you want to run all tests? [y/n]\n"
	read answer
	if [ ${answer} = "y" ];
	then
		./script.sh 1
		./script.sh 2
		./script.sh 3
		./script.sh 4
		./script.sh 5
	else
		printf "Which test do you want to run? [1-5]\n"
		printf "you can also run [./script.sh [1-5]] directly\n"
		read answer2
		if [ ${answer2} = "1" ] || [ ${answer2} = "2" ] || [ ${answer2} = "3" ] || [ ${answer2} = "4" ] || [ ${answer2} = "5" ]; then
			./script.sh ${answer2}
		fi
	fi
	exit 1
fi

case $1 in
    ''|*[!0-9]*) exit 2 ;;
    *) echo "" ;;
esac

if [ "$1" -eq 1 ];
then
	printf "\033[1m\033[34mTest 1 : parameters test\033[0m\n\n"

	printf "./Conv\n"
	./Conv
	printf "./Conv dsad dsada\n"
	./Conv dsad dsada
	printf "./Conv 12153f\n"
	./Conv 12153f
fi

if [ "$1" -eq 2 ]; then
printf "\n\033[1m\033[34mTest 2 : Char tests\033[0m\n\n"

printf "./Conv A\n"
./Conv A
printf "\n./Conv ' '\n"
./Conv ' '
printf "\n./Conv \"\"\n"
./Conv ""
fi

if [ "$1" -eq 3 ]; then
printf "\n\033[1m\033[34mTest 3 : Int tests\033[0m\n\n"
printf "./Conv 0"
./Conv 0
printf "\n./Conv -5\n"
./Conv -5
printf "\n./Conv 42\n"
./Conv 42
printf "\n./Conv 2147483648\n"
./Conv 2147483648
printf "\n./Conv -2147483649\n"
./Conv -2147483649
fi

if [ "$1" -eq 4 ]; then
printf "\n\033[1m\033[34mTest 4 : Float tests\033[0m\n\n"
printf "./Conv 0.0f\n"
./Conv 0.0f
printf "\n./Conv 4.2f\n"
./Conv 4.2f
printf "\n./Conv -4.2f\n"
./Conv -4.2f
printf "\n./Conv +inff\n"
./Conv +inff
printf "\n./Conv -inff\n"
./Conv -inff
printf "\n./Conv nanf\n"
./Conv nanf
printf "\n./Conv 440282346638528838671048075461970100224.0f\n"
./Conv 440282346638528838671048075461970100224.0f
printf "\n./Conv -440282346638528838671048075461970100224.0f\n"
./Conv -440282346638528838671048075461970100224.0f
fi

if [ "$1" -eq 5 ]; then
printf "\n\033[1m\033[34mTest 5 : Double tests\033[0m\n\n"
printf "./Conv 0.0\n"
./Conv 0.0
printf "\n./Conv 4.2\n"
./Conv 4.2
printf "\n./Conv -4.2\n"
./Conv -4.2
printf "\n./Conv +inf\n"
./Conv +inf
printf "\n./Conv -inf\n"
./Conv -inf
printf "\n./Conv nan\n"
./Conv nan
printf "\n./Conv double overflow\n"
./Conv 279769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000
printf "\n./Conv double underflow\n"
./Conv -279769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000
else
	exit
fi