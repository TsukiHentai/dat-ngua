using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Câu_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            for (int i = 1; i <= 31; i++)
            {
                comboBox1.Items.Add(i);
            }
            for (int i = 1; i <= 12; i++)
            {
                comboBox2.Items.Add(i);
            }
            for (int i = 1980; i <= 2000; i++)
            {
                comboBox3.Items.Add(i);
         
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(string.IsNullOrEmpty(textBox1.Text))
            {
                MessageBox.Show("Chưa nhập đủ dữ liệu","Thông báo",MessageBoxButtons.OK);
                textBox1.Focus();
            }
            else if (comboBox1.SelectedItem == null || comboBox2.SelectedItem == null || comboBox2.SelectedItem == null)
            {
                MessageBox.Show("Chưa nhập đủ dữ liệu", "Thông báo", MessageBoxButtons.OK);
            }
            else if(string.IsNullOrEmpty(textBox2.Text))
            {
                MessageBox.Show("Chưa nhập đủ dữ liệu","Thông báo",MessageBoxButtons.OK);
                textBox2.Focus();
            }
            else
            {
                listBox1.Items.Clear();
                listBox1.Items.Add(textBox1.Text);
                listBox1.Items.Add(comboBox1.Text+"/"+comboBox2.Text+"/"+comboBox3.Text);
                listBox1.Items.Add(textBox2.Text);
            }
        }
    }
}
