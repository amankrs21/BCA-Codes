package com.example.myapp;

import com.logic.db_logic;

import android.app.Activity;
import android.content.Intent;
import android.database.Cursor;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.EditText;

public class update_java extends Activity {
	
	private EditText a1;
	private EditText a2;
	private Button btnb;

	public int id;
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		setContentView(R.layout.update);
		a1=(EditText)findViewById(R.id.ed1);
		a2=(EditText)findViewById(R.id.ed2);
		btnb=(Button)findViewById(R.id.btn1);
		
		Intent i= getIntent();
		id=i.getExtras().getInt("ID");
		db_logic d=new db_logic(update_java.this);
		Cursor c= d.ui_select_byid(id);
		
		while (c.moveToNext()) {
			a1.setText(c.getString(1));
			a2.setText(c.getString(2));
			
		}
		
		
		
		
		
		
		
		btnb.setOnClickListener(new OnClickListener() {
			
			@Override
			public void onClick(View v) {

					String k=a1.getText().toString();
					String k2=a2.getText().toString();
						
					db_logic d=new db_logic(update_java.this);
					d.ui_update(id, k, k2);
					
					Intent i=new Intent(update_java.this,disp_java.class);
					startActivity(i);
			}
		});
		
	}

}
