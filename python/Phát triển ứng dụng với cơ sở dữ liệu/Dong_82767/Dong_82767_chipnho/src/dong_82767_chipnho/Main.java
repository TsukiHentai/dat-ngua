/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dong_82767_chipnho;
import java.util.Scanner;
/**
 *
 * @author dong
 */
public class Main {
    static Scanner sc = new Scanner(System.in);
    static void nhapThongTin(Dong_82767_chipnho tt) {
        sc.nextLine();
        System.out.println("Chipset Name: ");
        tt.setname(sc.nextLine());
        System.out.println("Chipset Bus: ");
        tt.setbus(sc.nextInt());
        System.out.println("Chipset Memory: ");
        tt.setmemory(sc.nextInt());
        System.out.println("Chipset Speed: ");
        tt.setspeed(sc.nextInt());
        float temp = tt.getbus() / tt.getspeed();
        tt.setread_write(temp);
    }
 
    public static void main(String[] args) {
        Dong_82767_chipnho sv[] = null;
        int a, n = 0;
        boolean flag = true;
        do {
            System.out.println("Bạn chọn làm gì?");
            System.out.println("1.Nhập thông tin. \n" +
                    "2.Sắp xếp danh sách.\n" +
                    "3.In danh sách.\n" +
                    "Nhập số khác để thoát");
            a = sc.nextInt();
            switch (a) {
                case 1:
                    System.out.println("Nhập số lương chipset: ");
                    n = sc.nextInt();
                    sv = new Dong_82767_chipnho[n];
                    for (int i = 0; i < n; i++) {
                        System.out.println("Chipset thứ " + (i + 1)+": ");
                        sv[i] = new Dong_82767_chipnho();
                        nhapThongTin(sv[i]);
 
                    }
                    break;
                case 2:
                    Dong_82767_chipnho temp = sv[0];
                    for (int i = 0; i < sv.length - 1; i++) {
                        for (int j = i + 1; j < sv.length; j++) {
                            if (sv[i].getread_write() > sv[j].getread_write()) {
                                temp = sv[j];
                                sv[j] = sv[i];
                                sv[i] = temp;
                            }
                        }
                    }
                    break;
                case 3:
                    System.out.printf("%-5s %15s %15s %15s %15s \n", "Name", "Bus", "Memory", "Speed", "Read / Write");
                    for (int i = 0; i < n; i++) {
                        sv[i].show();
                    }
                    break;
                default:
                    System.out.println("Goodbye");
                    flag = false;
                    break;
            }
        } while (flag);
    }
}
