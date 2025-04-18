package com.example.form_togglebutton;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.*;

public class MainActivity extends AppCompatActivity {

    EditText txt1, txt2;
    Button tb;
    String name,password;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        txt1 = findViewById(R.id.textbox1);
        txt2 = findViewById(R.id.textbox2);

        tb = findViewById(R.id.submit);
        tb.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                name = txt1.getText().toString();
                password = txt2.getText().toString();
                if(name.equals("admin") && password.equals("admin") ) {
                    Toast.makeText(MainActivity.this,"Login Successfull",Toast.LENGTH_SHORT).show();
                }
                else
                {
                    Toast.makeText(MainActivity.this,"Enter Valid Credentials",Toast.LENGTH_SHORT).show();
                }
            }
        });

    }
}
