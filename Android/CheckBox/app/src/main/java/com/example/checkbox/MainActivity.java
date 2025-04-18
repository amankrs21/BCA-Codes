package com.example.checkbox;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.*;

public class MainActivity extends AppCompatActivity {
    CheckBox ck1,ck2;
    Button btn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        ck1 = findViewById(R.id.checkbox1);
        ck2 = findViewById(R.id.checkbox2);
        btn = findViewById(R.id.submit);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                StringBuffer result = new StringBuffer();
                if(ck1.isChecked()) {
                    result.append("BCA");
                }
                if(ck2.isChecked()) {
                    result.append(" & MCA");
                }
                Toast.makeText(MainActivity.this,"hello" + " World",Toast.LENGTH_SHORT).show();
            }
        });
    }
}