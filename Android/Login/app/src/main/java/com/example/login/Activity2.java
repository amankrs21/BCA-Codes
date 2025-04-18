package com.example.login;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class Activity2 extends AppCompatActivity {

    TextView text;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_2);

        text = (TextView) findViewById(R.id.text);
        String s = "You login in this app, \n via Username - "+getIntent().getStringExtra("username")+"\n and Password - "+getIntent().getStringExtra("password");
        text.setText(s.toString());
    }
}