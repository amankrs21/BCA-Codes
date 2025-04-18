package com.example.intent;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.*;
import android.content.Intent;

public class MainActivity extends AppCompatActivity {
    EditText txt1, txt2;
    Button btn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        txt1 = findViewById(R.id.textbox1);
        txt2 = findViewById(R.id.textbox2);
        btn =findViewById(R.id.submit);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(txt1.getText().toString().equals("admin") && txt2.getText().toString().equals("admin")) {
                    Intent intent = new Intent(MainActivity.this,SecondActivity.class);
                    intent.putExtra("data",txt1.getText().toString());
                    startActivity(intent);
                }
            }
        });

    }
}