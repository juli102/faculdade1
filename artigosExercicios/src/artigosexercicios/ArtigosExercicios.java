/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package artigosexercicios;

/**
 *Criar um programa que calcule a média de salários de uma empresa,
 * pedindo ao usuário a grade de funcionários e os salários, e devolvendo a média salarial.
 * @author PC
 */
public class ArtigosExercicios {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
         double n1, n2, n3, n4, media;

        n1 = 3453.00;
        n2 = 2498.43;
        n3 = 7902.09;
        n4 = 12932.00;

        media = (n1 + n2 + n3 + n4) / 4;
        System.out.println("A média salarial da empresa é de R$ " + media);
   
    }
    
}
