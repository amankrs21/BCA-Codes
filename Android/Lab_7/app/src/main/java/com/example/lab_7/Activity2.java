package com.example.lab_7;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class Activity2 extends AppCompatActivity {
    TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_2);

        textView = (TextView) findViewById(R.id.textview2);

        MainActivity obj = new MainActivity();
        String s = "You Login via Username - " + getIntent().getStringExtra("usr") + " and Password - " + getIntent().getStringExtra("pas");

        textView.setText(s.toString());

    }
}