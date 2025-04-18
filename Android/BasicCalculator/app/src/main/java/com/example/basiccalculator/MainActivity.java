package com.example.basiccalculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.*;

public class MainActivity extends AppCompatActivity {
//Toast.makeText(MainActivity.this, "hi",Toast.LENGTH_SHORT)
    Button btn;
    TextView txt;
    EditText etxt1,etxt2;
    int n1,n2;
    int result;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btn = findViewById(R.id.button);
        txt = findViewById(R.id.textView1);
        etxt1 = findViewById(R.id.editText1);
        etxt2 = findViewById(R.id.editText2);
    }

    public void submit(View view) {
    n1 = Integer.parseInt(etxt1.getText().toString());
    n2 = Integer.parseInt(etxt2.getText().toString());
    result = n1 + n2;
    txt.setText(result);
    }
}