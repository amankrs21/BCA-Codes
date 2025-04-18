package com.example.myapp;

import com.logic.db_logic;

import android.os.Bundle;
import android.app.Activity;
import android.content.Intent;
import android.view.Menu;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends Activity {

	EditText ed1,ed2;
	Button btn;
	private Button disp;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		
		ed1=(EditText)findViewById(R.id.edfnm);
		 ed2=(EditText)findViewById(R.id.edlnm);
		btn=(Button)findViewById(R.id.btnok);
		disp=(Button)findViewById(R.id.btndisp);
		
		
		disp.setOnClickListener(new OnClickListener() {
			
			@Override
			public void onClick(View v) {
				Intent i=new Intent(MainActivity.this,disp_java.class);
				startActivity(i);
				
				
				
			}
		});
		
		btn.setOnClickListener(new OnClickListener() {
			
			@Override
			public void onClick(View v) {
				// TODO Auto-generated method stub
				String f=ed1.getText().toString();
				String l=ed2.getText().toString();
				db_logic d=new db_logic(MainActivity.this);
				d.ui_insert(f, l);
				
				
			}
		});
		
		
		
		
		
		
		
		
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

}
