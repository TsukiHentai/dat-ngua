namespace Câu_1
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.txtsop = new System.Windows.Forms.TextBox();
            this.txtloaip = new System.Windows.Forms.TextBox();
            this.txtgiap = new System.Windows.Forms.TextBox();
            this.txttinhgiap = new System.Windows.Forms.TextBox();
            this.txtgiadv = new System.Windows.Forms.TextBox();
            this.btngiap = new System.Windows.Forms.Button();
            this.btngiadv = new System.Windows.Forms.Button();
            this.btnthoat = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(23, 35);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(53, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Số phòng";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(223, 38);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(60, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Loại phòng";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(23, 82);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(56, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "Giá phòng";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(23, 147);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(56, 13);
            this.label4.TabIndex = 3;
            this.label4.Text = "Giá phòng";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(223, 150);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(61, 13);
            this.label5.TabIndex = 4;
            this.label5.Text = "Giá dịch vụ";
            // 
            // txtsop
            // 
            this.txtsop.Location = new System.Drawing.Point(95, 35);
            this.txtsop.Name = "txtsop";
            this.txtsop.Size = new System.Drawing.Size(100, 20);
            this.txtsop.TabIndex = 5;
            // 
            // txtloaip
            // 
            this.txtloaip.Location = new System.Drawing.Point(289, 35);
            this.txtloaip.Name = "txtloaip";
            this.txtloaip.Size = new System.Drawing.Size(100, 20);
            this.txtloaip.TabIndex = 6;
            // 
            // txtgiap
            // 
            this.txtgiap.Location = new System.Drawing.Point(94, 79);
            this.txtgiap.Name = "txtgiap";
            this.txtgiap.Size = new System.Drawing.Size(100, 20);
            this.txtgiap.TabIndex = 7;
            // 
            // txttinhgiap
            // 
            this.txttinhgiap.Location = new System.Drawing.Point(95, 144);
            this.txttinhgiap.Name = "txttinhgiap";
            this.txttinhgiap.Size = new System.Drawing.Size(100, 20);
            this.txttinhgiap.TabIndex = 8;
            // 
            // txtgiadv
            // 
            this.txtgiadv.Location = new System.Drawing.Point(289, 144);
            this.txtgiadv.Name = "txtgiadv";
            this.txtgiadv.Size = new System.Drawing.Size(100, 20);
            this.txtgiadv.TabIndex = 9;
            // 
            // btngiap
            // 
            this.btngiap.Location = new System.Drawing.Point(43, 195);
            this.btngiap.Name = "btngiap";
            this.btngiap.Size = new System.Drawing.Size(120, 23);
            this.btngiap.TabIndex = 10;
            this.btngiap.Text = "Tính giá phòng";
            this.btngiap.UseVisualStyleBackColor = true;
            this.btngiap.Click += new System.EventHandler(this.btngiap_Click);
            // 
            // btngiadv
            // 
            this.btngiadv.Location = new System.Drawing.Point(181, 195);
            this.btngiadv.Name = "btngiadv";
            this.btngiadv.Size = new System.Drawing.Size(116, 23);
            this.btngiadv.TabIndex = 11;
            this.btngiadv.Text = "Tính giá dịch vụ";
            this.btngiadv.UseVisualStyleBackColor = true;
            this.btngiadv.Click += new System.EventHandler(this.btngiadv_Click);
            // 
            // btnthoat
            // 
            this.btnthoat.Location = new System.Drawing.Point(315, 195);
            this.btnthoat.Name = "btnthoat";
            this.btnthoat.Size = new System.Drawing.Size(75, 23);
            this.btnthoat.TabIndex = 12;
            this.btnthoat.Text = "Thoát";
            this.btnthoat.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(419, 261);
            this.Controls.Add(this.btnthoat);
            this.Controls.Add(this.btngiadv);
            this.Controls.Add(this.btngiap);
            this.Controls.Add(this.txtgiadv);
            this.Controls.Add(this.txttinhgiap);
            this.Controls.Add(this.txtgiap);
            this.Controls.Add(this.txtloaip);
            this.Controls.Add(this.txtsop);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Phòng";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtsop;
        private System.Windows.Forms.TextBox txtloaip;
        private System.Windows.Forms.TextBox txtgiap;
        private System.Windows.Forms.TextBox txttinhgiap;
        private System.Windows.Forms.TextBox txtgiadv;
        private System.Windows.Forms.Button btngiap;
        private System.Windows.Forms.Button btngiadv;
        private System.Windows.Forms.Button btnthoat;
    }
}

