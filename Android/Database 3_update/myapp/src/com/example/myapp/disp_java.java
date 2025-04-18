package com.example.myapp;

import java.util.ArrayList;

import com.logic.db_logic;

import android.app.Activity;
import android.content.Intent;
import android.database.Cursor;
import android.os.Bundle;
import android.view.ContextMenu;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ContextMenu.ContextMenuInfo;
import android.widget.AdapterView.AdapterContextMenuInfo;
import android.widget.ArrayAdapter;
import android.widget.ListView;

public class disp_java extends Activity {
	
	
	private ListView ls;
	ArrayList<Integer> aid=new ArrayList<Integer>();
	ArrayList<String> adata=new ArrayList<String>();
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		setContentView(R.layout.disp_xml);
		
		
		
		
		ls=(ListView)findViewById(R.id.lst);
		registerForContextMenu(ls);
		
		db_logic dd=new db_logic(disp_java.this);
		Cursor c = dd.ui_select();
		
		while (c.moveToNext()) {
			String f= c.getString(1);
			String l=c.getString(2);
			
			int id=c.getInt(0);
			
			aid.add(id);
			adata.add("First Name : "+f+"\n"+"Last Name : "+l+"\n");
			
		}
		ls.setAdapter(new ArrayAdapter<String>(disp_java.this,android.R.layout.simple_list_item_1,adata));
	
	}
	
	@Override
	public boolean onContextItemSelected(MenuItem item) {
		// TODO Auto-generated method stub
		
		int id=item.getItemId();
		if(id==1)
		{
			AdapterContextMenuInfo ad= (AdapterContextMenuInfo)item.getMenuInfo();
			int pos=ad.position;
			int did=aid.get(pos);
			
			Intent i=new Intent(disp_java.this,update_java.class);
			i.putExtra("ID",did);
			startActivity(i);	
		}
		else if(id==2)
		{
			AdapterContextMenuInfo ad= (AdapterContextMenuInfo)item.getMenuInfo();
			int pos=ad.position;
			int did=aid.get(pos);
			db_logic d=new db_logic(disp_java.this);
			d.ui_delete(did);
			aid.remove(pos);
			adata.remove(pos);
			
			
		}
		else
		{
			
		}
		ls.setAdapter(new ArrayAdapter<String>(disp_java.this,android.R.layout.simple_list_item_1,adata));
		return super.onContextItemSelected(item);
		
	}
	
	
	@Override
	public void onCreateContextMenu(ContextMenu menu, View v,
			ContextMenuInfo menuInfo) {
		
		super.onCreateContextMenu(menu, v, menuInfo);
		
		menu.add(0, 1, Menu.NONE, "Edit");
		menu.add(0, 2, Menu.NONE, "Delete");
		menu.add(0, 3, Menu.NONE, "Exit");
		
		
		
	}
	
	

}
