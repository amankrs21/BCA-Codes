package com.example.login_button;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText usr, pwd;
    Button btn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        usr = (EditText) findViewById(R.id.username);
        pwd = (EditText) findViewById(R.id.password);
        btn = (Button) findViewById(R.id.login);

        pwd.addTextChangedListener(textWatcher);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Toast.makeText(getApplicationContext(), "Login Successfull", Toast.LENGTH_LONG).show();
//                if (usr.getText().toString().equals("amankrs21") && pwd.getText().toString().equals("amanraj")) {
//                    Toast.makeText(getApplicationContext(), "Login Successfull", Toast.LENGTH_LONG).show();
//                } else {
//                    Toast.makeText(getApplicationContext(), "Invalid Credentials", Toast.LENGTH_LONG).show();
//                }
            }
        });
    }
    TextWatcher textWatcher = new TextWatcher() {
        @Override
        public void beforeTextChanged(CharSequence charSequence, int i, int i1, int i2) {
        }
        @Override
        public void onTextChanged(CharSequence charSequence, int i, int i1, int i2) {
            if (usr.getText().toString().equals("amankrs21")) {
                if (pwd.getText().toString().equals("amanraj")) {
                    btn.setEnabled(true);
                }
                else {
                    btn.setEnabled(false);
                }
            }
        }
        @Override
        public void afterTextChanged(Editable editable) {
        }
    };
}