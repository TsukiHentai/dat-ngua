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

        private void btnThem_Click(object sender, EventArgs e)
        {
            if (listBox1.Items.Contains(textBox1.Text))
            {
                MessageBox.Show("Món ăn đã tồn tại", "Thông báo", MessageBoxButtons.OK);
            }
            else 
            {
                listBox1.Items.Add(textBox1.Text);
            }
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                listBox2.Items.Add(listBox1.SelectedItem);
                listBox1.Items.Remove(listBox1.SelectedItem);
            }
            catch
            {
                MessageBox.Show("Bạn chưa chọn món", "Thông báo", MessageBoxButtons.OK);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                listBox2.Items.AddRange(listBox1.Items);
                listBox1.Items.Clear();
            }
            catch
            {
                MessageBox.Show("Bạn chưa chọn món", "Thông báo", MessageBoxButtons.OK);
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                listBox1.Items.Add(listBox2.SelectedItem);
                listBox2.Items.Remove(listBox2.SelectedItem);
            }
            catch
            {
                MessageBox.Show("Bạn chưa chọn món", "Thông báo", MessageBoxButtons.OK);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            listBox1.Items.AddRange(listBox2.Items);
            listBox2.Items.Clear();
        }

        private void button5_Click(object sender, EventArgs e)
        {

            if (listBox1.SelectedItem == null && listBox2.SelectedItem == null)
            {
                   MessageBox.Show("Chưa chọn món cần xóa","Thông báo",MessageBoxButtons.OK);
            }
            if (listBox1.SelectedItem != null || listBox2.SelectedItem != null)
            {
                if (MessageBox.Show("Bạn chắc chắn muốn xóa món này ?", "Thông báo", MessageBoxButtons.YesNo) == DialogResult.Yes) {
                    listBox1.Items.Remove(listBox1.SelectedItem);
                    listBox2.Items.Remove(listBox2.SelectedItem);
                }
                
            }
        }
    }
}
