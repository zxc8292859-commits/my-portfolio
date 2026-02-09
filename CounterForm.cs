using System;
using System.Windows.Forms;

public class CounterForm : Form {
    private Button btnInc, btnDec;
    private Label lblCount;
    private int count = 0;

    public CounterForm() {
        this.Text = "Counter App";
        this.Size = new System.Drawing.Size(200,150);

        lblCount = new Label(){ Text="0", Left=80, Top=20, Width=50 };
        btnInc = new Button(){ Text="+", Left=30, Top=50, Width=50 };
        btnDec = new Button(){ Text="-", Left=100, Top=50, Width=50 };

        btnInc.Click += (s,e)=> { count++; lblCount.Text=count.ToString(); };
        btnDec.Click += (s,e)=> { count--; lblCount.Text=count.ToString(); };

        this.Controls.Add(lblCount);
        this.Controls.Add(btnInc);
        this.Controls.Add(btnDec);
    }
}
