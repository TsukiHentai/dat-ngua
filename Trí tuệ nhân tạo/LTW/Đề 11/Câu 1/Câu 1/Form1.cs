using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Câu_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if(radioButton2.Checked==true)
            {
               label2.Text = "2";
               label3.Text = "10";
            }
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton1.Checked == true)
            {
                label2.Text = "10";
                label3.Text = "2";
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (radioButton1.Checked == true)
            {
                
                if (Convert.ToInt32(textBox1.Text)<= 256)
                {
                    int cv = int.Parse(textBox1.Text);
                    textBox2.Text = Convert.ToString(cv, 2);
                }
                else
                {
                    MessageBox.Show("Nhập sai dữ liệu", "Thông báo", MessageBoxButtons.OK);
                }

            }

            if (radioButton2.Checked == true)
            {
                if(textBox1.Text.Length<=8)
                {
                    textBox2.Text = Convert.ToInt64(textBox1.Text, 2).ToString();
                }
                else
                {
                    MessageBox.Show("Nhập sai dữ liệu", "Thông báo", MessageBoxButtons.OK);
                }
            }
        }






    }
}
