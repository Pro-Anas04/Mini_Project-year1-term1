#include <stdio.h>
#include <conio.h>
#define VAT 7.0 // กำหนดให้ VAT เป็นตัวคงที่ชนิด float และเก็บค่า 0.07
int main()      // เป็นคำสั่งเพื่อเป็นจุดเริ่มต้นของการทำงานในโปรแกรม ซึ่งจะเริ่มจาก " main { " ไล่ไปเรื่อยๆ จนจบ " } " ดังนั้น Source Code การทำงานต่างๆ จึงถูกเขียนอยู่ภายในนี้
{
    int choice, unit, unit_use, service_charge, a; //ประกาศตัวเเปรจำนวนเต็มบวก
    float bill = 0, pay = 0 ;                 //ประกาศตัวเเปรทศนิยม
    float sum[3][10] = {102.00, 262.00, 452.00, 876.00, 1566.00, 2046.00, 7526.00, 26776.00, 54376.00, 82320.00, 170.00 , 370.00 , 580.00 , 1020.00 , 1710.00 , 2190.00 , 7670.00 , 26920.00 , 54520.00 , 82320.00	,182.50 , 397.50 , 652.50 , 1222.50 , 2152.50 , 2777.50 , 9077.50 , 31302.50 , 63302.50 , 95552.50};           
    char ch;                                       //ประกาศตัวเเปรเป็น charactor
    
    do                                             //ลูป do-while จะทดสอบเงื่อนไขหลังจากที่ได้ทำงานตามคำสั่งภายในลูปไปแล้ว 1 รอบ จากนั้นจึงค่อยย้อนกลับมาทดสอบเงื่อนไขอีกครั้งหนึ่ง
    {
        printf(" Enter choice : ");        //เลือกใส่ตัวเลขตามประเภทประปาที่ใช้บริการ | 1 = ที่อยู่อาศัย | 2 = ราชการและธุรกิจขนาดเล็ก | 3 = รัฐวิสาหกิจ / อุตฯ / ธุรกิจขนาดใหญ่
        scanf("%d", &choice);              //เก็บค่าที่เลือกไว้ในตัวเเปร choice
        printf("\n Enter water(unit) = "); //ใส่ค่าหน่วยนํ้าที่ใช้(ลบ.ม)
        scanf("%d", &unit);                //เก็บค่าที่เลือกไว้ในตัวเเปร unit
        printf("\n The size of the water meter used\n"); //แสดงตัวเลือกมาตรวัดทั้งหมด
        printf("\n 1 = Water meter size 1/2 inch");                 
        printf("\n 2 = Water meter size 3/4 inch");
        printf("\n 3 = Water meter size 1 inch");
        printf("\n 4 = Water meter size 1 1/2 inch");
        printf("\n 5 = Water meter size 2 inch");
        printf("\n 6 = Water meter size 2 1/2 inch");
        printf("\n 7 = Water meter size 3 inch");
        printf("\n 8 = Water meter size 4 inch");
        printf("\n 9 = Water meter size 6 inch");
        printf("\n 10 = Water meter size 8 inch\n");
        printf("\n Enter Service charge : ", a);
        scanf("%d", &a); //เก็บค่าที่เลือกไว้ในตัวเเปร a

        switch (choice) //สวิตซ์ choice ใช้ในการเลือกประเภทของผู้ใช้
        {
        case 1: //ที่อยู่อาศัย

            if (unit <= 10) //ช่วงการใช้น้ำ 0-10 ลบ.ม. / เดือน
            {
                pay = unit * 10.20; //ให้pay เก็บค่า หน่วยคูณกับราคาต่อหน่วย
            }
            else if (unit >= 11 && unit <= 20) //ช่วงการใช้น้ำ 11-20 ลบ.ม. / เดือน
            {
                unit_use = unit - 10;        //หน่วยที่ใช่ เท่ากับ 20 ลบกับ 10 จะเหลือ 10 หน่วย
                unit = unit_use;             //นำ10หน่วยที่ได้มาเก็บไว้ใน unit
                pay = (unit * 16.00) + sum[0][0]; //ให้pay เก็บค่า หน่วยคูณกับราคาต่อหน่วยบวกกับ 10 หน่วยเเรก
            }
            else if (unit >= 21 && unit <= 30) //ช่วงการใช้น้ำ 21-30 ลบ.ม. / เดือน
            {
                unit_use = unit - 20;        //หน่วยที่ใช่ เท่ากับ 30 ลบกับ 20 จะเหลือ 10 หน่วย
                unit = unit_use;             //นำ10หน่วยที่ได้มาเก็บไว้ใน unit
                pay = (unit * 19.00) + sum[0][1]; //หน่วยที่ใช่ เท่ากับ 30 ลบกับ 20 จะเหลือ 10 หน่วย ก่อนหน้า
            }
            else if (unit >= 31 && unit <= 50) //ช่วงการใช้น้ำ 31-50 ลบ.ม. / เดือน
            {
                unit_use = unit - 30;
                unit = unit_use;
                pay = (unit * 21.20) + sum[0][2];
            }

            else if (unit >= 51 && unit <= 80) //ช่วงการใช้น้ำ 51-80 ลบ.ม. / เดือน
            {
                unit_use = unit - 50;
                unit = unit_use;
                pay = (unit * 23.00) + sum[0][3];
            }
            else if (unit >= 81 && unit <= 100) //ช่วงการใช้น้ำ 81-100 ลบ.ม. / เดือน
            {
                unit_use = unit - 80;
                unit = unit_use;
                pay = (unit * 24.00) + sum[0][4];
            }
            else if (unit >= 101 && unit <= 300) //ช่วงการใช้น้ำ 101-300 ลบ.ม. / เดือน
            {
                unit_use = unit - 100;
                unit = unit_use;
                pay = (unit * 27.40) + sum[0][5];
            }
            else if (unit >= 301 && unit <= 1000) //ช่วงการใช้น้ำ 301-1000 ลบ.ม. / เดือน
            {
                unit_use = unit - 300;
                unit = unit_use;
                pay = (unit * 27.50) + sum[0][6];
            }
            else if (unit >= 1001 && unit <= 2000) //ช่วงการใช้น้ำ 1001-2000 ลบ.ม. / เดือน
            {
                unit_use = unit - 1000;
                unit = unit_use;
                pay = (unit * 27.60) + sum[0][7];
            }
            else if (unit >= 2001 && unit <= 3000) //ช่วงการใช้น้ำ 2001-3000 ลบ.ม. / เดือน
            {
                unit_use = unit - 2000;
                unit = unit_use;
                pay = (unit * 27.80) + sum[0][8];
            }
            else if (unit > 3000) //ช่วงการใช้น้ำตั้งเเต่ 3001 ลบ.ม. / เดือน ขึ้นไป
            {
                unit_use = unit - 3000;
                unit = unit_use;
                pay = (unit * 28) + sum[0][9];
            }
            break;

        case 2: //ราชการและธุรกิจขนาดเล็ก

            if (unit <= 8)
            {
                unit_use = unit;
                pay = 150;
            }
            else if (unit <= 10) //ช่วงการใช้น้ำ 0-10 ลบ.ม. / เดือน
            {
                pay = (unit * 17.00) ;
            }
            else if (unit >= 11 && unit <= 20) //ช่วงการใช้น้ำ 11-20 ลบ.ม. / เดือน
            {
                unit_use = unit - 10;
                unit = unit_use;
                pay = (unit * 20.00) + sum[1][0];
            }
            else if (unit >= 21 && unit <= 30) //ช่วงการใช้น้ำ 21-30 ลบ.ม. / เดือน
            {
                unit_use = unit - 20;
                unit = unit_use;
                pay = (unit * 21.00) + sum[1][1];
            }
            else if (unit >= 31 && unit <= 50) //ช่วงการใช้น้ำ 31-50 ลบ.ม. / เดือน
            {
                unit_use = unit - 30;
                unit = unit_use;
                pay = (unit * 22.00) + sum[1][2];
            }
            else if (unit >= 51 && unit <= 80) //ช่วงการใช้น้ำ 51-80 ลบ.ม. / เดือน
            {
                unit_use = unit - 50;
                unit = unit_use;
                pay = (unit * 23.00) + sum[1][3];
            }
            else if (unit >= 81 && unit <= 100) //ช่วงการใช้น้ำ 81-100 ลบ.ม. / เดือน
            {
                unit_use = unit - 80;
                unit = unit_use;
                pay = (unit * 24.00) + sum[1][4];
            }
            else if (unit >= 101 && unit <= 300) //ช่วงการใช้น้ำ 101-300 ลบ.ม. / เดือน
            {
                unit_use = unit - 100;
                unit = unit_use;
                pay = (unit * 27.40) + sum[1][5];
            }
            else if (unit >= 301 && unit <= 1000) //ช่วงการใช้น้ำ 301-1000 ลบ.ม. / เดือน
            {
                unit_use = unit - 300;
                unit = unit_use;
                pay = unit * 27.50 + sum[1][6];
            }
            else if (unit >= 1001 && unit <= 2000) //ช่วงการใช้น้ำ 1001-2000 ลบ.ม. / เดือน
            {
                unit_use = unit - 1000;
                unit = unit_use;
                pay = (unit * 27.60) + sum[1][7];
            }

            else if (unit >= 2001 && unit <= 3000) //ช่วงการใช้น้ำ 2001-3000 ลบ.ม. / เดือน
            {
                unit_use = unit - 2000;
                unit = unit_use;
                pay = (unit * 27.80) + sum[1][8];
            }
            else if (unit > 3000) //ช่วงการใช้น้ำตั้งเเต่ 3001 ลบ.ม. / เดือน ขึ้นไป
            {
                unit_use = unit - 3000;
                unit = unit_use;
                pay = (unit * 28.00) + sum[1][9];
            }
            break; //คำสั่ง break เป็นคำสั่งที่ใช้เพื่อควบคุมลูปให้จบการทำงานในทันที โดยที่ไม่สนใจว่าเงื่อนไขจะยังคงเป็นจริงอยู่หรือไม่

        case 3: //รัฐวิสาหกิจ / อุตฯ / ธุรกิจขนาดใหญ่

            if (unit <= 10) //ช่วงการใช้น้ำ 0-10 ลบ.ม. / เดือน
            {
                pay = unit * 18.25;
            }

            else if (unit >= 11 && unit <= 20) //ช่วงการใช้น้ำ 11-20 ลบ.ม. / เดือน
            {
                unit_use = unit - 10;
                unit = unit_use;
                pay = (unit * 21.50) + sum[2][0];
            }
            else if (unit >= 21 && unit <= 30) //ช่วงการใช้น้ำ 21-30 ลบ.ม. / เดือน
            {
                unit_use = unit - 20;
                unit = unit_use;
                pay = (unit * 25.50) + sum[2][1];
            }
            else if (unit >= 31 && unit <= 50) //ช่วงการใช้น้ำ 31-50 ลบ.ม. / เดือน
            {
                unit_use = unit - 30;
                unit = unit_use;
                pay = (unit * 28.50) + sum[2][2];
            }
            else if (unit >= 51 && unit <= 80) //ช่วงการใช้น้ำ 51-80 ลบ.ม. / เดือน
            {
                unit_use = unit - 50;
                unit = unit_use;
                pay = (unit * 31.00) + sum[2][3];
            }
            else if (unit >= 81 && unit <= 100) //ช่วงการใช้น้ำ 81-100 ลบ.ม. / เดือน
            {
                unit_use = unit - 80;
                unit = unit_use;
                pay = (unit * 31.25) + sum[2][4];
            }
            else if (unit >= 101 && unit <= 300) //ช่วงการใช้น้ำ 101-300 ลบ.ม. / เดือน
            {
                unit_use = unit - 100;
                unit = unit_use;
                pay = (unit * 31.50) + sum[2][5];
            }
            else if (unit >= 301 && unit <= 1000) //ช่วงการใช้น้ำ 301-1000 ลบ.ม. / เดือน
            {
                unit_use = unit - 300;
                unit = unit_use;
                pay = (unit * 31.75) + sum[2][6];
            }
            else if (unit >= 1001 && unit <= 2000) //ช่วงการใช้น้ำ 1001-2000 ลบ.ม. / เดือน
            {
                unit_use = unit - 1000;
                unit = unit_use;
                pay = (unit * 32.00) + sum[2][7];
            }
            else if (unit >= 2001 && unit <= 3000) //ช่วงการใช้น้ำ 2001-3000 ลบ.ม. / เดือน
            {
                unit_use = unit - 2000;
                unit = unit_use;
                pay = (unit * 32.25) + sum[2][8];
            }
            else if (unit > 3000) //ช่วงการใช้น้ำตั้งเเต่ 3001 ลบ.ม. / เดือน ขึ้นไป
            {
                unit_use = unit - 3000;
                unit = unit_use;
                pay = (unit * 32.50) + sum[2][9];
            }
            break; //คำสั่ง break เป็นคำสั่งที่ใช้เพื่อควบคุมลูปให้จบการทำงานในทันที โดยที่ไม่สนใจว่าเงื่อนไขจะยังคงเป็นจริงอยู่หรือไม่
        default:
            break;
        }
        printf("\n Pay water value = %.2f Bath\n", pay); 

        switch (a) //สวิตซ์ a ใช้ในการเลือกขนาดมาตรวัดนํ้าเพื่อคิดค่าบริการทั่วไป
        {
        case 1:                                                               // 1/2 นิ้ว
            service_charge = 30;                                              //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 1/2 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 1/2 นิ้ว
            break;
        case 2:                                                               // 3/4 นิ้ว
            service_charge = 50;                                              //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 3/4 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 3/4 นิ้ว
            break;
        case 3:                                                             // 1 นิ้ว
            service_charge = 60;                                            //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 1 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 1 นิ้ว
            break;
        case 4:                                                                 // 1 1/2 นิ้ว
            service_charge = 90;                                                //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 1 1/2 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 1 1/2(นิ้วครึ่ง) นิ้ว
            break;
        case 5:                                                             // 2 นิ้ว
            service_charge = 350;                                           //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 2 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 2 นิ้ว
            break;
        case 6:                                                                 // 2 1/2 นิ้ว
            service_charge = 450;                                               //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 2 1/2 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 2 1/2(2นิ้วครึ่ง) นิ้ว
            break;
        case 7:                                                             // 3 นิ้ว
            service_charge = 450;                                           //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 3 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 3 นิ้ว
            break;
        case 8:                                                             // 4 นิ้ว
            service_charge = 550;                                           //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 4 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 4 นิ้ว
            break;
        case 9:                                                             // 6 นิ้ว
            service_charge = 950;                                           //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 6 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 6 นิ้ว
            break;
        case 10:                                                            // 8 นิ้ว
            service_charge = 1200;                                          //ใส่ราคาเก็บไวใน service_charge
            printf("\n Water meter size 8 inch = %d Bath", service_charge); //เเสดงราคาของมาตรวัดนํ้าขนาด 8 นิ้ว
            break;
        default:
            break;
        }

                                                      
        bill = pay + service_charge;                                                                     //คิดค่าน้ำรวมบวกกับค่าบริการ เก็บไว้ใน bill
        printf("\n\n Water bill before VAT is %.2f Bath", bill);                                         //เเสดงค่าน้ำรวมบวกกับค่าบริการก่อนจะคิดค่าภาษี
        bill = bill * (1 + (VAT / 100));                                                                 //สมการค่าน้ำรวมที่บวกกับค่าบริการเเล้วบวกภาษีที่ได้เข้าไปเก็บไว้ใน bill
        printf("\n\n VAT %.2f%% is %.2f Bath", VAT, (bill * VAT) / (100 + VAT));                         //เเสดงค่าภาษี ใน จากราคารวมทั้งสิ้นเพื่อเเสดงค่าภาษีมูลค่าเพิ่ม (7%)
        printf("\n\n Total water bill is %.2f Bath\n\n", bill);                                          //เเสดงค่าที่ต้องจ่ายรวมเป็นเงินทั้งสิน
        printf(" Want to continue calculating water bills? If continued, press Y. If not, press N. : "); //ต้องการคำนวณค่าน้ำประปาต่อหรือไม่ ถ้าทำต่อ กด Y ถ้าไม่ กด N
        ch = getche();                                                                                   //ทำงานโดยเเสดงค่าที่ใส่โดยไม่ต้องกดEnter
        printf("\n\n");                                                                                  //ขึ้นบรรทัดใหม่ 2 ครั้ง
    } while (ch == 'y' || ch == 'Y');                                                                    //เงื่อนไข Y หรือ y เป็นจริง หากผู้ใช้ใส่ค่า Y หรือ y ถ้าเป็นจริงจะวนกลับไปทำงานอีกครั้ง
}
