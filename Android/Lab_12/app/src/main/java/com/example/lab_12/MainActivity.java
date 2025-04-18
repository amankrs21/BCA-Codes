package com.example.lab_12;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    CheckBox cri, hoc, foot;
    Button btn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        cri = (CheckBox) findViewById(R.id.first);
        hoc = (CheckBox) findViewById(R.id.sec);
        foot = (CheckBox) findViewById(R.id.third);
        btn = (Button) findViewById(R.id.submit);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                StringBuilder result = new StringBuilder();
                result.append("You Favorite Sports are - ");
                if (cri.isChecked()) {
                    result.append("\n Cricket");
                }
                if (hoc.isChecked()) {
                    result.append("\n Hockey");
                }
                if (foot.isChecked()) {
                    result.append("\n Football");
                }
                Toast.makeText(MainActivity.this, result, Toast.LENGTH_SHORT).show();
            }
        });
    }
}