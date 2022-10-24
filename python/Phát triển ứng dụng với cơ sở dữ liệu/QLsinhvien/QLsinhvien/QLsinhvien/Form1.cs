using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace QLsinhvien
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        SqlConnection connection;
        SqlCommand command;
        string str = @"Data Source=ADMIN\HUY;Initial Catalog=Sinhvien;Integrated Security=True";
        SqlDataAdapter adapter = new SqlDataAdapter();
        DataTable table = new DataTable();

        void Hienthi()
        {

            command = connection.CreateCommand();
            command.CommandText = "select *from QLsinhvien";
            adapter.SelectCommand = command;
            table.Clear();
            adapter.Fill(table);
            dataGridView1.DataSource = table;

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            connection = new SqlConnection(str);
            connection.Open();
            Hienthi();
        }
        int i;
        private void dataGridView1_Click(object sender, EventArgs e)
        {
            i = dataGridView1.CurrentRow.Index;
            txtMaSV.Text = dataGridView1.Rows[i].Cells[0].Value.ToString();
            txtTenSV.Text = dataGridView1.Rows[i].Cells[1].Value.ToString();
            dtpNgaysinh.CustomFormat = dataGridView1.Rows[i].Cells[2].Value.ToString();
            txtMaLop.Text = dataGridView1.Rows[i].Cells[3].Value.ToString();
            txtNamVao.Text = dataGridView1.Rows[i].Cells[4].Value.ToString();
        }
        
        private void btnThem_Click(object sender, EventArgs e)
        {

            command = connection.CreateCommand();
            command.CommandText = "insert into QLsinhvien values('" + txtMaSV.Text + "','" + txtTenSV.Text + "','"+dtpNgaysinh.Value.ToString("MM / dd / yyyy") +"','" + txtMaLop.Text + "','" + txtNamVao.Text + "')";
            command.ExecuteNonQuery();
            Hienthi();
        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText="update QLsinhvien set TenSV='"+txtTenSV.Text+"',NgaySinh='"+dtpNgaysinh.Value.ToString("MM / dd / yyyy") +"',MaLop='"+txtMaLop.Text+"',NamVao="+txtNamVao.Text+" where MaSV='"+txtMaSV.Text+"'";
            command.ExecuteNonQuery();
            Hienthi();
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "delete from QLsinhvien where MaSV='" +txtMaSV.Text+ "'";
            command.ExecuteNonQuery();
            Hienthi();
        }

        private void btnTimKiem_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "Select *from QLsinhvien where MaSV='"+txtMaSV.Text+"'";
            command.ExecuteNonQuery();
            SqlDataAdapter adapter = new SqlDataAdapter();
            DataTable table = new DataTable();
            adapter.SelectCommand = command;
            table.Clear();
            adapter.Fill(table);
            dataGridView1.DataSource = table;
        }
    }
}

