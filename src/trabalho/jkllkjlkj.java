package trabalho;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JTable;

public class jkllkjlkj extends JFrame {

	private JPanel contentPane;
	private JTable table;
	private String [] c;
	private Object [][] dados;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					jkllkjlkj frame = new jkllkjlkj();
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
	public jkllkjlkj() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		c = new String []{"a","b"};
		Object [][] dados = {
			    {"Ana Monteiro", "48 9923-7898", "ana.monteiro@gmail.com"},
			    {"João da Silva", "48 8890-3345", "joaosilva@hotmail.com"},
			    {"Pedro Cascaes", "48 9870-5634", "pedrinho@gmail.com"}
			};
		table = new JTable(dados,c);
		table.setBounds(31, 77, 274, 100);
		contentPane.add(table);
	}
}
