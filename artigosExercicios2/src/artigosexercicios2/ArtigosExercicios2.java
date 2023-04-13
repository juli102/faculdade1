/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package artigosexercicios2;

/**
 *
 * @author PC
 */
public class ArtigosExercicios2 {

    /**
     * @param args the command line arguments
     */
   public static void main(String[] args) {
        double hp, lp, ha, la, qtd;

        hp = 2.6;
        lp = 1.6;
        ha = 0.35;
        la = 0.3;

        qtd = (hp * lp) / (ha * la);

        System.out.println("Quantidade de azulejos necessários para cobrir a parede: " + qtd);     
    }
    
}
