package com.example.android_practicals;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.*;

public class MainActivity extends AppCompatActivity {

    Button btnSubmit;
    EditText name,password, email, dob;
    TextView result;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btnSubmit = findViewById(R.id.submit);
        name = (EditText) findViewById(R.id.txtName);
        password = (EditText) findViewById(R.id.txtPwd);
        email = (EditText) findViewById(R.id.txtEmail);
        dob = (EditText) findViewById(R.id.txtDate);
        btnSubmit = (Button) findViewById(R.id.submit);
        result = (TextView) findViewById(R.id.viewName);
        btnSubmit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (name.getText().toString().isEmpty() || password.getText().toString().isEmpty() || email.getText().toString().isEmpty() ||
                        dob.getText().toString().isEmpty()) {
                    result.setText("Please fill all details");
                } else {
                    result.setText("Name-" + name.getText().toString() + "\n" + "Password-" + password.getText().toString() + "\n" + "Email- " + email.getText().toString() + "\nDOB :- " + dob.getText().toString());
                }
            }
        });
    }



}