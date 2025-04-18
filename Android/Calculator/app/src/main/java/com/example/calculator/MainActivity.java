package com.example.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;
import javax.script.ScriptEngine;
import javax.script.ScriptEngineManager;
import javax.script.ScriptException;

public class MainActivity extends AppCompatActivity {

    TextView workingsTv;
    TextView resultsTv;

    String workings="";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        initTextViews();
    }

    private void initTextViews() {
        workingsTv = (TextView)findViewById(R.id.workingsTextView);
        resultsTv = (TextView)findViewById(R.id.resultTextView);
    }

    private void setWorkings(String givenValue) {
        workings = workings + givenValue;
        workingsTv.setText(workings);
    }

    public void clearOnClick(View view) {
        workingsTv.setText("");
        workings = "";
        resultsTv.setText("");
    }

    public void equalsToOnClick(View view) throws ScriptException {

        ScriptEngineManager manager = new ScriptEngineManager();
        ScriptEngine engine = manager.getEngineByName("js");
        Object result = engine.eval(workings);
        resultsTv.setText(result.toString());


    }

    public void bracketsOnClick(View view) {
    }

    public void powerOfOnClick(View view) {
        setWorkings("**");
    }

    public void divisionOnClick(View view) {
        setWorkings("/");
    }

    public void nineOnClick(View view) {
        setWorkings("9");
    }


    public void eightOnClick(View view) {
        setWorkings("8");
    }

    public void sevenOnClick(View view) {
        setWorkings("7");
    }

    public void multiplyOnClick(View view) {
        setWorkings("*");
    }

    public void sixOnClick(View view) {
        setWorkings("6");
    }

    public void fiveOnClick(View view) {
        setWorkings("5");
    }

    public void fourOnClick(View view) {
        setWorkings("4");
    }

    public void subtractOnClick(View view) {
        setWorkings("-");
    }

    public void threeOnClick(View view) {
        setWorkings("3");
    }

    public void twoOnClick(View view) {
        setWorkings("2");
    }

    public void oneOnClick(View view) {
        setWorkings("1");
    }

    public void addOnClick(View view) {
        setWorkings("+");
    }

    public void periodOnClick(View view) {
        setWorkings(".");
    }

    public void zeroOnClick(View view) {
        setWorkings("0");
    }


}