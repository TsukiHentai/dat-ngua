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

        private void button1_Click(object sender, EventArgs e)
        {
            string[] doc = { "Không", "Một", "Hai", "Ba", "Bốn", "Năm", "Sáu", "Bảy", "Tám", "Chín" };
            int num = Convert.ToInt32(textBox1.Text);
            int donvi = num % 10;
            int chuc = num % 100 / 10;
            int tram = num / 100;
            if (num < 1 || num > 99)
            {
                MessageBox.Show("Nhập số từ 1-99", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                if (num < 10)
                {
                    textBox2.Text = doc[num];
                }
                else if (num >= 10 && num < 100)
                {
                    if (num == 10)
                    {
                        textBox2.Text = "Mười";
                    }
                    else if (donvi == 1)
                    {
                        textBox2.Text = doc[chuc] + " Mươi Mốt";
                    }
                    else if (num > 10 && num < 20)
                    {
                        textBox2.Text = "Mười " + doc[donvi];
                    }
                    else
                    {
                        textBox2.Text = doc[chuc] + " Mươi " + doc[donvi];
                    }
                }
            }

        }

    }
}
