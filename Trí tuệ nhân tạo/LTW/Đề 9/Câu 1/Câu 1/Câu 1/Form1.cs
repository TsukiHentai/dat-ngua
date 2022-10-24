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
        int ngay, thang, nam;
        //public void thoigian(int n)
        //{
        //    ngay = ngay + n;
        //    while(ngay>=29)
        //    {
        //        thang++;
        //        ngay = ngay - 29;
        //    }
        //    while(thang>=12)
        //    {
        //        nam++;
        //        thang = thang - 12;
        //    }
        //}
        public bool check_nam()
        {
            return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) ? true : false;
        }
        public bool check_stop()
        {
            if(check_nam())
            {
                if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay <= 31)
                    return true;
                if ((thang == 4 || thang == 6 || thang == 9 || thang == 11 ) && ngay <= 30)
                    return true;
                if (thang == 2 && ngay <= 29)
                    return true;
                return false;
            }
            else
            {
                if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay <= 31)
                    return true;
                if ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay <= 30)
                    return true;
                if (thang == 2 && ngay <= 28)
                    return true;
                return false;
            }
        }
        public void thoigian(int n)
        {
            ngay += n;
            while(!check_stop())
            {
                if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay > 31)
                {
                    if(thang==12)
                    {
                        thang = 1;
                        nam++;
                        ngay -= 31;
                        continue;
                    }
                    thang++;
                    ngay -= 31;
                }
                if (thang == 2 && ngay > 29)
                {
                    thang++; 
                    ngay -= 29;
                }
                if ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay > 30)
                {
                    thang++;
                    ngay -= 30;
                }

            }
        }
        private void btnTinh_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(txtNgay.Text) || string.IsNullOrEmpty(txtThang.Text) || string.IsNullOrEmpty(txtNam.Text))
            {
                MessageBox.Show("Bạn chưa nhập đủ dữ liệu", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                ngay = int.Parse(txtNgay.Text);
                thang = int.Parse(txtThang.Text);
                nam = int.Parse(txtNam.Text);
                thoigian(int.Parse(txtN.Text));
                textBox3.Text = ngay.ToString();
                textBox2.Text = thang.ToString();
                textBox1.Text = nam.ToString();
            }

        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
            if(MessageBox.Show("Bạn muốn thoát không ?","Thông báo",MessageBoxButtons.YesNo)==DialogResult.Yes)
            {
                Application.Exit();
            }
        }
    }
}
