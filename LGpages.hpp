/* This is LGmaps.hpp file of LocalGen.                                  */
/* Copyright (c) 2023 LocalGen-dev; All rights reserved.                 */
/* Developers: http://github.com/LocalGen-dev                            */
/* Project: http://github.com/LocalGen-dev/LocalGen-new                  */
/*                                                                       */
/* This project is licensed under the MIT license. That means you can    */
/* download, use and share a copy of the product of this project. You    */
/* may modify the source code and make contribution to it too. But, you  */
/* must print the copyright information at the front of your product.    */
/*                                                                       */
/* The full MIT license this project uses can be found here:             */
/* http://github.com/LocalGen-dev/LocalGen-new/blob/main/LICENSE.md      */

#ifndef __LGPAGES_HPP__
#define __LGPAGES_HPP__

#include <random>
#include <chrono>
#include "LGcons.hpp"
#include "LGmaps.hpp"
#include "LGzipmap.hpp"
#include "LGgame.hpp"

inline void CB(int k){
	setfcolor(defTeams[k].color);
	printf("�� ");
}

void MainPage(){
	clearance();
	register int i,j;
	std::mt19937 mtrd(std::chrono::system_clock::now().time_since_epoch().count());
	
	//L 2 2
	gotoxy(2,2);CB(mtrd()%16);
	gotoxy(3,2);CB(mtrd()%16);
	gotoxy(4,2);CB(mtrd()%16);
	gotoxy(5,2);CB(mtrd()%16);
	gotoxy(6,2);for(i=1;i<=5;i++) CB(mtrd()%16);
	
	//O 2 14
	gotoxy(2,16);for(i=1;i<=3;i++) CB(mtrd()%16);
	gotoxy(6,16);for(i=1;i<=3;i++) CB(mtrd()%16);
	gotoxy(3,14);CB(mtrd()%16);gotoxy(3,22);CB(mtrd()%16);
	gotoxy(4,14);CB(mtrd()%16);gotoxy(4,22);CB(mtrd()%16);
	gotoxy(5,14);CB(mtrd()%16);gotoxy(5,22);CB(mtrd()%16);
	
	//C 2 26
	gotoxy(2,28);for(i=1;i<=3;i++) CB(mtrd()%16);
	gotoxy(6,28);for(i=1;i<=3;i++) CB(mtrd()%16);
	gotoxy(3,26);CB(mtrd()%16);gotoxy(3,34);CB(mtrd()%16);
	gotoxy(4,26);CB(mtrd()%16);
	gotoxy(5,26);CB(mtrd()%16);gotoxy(5,34);CB(mtrd()%16);
	
	//A 2 38
	gotoxy(2,40);for(i=1;i<=3;i++) CB(mtrd()%16);
	gotoxy(4,38);for(i=1;i<=5;i++) CB(mtrd()%16);
	gotoxy(3,38);CB(mtrd()%16);gotoxy(3,46);CB(mtrd()%16);
	gotoxy(5,38);CB(mtrd()%16);gotoxy(5,46);CB(mtrd()%16);
	gotoxy(6,38);CB(mtrd()%16);gotoxy(6,46);CB(mtrd()%16);
	
	//L 2 50
	gotoxy(2,50);CB(mtrd()%16);
	gotoxy(3,50);CB(mtrd()%16);
	gotoxy(4,50);CB(mtrd()%16);
	gotoxy(5,50);CB(mtrd()%16);
	gotoxy(6,50);for(i=1;i<=5;i++) CB(mtrd()%16);
	
	//G 8 2
	gotoxy(8,4);for(i=1;i<=10;i++) CB(mtrd()%16);
	gotoxy(20,4);for(i=1;i<=10;i++) CB(mtrd()%16);
	gotoxy(16,8);for(i=1;i<=8;i++) CB(mtrd()%16);
	gotoxy(9,2);CB(mtrd()%16);
	gotoxy(10,2);CB(mtrd()%16);
	gotoxy(11,2);CB(mtrd()%16);
	gotoxy(12,2);CB(mtrd()%16);
	gotoxy(13,2);CB(mtrd()%16);
	gotoxy(14,2);CB(mtrd()%16);
	gotoxy(15,2);CB(mtrd()%16);
	gotoxy(16,2);CB(mtrd()%16);
	gotoxy(17,2);CB(mtrd()%16);gotoxy(17,24);CB(mtrd()%16);
	gotoxy(18,2);CB(mtrd()%16);gotoxy(18,24);CB(mtrd()%16);
	gotoxy(19,2);CB(mtrd()%16);gotoxy(19,24);CB(mtrd()%16);
	
	//E 10 8
	gotoxy(10,10);for(i=1;i<=4;i++) CB(mtrd()%16);
	gotoxy(12,8);for(i=1;i<=5;i++) CB(mtrd()%16);
	gotoxy(14,10);for(i=1;i<=4;i++) CB(mtrd()%16);
	gotoxy(11,8);CB(mtrd()%16);gotoxy(13,8);CB(mtrd()%16);
	
	//N 10 20
	gotoxy(10,20);CB(mtrd()%16);gotoxy(10,28);CB(mtrd()%16);
	gotoxy(11,20);CB(mtrd()%16);gotoxy(11,22);CB(mtrd()%16);gotoxy(11,28);CB(mtrd()%16);
	gotoxy(12,20);CB(mtrd()%16);gotoxy(12,24);CB(mtrd()%16);gotoxy(12,28);CB(mtrd()%16);
	gotoxy(13,20);CB(mtrd()%16);gotoxy(13,26);CB(mtrd()%16);gotoxy(13,28);CB(mtrd()%16);
	gotoxy(14,20);CB(mtrd()%16);gotoxy(14,28);CB(mtrd()%16);
	
	//E 10 32
	gotoxy(10,34);for(i=1;i<=4;i++) CB(mtrd()%16);
	gotoxy(12,32);for(i=1;i<=5;i++) CB(mtrd()%16);
	gotoxy(14,34);for(i=1;i<=4;i++) CB(mtrd()%16);
	gotoxy(11,32);CB(mtrd()%16);gotoxy(13,32);CB(mtrd()%16);
	
	//R 10 44
	gotoxy(10,46);for(i=1;i<=4;i++) CB(mtrd()%16);
	gotoxy(12,44);for(i=1;i<=4;i++) CB(mtrd()%16);
	gotoxy(11,44);CB(mtrd()%16);gotoxy(11,52);CB(mtrd()%16);
	gotoxy(13,44);CB(mtrd()%16);gotoxy(13,50);CB(mtrd()%16);
	gotoxy(14,44);CB(mtrd()%16);gotoxy(14,52);CB(mtrd()%16);
	
	//A 10 56
	gotoxy(10,58);for(i=1;i<=3;i++) CB(mtrd()%16);
	gotoxy(12,56);for(i=1;i<=5;i++) CB(mtrd()%16);
	gotoxy(11,56);CB(mtrd()%16);gotoxy(11,64);CB(mtrd()%16);
	gotoxy(13,56);CB(mtrd()%16);gotoxy(13,64);CB(mtrd()%16);
	gotoxy(14,56);CB(mtrd()%16);gotoxy(14,64);CB(mtrd()%16);
	
	//L 10 68
	gotoxy(10,68);CB(mtrd()%16);
	gotoxy(11,68);CB(mtrd()%16);
	gotoxy(12,68);CB(mtrd()%16);
	gotoxy(13,68);CB(mtrd()%16);
	gotoxy(14,68);for(i=1;i<=5;i++) CB(mtrd()%16);
	
	//S 10 80
	gotoxy(10,82);for(i=1;i<=4;i++) CB(mtrd()%16);
	gotoxy(12,80);for(i=1;i<=5;i++) CB(mtrd()%16);
	gotoxy(14,80);for(i=1;i<=4;i++) CB(mtrd()%16);
	gotoxy(11,80);CB(mtrd()%16);gotoxy(13,88);CB(mtrd()%16);
	
	setfcolor(defTeams[0].color);
	char chCmd=0,fileName[105];
	int chs=0,plCnt,stDel,cht,cheatCode;
	FILE *fileP;
	
	//Tips 17 6
	gotoxy(17,6);printf("Use WASD to move,");
	gotoxy(18,6);printf("Enter to select.");
	
	//Choose 17 30
	gotoxy(17,37);printf(">> Single Mode: Have fun with robots!");
	gotoxy(18,40);printf("Multiplayer Mode: Have fun with your friends!");
	
	while(chCmd!=13){
		chCmd=_getch();
		gotoxy(17+chs,37); printf("  ");
		switch(chCmd){
			case 'S':
			case 's':
			case 'W':
			case 'w':
				chs=1-chs;
				break;
			default:break;
		}
		gotoxy(17+chs,37); printf(">>");
	}
	
	if(chs) return ;
	else chCmd=0;
	
	gotoxy(17,37);printf(">> Choose map.                               ");
	gotoxy(18,40);printf("Import a map:                                ");
	
	while(chCmd!=13){
		if(_kbhit()){
			chCmd=_getch();
			gotoxy(17+chs,37);printf("  ");
			
			switch(chCmd){
				case 'S':
				case 's':
				case 'W':
				case 'w':
					chs=1-chs;
					break;
				default:break;
			}gotoxy(17+chs,37);printf(">>");
		}
	}
	
	if(chs){
		gotoxy(18,54);
		scanf("%s",fileName);
		fileP=fopen(fileName,"r");
		fscanf(fileP,"%s",strdeZip);
		fclose(fileP);
		deZip();
	}else{
		int H,W;
		char ch=_getch();
//		gotoxy()
		createFullCityMap(20,20,10,40,4);
	}
	
	inputplCnt:;
	gotoxy(17,37);printf("   Settings.                                    ");
	gotoxy(18,40);printf("Please enter the player number(<9):             ");
	gotoxy(18,76);scanf("%d",&plCnt);
	if(plCnt>8||plCnt<0) goto inputplCnt;
	
	inputstDel:;
	gotoxy(18,40);printf("Please enter the game speed([1,20]):               ");
	gotoxy(18,76);scanf("%d",&stDel);
	if(stDel>20||stDel<1) goto inputstDel;
	stDel=1000/stDel; 
	
	inputCheat:;
	gotoxy(18,40);printf("Please enter the cheat code(0/1):               ");
	gotoxy(18,76);scanf("%d",&cht);
	if(cht>1||cht<0) goto inputCheat;
	if(cht) cheatCode=1048575;
	
	clearance();
	GAME(0,cheatCode,plCnt,stDel);
	return ;
}

#endif
