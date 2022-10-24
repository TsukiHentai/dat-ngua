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

namespace DuAnNguyenTheHuy83428
{
    public partial class NguyenThehuy83428 : Form
    {
        public NguyenThehuy83428()
        {
            InitializeComponent();
        }
        SqlConnection connection;
        SqlCommand command;
        string str = @"Data Source=ADMIN\HUY;Initial Catalog=NguyenTheHuy83428;Integrated Security=True";
        SqlDataAdapter adapter = new SqlDataAdapter();
        DataTable table = new DataTable();
        private void HienThi()
        {
            command = connection.CreateCommand();
            command.CommandText = "select DuAn.*,TenNV from DuAn inner join NhanVien on NhanVien.MaNV=DuAn.MaNV ";
            adapter.SelectCommand = command;
            table.Clear();
            adapter.Fill(table);
            dataGridView1.DataSource = table;
        }
        void TaoCombo1()
        {
            string sql = "select *from NhanVien";
            SqlCommand command = new SqlCommand(sql, connection);
            SqlDataAdapter adapter = new SqlDataAdapter(command);
            DataTable table = new DataTable();
            adapter.Fill(table);
            cmbMaNV.DataSource = table;
            cmbMaNV.DisplayMember = "TenNV";
            cmbMaNV.ValueMember = "MaNV";


        }

       
        private void Form1_Load(object sender, EventArgs e)
        {
            connection = new SqlConnection(str);
            connection.Open();
            TaoCombo1();
            HienThi();
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            string sql = "insert into DuAn values(@MaDA,@TenDA,@NgayBD,@NgayKT,@KinhPhi,@MaNV)";
            SqlCommand command = new SqlCommand(sql, connection);
            command.Parameters.AddWithValue("MaDA", txtMaDA.Text);
            command.Parameters.AddWithValue("TenDA", txtTenDA.Text);
            command.Parameters.AddWithValue("NgayBD", dtpNgayBD.Value);
            command.Parameters.AddWithValue("NgayKT", dtpNgayKT.Value);
            command.Parameters.AddWithValue("KinhPhi", txtKinhPhi.Text);
            command.Parameters.AddWithValue("MaNV", cmbMaNV.SelectedValue);
            command.ExecuteNonQuery();
            HienThi();
        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            string sql = "update DuAn set TenDA=@TenDA,NgayBD=@NgayBD,NgayKT=@NgayKT,KinhPhi=@KinhPhi,MaNV=@MaNV where MaDA=@MaDA";
            SqlCommand command = new SqlCommand(sql, connection);
            command.Parameters.AddWithValue("MaDA", txtMaDA.Text);
            command.Parameters.AddWithValue("TenDA", txtTenDA.Text);
            command.Parameters.AddWithValue("NgayBD", dtpNgayBD.Value);
            command.Parameters.AddWithValue("NgayKT", dtpNgayKT.Value);
            command.Parameters.AddWithValue("KinhPhi", txtKinhPhi.Text);
            command.Parameters.AddWithValue("MaNV", cmbMaNV.SelectedValue);
            command.ExecuteNonQuery();
            HienThi();
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            string sql = "delete from DuAn where MaDA=@MaDA";
            SqlCommand command = new SqlCommand(sql, connection);
            command.Parameters.AddWithValue("MaDA", txtMaDA.Text);
            command.ExecuteNonQuery();
            HienThi();
        }

        private void dataGridView1_Click(object sender, EventArgs e)
        {
            int i;
            i = dataGridView1.CurrentRow.Index;
            txtMaDA.Text = dataGridView1.Rows[i].Cells[0].Value.ToString();
            txtTenDA.Text = dataGridView1.Rows[i].Cells[1].Value.ToString();
            dtpNgayBD.Text = dataGridView1.Rows[i].Cells[2].Value.ToString();
            dtpNgayKT.Text = dataGridView1.Rows[i].Cells[3].Value.ToString();
            txtKinhPhi.Text = dataGridView1.Rows[i].Cells[4].Value.ToString();
            cmbMaNV.Text = dataGridView1.Rows[i].Cells[5].Value.ToString();
        }

       
        private void btnTimKiem_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "select DuAn.*,TenNV from DuAn inner join NhanVien on NhanVien.MaNV=DuAn.MaNV where TenNV='" + txtTenNVcantim.Text + "' and TenDA='" + txtTenDAcantim.Text + "'";
            if (ckbtennv.Checked)
            {
                command.CommandText = "select DuAn.*,TenNV from DuAn inner join NhanVien on NhanVien.MaNV=DuAn.MaNV where TenNV='" + txtTenNVcantim.Text + "'";
            }    
            if(ckbtenda.Checked)
            {
                command.CommandText = "select DuAn.*,TenNV from DuAn inner join NhanVien on NhanVien.MaNV=DuAn.MaNV where TenDA='" + txtTenDAcantim.Text + "'";
            } 
            command.ExecuteNonQuery();
            SqlDataAdapter adapter = new SqlDataAdapter();
            DataTable table = new DataTable();
            adapter.SelectCommand = command;
            table.Clear();
            adapter.Fill(table);
            dataGridView1.DataSource = table;
        }

        private void groupBox3_Enter(object sender, EventArgs e)
        {

        }
    }
}
