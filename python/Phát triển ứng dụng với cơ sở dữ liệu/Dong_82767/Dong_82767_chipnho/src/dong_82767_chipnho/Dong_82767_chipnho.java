/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dong_82767_chipnho;
/**
 *
 * @author dong
 */
public class Dong_82767_chipnho {
    private String name;
    private int bus;
    private int memory;
    private int speed;
    private float read_write;
 
    public Dong_82767_chipnho() {
    }
    
    public Dong_82767_chipnho(String name, int bus, int memory, int speed) {
        super();
        this.name = name;
        this.bus = bus;
        this.memory = memory;
        this.speed = speed;
        this.read_write = this.bus / this.speed;
    }
    
    public String getname() {
        return name;
    }
 
    public void setname(String name) {
        this.name = name;
    }
    
    public int getbus() {
        return bus;
    }
 
    public void setbus(int bus) {
        this.bus = bus;
    }
    
    public int getmemory() {
        return memory;
    }
 
    public void setmemory(int memory) {
        this.memory = memory;
    }
    
    public int getspeed() {
        return speed;
    }
 
    public void setspeed(int speed) {
        this.speed = speed;
    }
    
    public float getread_write() {
        return read_write;
    }
 
    public void setread_write(float read_write) {
        this.read_write = read_write;
    }
    
    public void show(){
        System.out.printf("%-20s %-15d %-15d %-15d %-15f \n", name, bus, memory, speed, read_write);
    } 
}
