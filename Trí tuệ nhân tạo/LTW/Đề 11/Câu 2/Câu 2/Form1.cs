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
        float d1, d2, d3, d4;
        public float dtb()
        {
            return (d1 + d2 + d3 + d4) / 4;
        }
        public string xeploai()
        {
            if (dtb() <= 5)
            {
                return "Yếu";
            }
            else if(dtb()>=5 && dtb()<6.5)
            {
                return "TB";
            }
            else if (dtb() >= 6.5 && dtb() <= 8)
            {
                return "Khá";
            }
            else
            {
                return "Giỏi";
            }
        }
        private void button2_Click(object sender, EventArgs e)
        {
            d1 = float.Parse(textBox2.Text);
            d2 = float.Parse(textBox3.Text);
            d3 = float.Parse(textBox4.Text);
            d4 = float.Parse(textBox5.Text);
            if(d2>10 || d3>10 || d4>10 || d4>10)
            {
                MessageBox.Show("Nhập sai số", "Thông báo",MessageBoxButtons.OK);
            }
            else
            {
                listBox1.Items.Add(textBox1.Text);
                listBox1.Items.Add("Điểm trung bình:" + dtb().ToString());
                listBox1.Items.Add("Xếp loại:" + xeploai().ToString());
            }

        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            textBox4.Text = "";
            textBox5.Text = "";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
