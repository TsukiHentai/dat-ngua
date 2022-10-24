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

namespace NguyenMinhAnDuc82795
{
    public partial class frmSinhVien82795 : Form
    {
        public frmSinhVien82795()
        {
            InitializeComponent();
        }
        SqlCommand command;
        SqlConnection connection;
        String str = @"Data Source=DESKTOP-RDQ988Q\SQLEXPRESS;Initial Catalog=NguyenMinhAnDuc82795;Integrated Security=True";
        SqlDataAdapter adapter = new SqlDataAdapter();
        DataTable table = new DataTable();
        void HienThi()
        {
            command = connection.CreateCommand();
            command.CommandText = "select * from SinhVien";
            SqlDataAdapter adapter = new SqlDataAdapter();
            DataTable table = new DataTable();
            adapter.SelectCommand = command;
            table.Clear();
            adapter.Fill(table);
            dataGridView1.DataSource = table;
        }
        void Taocombo()
        {
            String sql = "select * from Lop";
            SqlCommand command = new SqlCommand(sql, connection);
            SqlDataAdapter adapter = new SqlDataAdapter(command);
            DataTable table = new DataTable();
            adapter.Fill(table);
            cmbMaLop.DataSource = table;
            cmbMaLop.DisplayMember = "TenLop";
            cmbMaLop.ValueMember = "MaLop";
        }
        private void frmSinhVien82795_Load(object sender, EventArgs e)
        {
            connection = new SqlConnection(str);
            connection.Open();
            Taocombo();
            HienThi();
        }

        private void dataGridView1_Click(object sender, EventArgs e)
        {
            int i;
            i = dataGridView1.CurrentRow.Index;
            txtMaSV.Text = dataGridView1.Rows[i].Cells[0].Value.ToString();
            txtTenSV.Text = dataGridView1.Rows[i].Cells[1].Value.ToString();
            txtGioiTinh.Text = dataGridView1.Rows[i].Cells[2].Value.ToString();
            dtpNgaySinh.Text = dataGridView1.Rows[i].Cells[3].Value.ToString();
            txtSDT.Text = dataGridView1.Rows[i].Cells[4].Value.ToString();
            cmbMaLop.Text = dataGridView1.Rows[i].Cells[5].Value.ToString();
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "insert into SinhVien values('" + txtMaSV.Text + "','" + txtTenSV.Text + "','" + txtGioiTinh.Text + "','" + dtpNgaySinh.Value.ToString("MM/dd/yyyy") + "','" + txtSDT.Text + "','" + cmbMaLop.SelectedValue.ToString() + "')";
            command.ExecuteNonQuery();
            HienThi();
        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "update SinhVien set "+"TenSV='" + txtTenSV.Text + "',GioiTinh='" + txtGioiTinh.Text + "',NgaySinh='" + dtpNgaySinh.Value.ToString("MM/dd/yyyy") + "',SDT='" + txtSDT.Text + "',MaLop='" + cmbMaLop.SelectedValue.ToString() + "' where MaSV='"+txtMaSV.Text+"'";
            command.ExecuteNonQuery();
            HienThi();
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            command.CommandText = "delete from SinhVien where MaSV='" + txtMaSV.Text + "'";
            command.ExecuteNonQuery();
            HienThi();
        }

        private void btnTimKiem_Click(object sender, EventArgs e)
        {
            command = connection.CreateCommand();
            if(ckbTenSV.Checked&ckbTimTenLop.Checked)
            {
                command.CommandText = "select * from SinhVien inner join Lop on SinhVien.MaLop=Lop.MaLop where TenSV='" + txtTimTenSV.Text + "' and TenLop='" + txtTimLop.Text + "'";
            }
            else
            {
                if(ckbTenSV.Checked)
                {
                    command.CommandText = "select * from SinhVien inner join Lop on SinhVien.MaLop=Lop.MaLop where TenSV='" + txtTimTenSV.Text + "'";
                }
                else
                {
                    if(ckbTimTenLop.Checked)
                    {
                        command.CommandText = "select * from SinhVien inner join Lop on SinhVien.MaLop=Lop.MaLop where TenLop='" + txtTimLop.Text + "'";
                    }
                    else
                    {
                        command.CommandText = "select MaSV, TenSV, GioiTinh, NgaySinh, SDT, MaLop from SinhVien";
                    }
                }
            }
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
