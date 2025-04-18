package com.example.lab_18;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.TimePicker;

public class MainActivity extends AppCompatActivity {

    Button btn;
    TextView text;
    TimePicker timePicker;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        btn = (Button) findViewById(R.id.button);
        text = (TextView) findViewById(R.id.textview);
        timePicker = (TimePicker) findViewById(R.id.timepicker);
        text.setText(gettime());
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                text.setText(gettime());
            }
        });
    }
    public String gettime() {
        String time = "Current Time is - " + timePicker.getCurrentHour()+":"+timePicker.getCurrentMinute();
        return time;
    }
}