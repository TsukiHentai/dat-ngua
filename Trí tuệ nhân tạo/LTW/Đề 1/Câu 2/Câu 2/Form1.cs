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
            comboBox1.Items.Add("Ông");
            comboBox1.Items.Add("Bà");
            comboBox1.Items.Add("Anh");
            comboBox1.Items.Add("Cô");
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            listBox1.Items.Add(comboBox1.Text + " " + textBox1.Text.Trim() + " " + textBox2.Text.Trim());
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            if (listBox1.SelectedItem == null)
            {
                MessageBox.Show("Chưa chọn người cần xóa", "Thông báo", MessageBoxButtons.OK);
            }
                
            else
            {
                  if (MessageBox.Show("Bạn chắc chắn muốn xóa người này ?", "Thông báo", MessageBoxButtons.YesNo) == DialogResult.Yes)
                  {
                      listBox1.Items.Remove(listBox1.SelectedItem);
                  }
            }
        }

        private void btnDong_Click(object sender, EventArgs e)
        {
            Application.Exit;
        }

    }
}
