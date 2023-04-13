/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exercicios;
import java.util.Scanner;

/**
 *
 * @author PC
 */


/**Escreva um programa que, 
 * com base em uma temperatura em graus celsius, 
 * a converta e exiba em Kelvin (K), Réaumur (Re), 
 * Rankine (Ra) e Fahrenheit (F), 
 * seguindo as fórmulas: F = C * 1.8 + 32; K = C + 273.15; 
 * Re = C * 0.8; Ra = C * 1.8 + 32 + 459.67**/

public class Exercicios {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       double C, K, F, Re, Ra;
        C = 2.43;

        F = C * 1.8 + 32;
        K = C + 273.15;
        Ra = C * 1.8 + 32 + 459.67;
        Re = C * 0.8;

        System.out.println("A temperatura em Fahrenheit é: " + F);
        System.out.println("A temperatura em Kelvin é: " + K);
        System.out.println("A temperatura em Reaumur é: " + Ra);
        System.out.println("A temperatura em Rankine é: " + Re);
    }   

}

 
