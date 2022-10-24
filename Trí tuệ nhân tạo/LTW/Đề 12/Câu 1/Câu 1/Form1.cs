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
        
        public int UCLN(int a, int b)
        {
            if (b == 0)
            {
                return a;
            }
            else
                return UCLN(b, a % b);
        }
        public int BCNN(int a, int b)
        {
            return ((a * b) / (UCLN(a,b)));
        }
        private void button1_Click(object sender, EventArgs e)
        {
            textBox3.Text = UCLN(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text)).ToString();
            textBox4.Text = BCNN(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text)).ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            textBox2.Clear();
            textBox3.Clear();
            textBox4.Clear();
        }
    }
}
