#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.1415926
// ang=角度　result=小数での答え sign=符号 fg=modeSwich
int main()
{
	 double inputNum, result, ang, X;
	 char Y, sign, sct, fg;
	 int mn, rnd, second=0.5, base, r, one=1, i;
	 double bunsi, bunbo;
	
		//ウィンドウサイズは横120, 縦35文字以上表示できるようにしてください
                printf("  (Xk+,\n");
                printf("    XppR.                                             (tt:\n");
                printf("    jbb[                                             `(tI  \n");
                printf("     bb[                          .   ...+.   ........JrI....(z1-\n"); 
                printf("     (kk[     7Wk+.                ?Z77~JV^`           (rI               ..          .         (z-. ...<i\n");
                printf("     ,kk[  ..Jwppppk,  jk+            .Z!             `(rI      .z.      ?tz(.((((+zzti.        1l   ->\n");
                printf("     4qhdWkbWUY777>   ,Wl.(wn.     .XC_~<+-._????????wvrr<!!!!!!!!!       ll.`      (lv` -. ....+l.-((+z-    ..(+<__..\n");
                printf("    .+WHWY=!       (TYTWf7?!      .w=`     (u<      .wzzvI(o.             zl_       (l>   ?<?!~`1z      `  .+!  .l>   ?1.\n");
                printf(" .(HB'!                d/..dk... .=` ._(.  .Z/     .zZ!jzI .Oo-.          1l_       +l~     .   +z  ~-.   .v!   zv     (t-\n");
		sleep(1);
                printf(".HY`                 .JW: -W> -4k,  .1..Jn.Z=    .wC!  (uI   ?OrO+..      (t:       lv     .v   +l   (zz. l:   (v`     .l>\n");
                printf("WP                 (K' dl.X'   .fW~    ```     .v!     (uI     ?zrC!      .tOz1<<<<<<<>  .zl: . zl    (z!.l!  .v`      (l!\n");
                printf("Hh.             . dH`  ,bR`    .fS`          _`       `(uI                 ?!                  ?zv        ?i.+<      .Jv`\n");
                printf(",H@HmQa+++gQkWHmqmdHnJV=?Y`  ..X=`                     _!`                                                  !'    -?!\n");
                printf("  _7YWHHHHHHHHHHHY-        .<?/''\n"); 
		sleep(1);
		
                  printf("\n\n\n");    
                  printf("JHHMM@@@@@@@@@UgggHHmmmmmmqqKTkr                                             .zi.                .llv!      (-\n");
                  printf("JH@F .7YWWYYY  ?Wgb  ?YUU9UY  .^       `                      <<<<<<?Oww<<?<?<<<<!       `       .llz......+llO-\n");
                  printf("JHHF   Qmmmmk    db   jQQQQm     (.   bpV!.&.   Xk+,       .l       .Ouu.        .z.         `   .llv```````````\n");
                  printf("JHHF   ''''''   d@b   ?'''''   . .WH; bb{ dWY^ .pfr`      .y0`````_`_wuu`````.```wvvo.    ..     .ll>     ..\n");
                  printf("JHHF   MH@H@@   d@b   dggggH   .  ?9C bk>v=(e. jpf   .(. dyy$((((JVI-dZu ((((OC_.Z>`      rtz-....llz.....ll<.\n");
                  printf("J#HF   '''''=   d@b   ?'''''   .?777jWkkY77'77(WW+...XUUI?7=     .&, dZZ      .+-.        rrr.            +llv`\n");
                  printf("J##F   MHHHH8 ..d@N. .d@@ggH   `   .WkqkVGJ,  df`  dpk~    .????????~dZ0 !!!!!!!!!        rrr.            +ll~\n");
                  printf("J##F   MHHHMp  ?M@@|  ?H@@gH   . .J9= qq{ 4kr(Yw.  pp$     .WA+-.....((-......wX..        vrr<<<<<<<<<<<<?zll~\n");
                  printf("J##F   MHHHHM,  dH@ .JY ?W@H    ?^   JqK^  (J! (o .pW}     .VVS     (yy$      wuu=        vvr`            +ll~\n");
                  printf("JNNF   MMn((((..```.(-....dH    ..jjJmHi...qkh,.Wldpf      ,ffk+((((Jyyk((((((wZu~        zzz_            jtl~\n");
                  printf("JNNF   M###HHHH$  .HH@MY_TMH   .  .JgK! .mw/    ?kkK!      ,ffk     (yy0      wZu~ ..     uzz<<<<<rrZ!!!!?ztt~\n");
                  printf("JMNF   MY'''''''  ('''''^   .H   . .Xg9&-.WH^     (kkH+.     ,ppS777<<zVyS<<<<<?XZu~.Z      777    .rrI     _`  (-\n");
                  printf("JMMF   M#######   dMHHHH@H@M   .   ! .ugmgH,  .d9^(WkHa.   ,pW$     (VVS      ~! .dI             .vrI       .Jttz-\n");
                  printf("JMMF   MNNNN#M^  (a. ?TMHH@M   .  .(XB'` ?U9(dY!    7Wk9=           .fVVWXyXXZZZZZZZk.ppppppppppppvvZpppppp!!!!!!!\n");
                  printf("JMMF   MNNNNM^ .(#HN,  .HHHM   . ~        ?^`         !               pppppppppppp!`             .zzI\n");
                  printf("JMMF   MMMMY .JMN###M,  ._`    .                                                                 .zuI\n");
                  printf("JMMF  .MMh(gMNNNN####MQMHHb   .:                                                                .uzI\n");
                  printf("?''''''''''''''''''''''''''!?7'^                                                                  ?!`\n");
		  sleep(5);
		//オープニング終了
	 //デモプレイ
	printf("\n\n\n");
	printf("*デモプレイ*\n\n");
	sleep(second);
	printf("モード選択　　　n:数字 b:分数 e:累乗　s:√ f:三角関数 a:逆三角関数\n");
	printf("0\n");
	sleep(second);
	printf("input 三角関数\n");
	sleep(second);
	printf("s30　　　sin30と入れたい場合はs30と入れてください\n");
	sleep(second);
	printf("sin 30.0(deg) = 0.500\n");
	sleep(second);
	printf("モード選択　　　最初と同じくモード選択してください\n");
	sleep(second);
	printf("1\n");
	sleep(second);
	printf("input sign　　　+ - * / のどれかを入力してください\n");
	sleep(second);
	printf("+\n");
	printf("input nunber\n");
	sleep(second);
	printf("5\n");
	sleep(second);

	printf("ansew:5.5　　　答えが出力されます\n");
	sleep(second);
	printf("続けますか？はい...y いいえ...n　　　ここでyを押すと続けて計算できます\n");
	sleep(second);
	printf("n　　　\n");
	sleep(second);
	printf("\n");
	sleep(second);
	printf("   制作・著作\n");
	printf(" ━━━━━━━━━━━━━━━\n");
	printf("　① ⑨ Ⓒ ① ⓪ ④ ④\n");  
	printf("       終\n\n");
	printf("*デモプレイ終了*\n");
	printf("---------------------------------------------------------------\n");
	  //デモプレイ終了

	 /* 茶番　開始します*/
 	 srand(time(NULL));
 	 rnd = rand() % 6 ;

	switch(rnd){
		 case 0:
			printf("Don't want to calculate  \n");
			sleep(second);
			exit(0);
		 case 1:
			printf("手計算は不安よな。\n\n関数電卓　動きます。\n\n");
			break;
		 case 2:
			printf("私の学番下2桁は何でしょう？\n");
			scanf(" %d", &mn);
			if(mn == 44){
			printf("Correct answer!\n");
			}
			else {
			printf("Incorrect answer\nTips: Look at the tutorial again\n");
			exit(0);
			}	
	     
	}
			
					
	//茶番終わり

	 printf("モード選択\n");
	 scanf(" %c", &fg);

	switch (fg){
	 case 'n':
	 	printf("input number\n"); //最初の数字を入力
	 	scanf(" %lf", &result);
	 	break;
	 case 'b':
	 	printf("input 分母\n"); //分母を入力
	 	scanf(" %lf", &bunbo);
		printf("input 分子\n");//分子を入力
		scanf(" %lf", &bunsi);
		result = (bunsi / bunbo);
		printf("小数表記で表すと:%g\n", result);
	 	break;
	 case 'e':
		printf("底 = ");
	  	scanf("%d", &base);
	 
	 	printf("指数 = ");
	  	scanf("%d", &r);
	  	i = r;
	 
	  	/* 数値の累乗を計算 */
	  	for (i = r; i > 0; i--){
	  	  one = one * base;
	  	}
	 	result = one;  
		printf(" %lf\n", result);
		break;

	 case 's':
		printf("√の中身を入力してください\n");
		scanf(" %lf", &X);
		result = sqrt(X);
		printf("小数表記で表すと:%g\n", result);
		break;

	 case 'f':
	 	printf("input 三角関数\n"); //最初の関数を入力
	 	scanf(" %c", &sct);// sin cos tan どれつかうのか
	 	scanf(" %lf", &ang);// 数値部分の入力

		switch(sct){
		 case 's':	
			 result = sin( ang*PI/180.0);
			 printf( "sin %.1lf(deg) = %.3lf\n", ang, result );
			 break;

		 case 'c':	
			 result = cos( ang*PI/180.0);
			 printf( "cos %.1lf(deg) = %.3lf\n", ang, result );
			 break;
		 case 't':	
			 result = tan( ang*PI/180.0);
			 printf( "tan %.1lf(deg) = %.3lf\n", ang, result );
		 	 break;
		 default : 
			printf("不正な入力です\n");
			break;	
		}
		break;

	  case 'a':
	 	printf("input 逆三角関数\n"); //最初の関数を入力
	 	scanf(" %c", &sct);// sin cos tan どれつかうのか
	 	scanf(" %lf", &ang);// 数値部分の入力

		switch(sct){
		 case 's':
			 result = asin(ang);        
                         printf("asin %.1lf(deg) = %.3lf\n",ang,  result);  
			 break;

		 case 'c':	
			  result = acos(ang);        
                          printf("acos %.1lf(deg) = %.3lf\n",ang,  result);  
			  break;
		 case 't':
			  result = atan(ang);        
                          printf("atan %.1lf(deg) = %.3lf\n",ang,  result);  	
		 	  break;
		default:
			break;
		 	}
		break;//case'a'
	}	
			


 	while(1){
	 printf("input sign\n");//符号を入力
	 scanf(" %c", &sign);
	 printf("モード選択\n");
	 scanf(" %c", &fg);
	 
	 
		switch(fg){
		 case 'n':
			printf("input nunber\n");//n回目の数字を入力
		 	scanf(" %lf", &inputNum);
			break;//case'n'
		 case 'b':
		 	printf("input 分母\n"); //分母を入力
		 	scanf(" %lf", &bunbo);
			printf("input 分子\n");//分子を入力
			scanf(" %lf", &bunsi);
			inputNum = (bunsi / bunbo);
			printf("少数表記で表すと:%g\n", inputNum);
		 	break;//case'b'
		 case 'e':
			one = 1;
			printf("底 = ");
		  	scanf(" %d", &base);
		 
		 	printf("指数 = ");
		  	scanf(" %d", &r);
		  	i = r;
		 
		  	/* 数値の累乗を計算 */
		  	for (i = r; i > 0; i--){
		  	  one = one * base;
		  	}
		 	inputNum = one;  
			printf(" %lf\n", inputNum);
			break;
		 case 's':
			
			printf("input √の中身を入力してください\n");
			scanf(" %lf", &X);
			inputNum = sqrt(X);
			printf("少数表記で表すと:%g\n", inputNum);
			break;//case's'

		 case 'f':
			printf("input 三角関数\n");
		 	scanf(" %c", &sct);//n回目の　sin cos tan どれつかうのか
		 	scanf(" %lf", &ang);// 数値部分の入力
			
			 switch(sct){
				 case 's':	
				 inputNum = sin( ang*PI/180.0);
				 printf( "sin %.1lf(deg) = %.3lf\n", ang, inputNum );
				 break;

				 case 'c':	
				 inputNum = cos( ang*PI/180.0);
				 printf( "cos %.1lf(deg) = %.3lf\n", ang, inputNum );
				 break;

				 case 't':	
				 inputNum = tan( ang*PI/180.0);
				 printf( "tan %.1lf(deg) = %.3lf\n", ang, inputNum );
				 break;
			}break;//case'f'
		
		 case 'a':
	 		printf("input ｎ逆三角関数\n"); //n回目の関数を入力
	 		scanf(" %c", &sct);// sin cos tan どれつかうのか
	 		scanf(" %lf", &ang);// 数値部分の入力

			switch(sct){
				 case 's':
				 	 inputNum = asin(ang);        
		        	 	 printf("asin %.1lf(deg) = %.3lf\n",ang,  result);  
	  			 	 break;
		
				 case 'c':	
					  inputNum = acos(ang);        
		        	          printf("acos %.1lf(deg) = %.3lf\n",ang,  result);  
					  break;
				 case 't':
					  inputNum = atan(ang);        
		        	          printf("atan %.1lf(deg) = %.3lf\n",ang,  result);  
				 	  break;
				default:
				 	 printf("エラー\n");
				       	 break;
			}

		}

		 switch(sign){
		 	case '+':
		 		result += inputNum;
		 	 	break;
		 	case '-':
		 		result -= inputNum;
		 		break;
			case '*':
				result *= inputNum;
			 	break;
			case '/':
			 	result /= inputNum;
				if(inputNum == 0)
		 			printf("0で割ろうとするな\n");				
			default:
			 printf("error:入力が不正\n");
		 	 break;
	 	}

		 printf("\n");
		 printf("ansew:%g\n",result);
		 printf("続けますか？はい...y いいえ...n\n");
		 scanf(" %c",&Y);
		 if(Y != 'y') break;
	 }
}
	
