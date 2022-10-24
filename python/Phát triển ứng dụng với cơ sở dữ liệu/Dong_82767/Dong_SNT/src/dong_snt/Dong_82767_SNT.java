/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dong_snt;
import java.util.Scanner;
/**
 *
 * @author dong
 */
public class Dong_82767_SNT {
     boolean kiemtranguyento(int n){
        for(int i =2; i<=Math.sqrt(n);i++){
         if(n%i == 0){
          return false;
         }
        }
        return true;
      }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         Scanner s = new Scanner(System.in);
        System.out.printf("Kiem tra so nguyen to \n");
        System.out.printf("Nhap vao so nguyen duong \n");
        int n = s.nextInt();
        Dong_82767_SNT snt = new Dong_82767_SNT();
        if(snt.kiemtranguyento(n)){
         System.out.printf("So : " +n +" la so nguyen to");
        }else{
         System.out.printf("So : " +n +" khong phai la so nguyen to");
        }
    }
}
