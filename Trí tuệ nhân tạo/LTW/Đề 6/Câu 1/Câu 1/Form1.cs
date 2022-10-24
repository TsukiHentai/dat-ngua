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
            radioButton1.Checked = true;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(textBox1.Text) || (string.IsNullOrEmpty(textBox2.Text)))
            {
                MessageBox.Show("Bạn chưa nhập đủ dữ liệu", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                Double So1 = Convert.ToDouble(textBox1.Text);
                Double So2 = Convert.ToDouble(textBox2.Text);
                Double cong, tru, nhan, chia;
                cong = So1 + So2;
                tru = So1 - So2;
                nhan = So1 * So2;
                chia = So1 / So2;
                if (radioButton1.Checked == true)
                {
                    textBox3.Text = cong.ToString();
                }
                else if (radioButton2.Checked == true)
                {
                    textBox3.Text = tru.ToString();
                }
                else if (radioButton3.Checked == true)
                {
                    textBox3.Text = nhan.ToString();
                }
                else if (radioButton4.Checked == true)
                {
                    if (So2 == 0)
                    {
                        MessageBox.Show("Bạn nhập sai số 2", "Thông báo", MessageBoxButtons.OK);
                    }
                    else
                    {
                        textBox3.Text = chia.ToString();
                    }
                }
            }
            }
            
    }
}
