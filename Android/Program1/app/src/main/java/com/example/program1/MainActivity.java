package com.example.program1;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.*;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Log.i("lc", "On Create Method is called" );

    }

    protected void onStart() {
        super.onStart();
        Log.i("lc","OnStart Method is called");
    }

    protected void onResume() {
        super.onResume();
        Log.i("lc", "OnResume Method is called");
    }

    protected void onPause() {
        super.onPause();
        Log.i("lc", "OnPause Method is called");
    }

    protected void onStop() {
        super.onStop();
        Log.i("lc", "OnStop Method is called");
    }


    protected void onDestroy() {
        super.onDestroy();
        Log.i("lc", "OnDestroy Method is called");
    }
}