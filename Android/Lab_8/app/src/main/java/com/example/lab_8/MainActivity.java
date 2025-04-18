package com.example.lab_8;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    Button btn;
    EditText user, pass;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        user = (EditText) findViewById(R.id.email);
        pass = (EditText) findViewById(R.id.email);
        btn = (Button) findViewById(R.id.button);

        user.addTextChangedListener(textWatcher);
        pass.addTextChangedListener(textWatcher);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Toast.makeText(getApplicationContext(), "Login Successful", Toast.LENGTH_LONG).show();
            }
        });
    }

    TextWatcher textWatcher = new TextWatcher() {
        @Override
        public void beforeTextChanged(CharSequence charSequence, int i, int i1, int i2) {

        }

        @Override
        public void onTextChanged(CharSequence charSequence, int i, int i1, int i2) {
            String usrnme = user.getText().toString().trim();
            String pswd = pass.getText().toString().trim();

            btn.setEnabled(!usrnme.isEmpty() && !pswd.isEmpty());
//            if (usrnme.equals("hello@mail.com")) {
//                if (pswd.equals("Hello")) {

//            }
//            else {
////                btn.setEnabled(false);
//            }
        }

        @Override
        public void afterTextChanged(Editable editable) {

        }
    };
}