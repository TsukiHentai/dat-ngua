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

namespace CHAMCONG
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        SqlConnection connection;
        SqlCommand command;
        string str = @"Data Source=ADMIN\HUY;Initial Catalog=ChamCongSanPham;Integrated Security=True";
        SqlDataAdapter adapter = new SqlDataAdapter();
        DataTable table = new DataTable();
        void HienThi()
        {
            command = connection.CreateCommand();
            command.CommandText = "SELECT ChamCong.*, TenSP, TenCN FROM ChamCong INNER JOIN SanPham ON ChamCong.MaSP = SanPham.MaSP INNER JOIN CongNhan ON ChamCong.MaCN = CongNhan.MaCN";
            adapter.SelectCommand = command;
            table.Clear();
            adapter.Fill(table);
            dataGridView1.DataSource = table;
        }
        void Taocombo1()
        {
            string sql = "select *from SanPham";
            SqlCommand command = new SqlCommand(sql, connection);
            SqlDataAdapter adapter = new SqlDataAdapter(command);
            DataTable table = new DataTable();
            adapter.Fill(table);
            cmbMaSP.DataSource = table;
            cmbMaSP.DisplayMember = "TenSP";
            cmbMaSP.ValueMember = "MaSP";
        }
        void Taocombo2()
        {
            string sql = "select *from CongNhan";
            SqlCommand command = new SqlCommand(sql, connection);
            SqlDataAdapter adapter = new SqlDataAdapter(command);
            DataTable table = new DataTable();
            adapter.Fill(table);
            cmbMaCN.DataSource = table;
            cmbMaCN.DisplayMember = "TenCN";
            cmbMaCN.ValueMember = "MaCN";
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            connection = new SqlConnection(str);
            connection.Open();
            Taocombo1();
            Taocombo2();
            HienThi();
        }

        private void Form1_Click(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void dataGridView1_Click(object sender, EventArgs e)
        {
            int i;
            i = dataGridView1.CurrentRow.Index;
            txtID.Text = dataGridView1.Rows[i].Cells[0].Value.ToString();
            dtpNgay.Text = dataGridView1.Rows[i].Cells[1].Value.ToString();
            cmbMaCN.Text = dataGridView1.Rows[i].Cells[2].Value.ToString();
            cmbMaSP.Text = dataGridView1.Rows[i].Cells[3].Value.ToString();
            txtSoSP.Text = dataGridView1.Rows[i].Cells[4].Value.ToString();
            
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "insert into ChamCong values('" + txtID.Text + "','" + dtpNgay.Value.ToString("MM/dd/yyyy") + "','" + cmbMaCN.SelectedValue.ToString() + "','" + cmbMaSP.SelectedValue.ToString() + "','" +txtSoSP.Text+ "')";
            command.ExecuteNonQuery();
            HienThi();
        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "update ChamCong set " + "Ngay='" + dtpNgay.Value.ToString("MM/dd/yyyy") + "',MaCN='" + cmbMaCN.SelectedValue.ToString() + "',MaSP='" + cmbMaSP.SelectedValue.ToString() + "',SoSP='" + txtSoSP.Text+ "' where ID='" + txtID.Text + "'";
            command.ExecuteNonQuery();
            HienThi();
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "delete from ChamCong where ID='" + txtID.Text + "'";
            command.ExecuteNonQuery();
            HienThi();
        }

        private void btnTimKiem_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "SELECT ChamCong.*, TenSP, TenCN FROM ChamCong INNER JOIN SanPham ON ChamCong.MaSP = SanPham.MaSP INNER JOIN CongNhan ON ChamCong.MaCN = CongNhan.MaCN where TenSP='" + txtTenSP.Text + "'";
            command.ExecuteNonQuery();
            SqlDataAdapter adapter = new SqlDataAdapter();
            DataTable table = new DataTable();
            adapter.SelectCommand = command;
            table.Clear();
            adapter.Fill(table);
            dataGridView1.DataSource = table;
        }

        private void txtTenSPcantim_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
