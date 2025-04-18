package com.example.autocompletetextview;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.*;

public class MainActivity extends AppCompatActivity {
    AutoCompleteTextView actv;
    String city[] = {"Anand","Ahmedabad","Rajkot","Surat"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        actv = findViewById(R.id.autoCompleteTextView);
        ArrayAdapter adapter=new ArrayAdapter(MainActivity.this,android.R.layout.select_dialog_item,city);
        actv.setAdapter(adapter);
        actv.setThreshold(1);
    }
}