package com.example.menubar;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;

public class bca extends AppCompatActivity {
    TextView txt;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_bca);
        txt = findViewById(R.id.textView);
        Intent intent1 = getIntent();
        txt.setText(intent1.getStringExtra("data"));
    }
}