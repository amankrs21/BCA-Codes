package com.example.lab_6;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.AutoCompleteTextView;

public class MainActivity extends AppCompatActivity {
    AutoCompleteTextView text;
    String name[] = {"Aman", "Singh", "Roshni", "Parul", "University"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        text = (AutoCompleteTextView) findViewById(R.id.textview1);
        ArrayAdapter adapter = new ArrayAdapter(MainActivity.this, android.R.layout.select_dialog_item, name);
        text.setAdapter(adapter);
        text.setThreshold(1);
    }
}