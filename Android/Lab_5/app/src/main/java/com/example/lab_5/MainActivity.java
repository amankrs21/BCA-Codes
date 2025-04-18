package com.example.lab_5;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    EditText num1, num2;
    TextView output;
    Button btn1, btn2, btn3, btn4;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        num1 = (EditText) findViewById(R.id.edittext1);
        num2 = (EditText) findViewById(R.id.edittext2);
        output = (TextView) findViewById(R.id.output);
        btn1 = (Button) findViewById(R.id.add);
        btn2 = (Button) findViewById(R.id.sub);
        btn3 = (Button) findViewById(R.id.mul);
        btn4 = (Button) findViewById(R.id.div);

        btn1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String s1 = num1.getText().toString();
                String s2 = num2.getText().toString();
                int a = Integer.parseInt(s1);
                int b = Integer.parseInt(s2);
                int c = a + b;

                output.setText("Addition is -> "+Integer.toString(c));
            }
        });

        btn2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String s1 = num1.getText().toString();
                String s2 = num2.getText().toString();
                int a = Integer.parseInt(s1);
                int b = Integer.parseInt(s2);
                int c = a - b;

                output.setText("Substraction is -> "+Integer.toString(c));
            }
        });

        btn3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String s1 = num1.getText().toString();
                String s2 = num2.getText().toString();
                int a = Integer.parseInt(s1);
                int b = Integer.parseInt(s2);
                int c = a * b;

                output.setText("Multiplication is -> "+Integer.toString(c));
            }
        });

        btn4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String s1 = num1.getText().toString();
                String s2 = num2.getText().toString();
                int a = Integer.parseInt(s1);
                int b = Integer.parseInt(s2);
                int c = a / b;

                output.setText("Division is -> "+Integer.toString(c));
            }
        });

    }
}