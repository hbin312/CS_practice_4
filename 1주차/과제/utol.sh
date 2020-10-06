echo working directory:
read dir
token=0

if [ ! $dir ]
  then
  token=1
elif [ -d $dir ]
  then
  cd $dir
  token=1
else
  echo ERROR! : 올바른 입력이 아닙니다.
  echo 접근할 수 있는 디렉토리를 입력해주십시오.
fi

if [ $token == '1' ]
 then
 for i in *
  do
   str=` echo $i | tr '[a-zA-Z]' '[A-Za-z]' `;
   if [ "$i" != "$str" ]
     then
     mv $i ` echo $i | tr '[a-zA-Z]' '[A-Za-z]' `;
   fi
  done
fi
