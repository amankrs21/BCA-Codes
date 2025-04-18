package com.example.lab_10;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    ListView lst;
    String subjects[] = {"Data Structure", "Android", "Java", "C/C++", "Python", ".Net", "HTML", "PHP", "CSS", "JavaScript"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        lst = (ListView) findViewById(R.id.list);
        ArrayAdapter<String> arr = new ArrayAdapter<String>(this, androidx.appcompat.R.layout.support_simple_spinner_dropdown_item, subjects);
        lst.setAdapter(arr);

        lst.setOnItemClickListener(listclick);
    }
    AdapterView.OnItemClickListener listclick = new AdapterView.OnItemClickListener() {
        @Override
        public void onItemClick(AdapterView<?> adapterView, View view, int i, long l) {
            String itemvalue = (String) lst.getItemAtPosition(i);
            Toast.makeText(getApplicationContext(), itemvalue.toString(), Toast.LENGTH_LONG).show();

        }
    };
}