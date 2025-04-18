package com.example.calendarview;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.CalendarView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    CalendarView clv;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        clv = findViewById(R.id.calendarView);
        clv.setOnDateChangeListener(new CalendarView.OnDateChangeListener() {
            @Override
            public void onSelectedDayChange(@NonNull CalendarView view, int year, int month, int dayOfMonth) {
                String dateofmonth = String.valueOf(dayOfMonth);
                String month1 = String.valueOf(month);
                String year1 = String.valueOf(year);
                Toast.makeText(MainActivity.this, dateofmonth+"/"+month1+"/"+year1, Toast.LENGTH_SHORT).show();
            }
        });
    }
}