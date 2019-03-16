package trabalho;

import java.awt.BorderLayout;
import java.awt.Dimension;
import java.awt.EventQueue;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.border.EmptyBorder;
import javax.swing.table.DefaultTableModel;

import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.ScrollPane;

public class Tela extends JFrame {

	private String [] colunas1;
	private String [] colunas2;
	private Object [][] dados;
	private Font font;
	private JPanel contentPane;
	private JLabel matricula;
	private JTextField campoMatricula; 
	private JLabel nome;
	private JTextField campoNome;
	private JLabel email;
	private JTextField campoEmail;
	private JLabel titulo;
	private JButton ordenar;
	private JButton resetar;
	private JTable table1;
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Tela frame = new Tela();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public Tela() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 700, 500 );
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setLocationRelativeTo(null);
		contentPane.setLayout(null);
		setContentPane(contentPane);
		Object [][] dados = {
			    {"Ana Monteiro", "48 9923-7898", "ana.monteiro@gmail.com"},
			    {"João da Silva", "48 8890-3345", "joaosilva@hotmail.com"},
			    {"Pedro Cascaes", "48 9870-5634", "pedrinho@gmail.com"}
			};

		colunas1 = new String [] {"Melhor Caso","Pior Caso","Caso Médio","Caso Médio"};
		colunas2 = new String []{"Melhor Caso","Pior Caso","Caso Médio", "Caso Médio"};
		font = new Font("TimesRoman",Font.BOLD,20);
		titulo = new JLabel("Pesquisa e Ordenação");
		matricula = new JLabel("Matricula:");
		campoMatricula = new JTextField();
		nome = new JLabel("Nome:");
		campoNome = new JTextField();
		email = new JLabel("Email:");
		campoEmail = new JTextField();
		ordenar = new JButton("Ordenar");
		resetar = new JButton("Resetar");
		table1 = new JTable(dados,colunas1);
		
		contentPane.add(matricula);
		contentPane.add(campoMatricula);
		contentPane.add(nome);
		contentPane.add(campoNome);
		contentPane.add(email);
		contentPane.add(campoEmail);
		contentPane.add(titulo);
		contentPane.add(ordenar);
		contentPane.add(resetar);
		
		titulo.setVisible(true);
		titulo.setBounds(250,20,200,70);
		titulo.setFont(font);
		nome.setVisible(true);
		nome.setBounds(20,100,100,20);
		campoNome.setVisible(true);
		campoNome.setBounds(70, 100, 100, 20);
		email.setVisible(true);
		email.setBounds(230,100,100,20);
		campoEmail.setVisible(true);
		campoEmail.setBounds(280,100,100,20);
		matricula.setVisible(true);
		matricula.setBounds(430,100,100,20);
		campoMatricula.setVisible(true);
		campoMatricula.setBounds(500, 100, 100, 20);
		ordenar.setVisible(true);
		ordenar.setBounds(200,150,100,25);
		resetar.setVisible(true);
		resetar.setBounds(350,150,100,25);
		table1.setBounds(200,250,274,100);
		contentPane.add(table1);
		
		
		
		
		
	}

}
