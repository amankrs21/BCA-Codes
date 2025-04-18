package com.logic;

import com.structure.db_structure;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

public class db_logic {
	
	
	SQLiteDatabase sd;
	db_structure db;
	public db_logic(Context c) {
		db=new db_structure(c);
	}
	public void ui_insert(String fnm,String lnm)
	{
		sd=db.getWritableDatabase();
		String query="insert into tbl_demo (fnm,lnm) values ('"+fnm+"','"+lnm+"')";
		sd.execSQL(query);
	}
	public void ui_delete(int id)
	{
		sd=db.getWritableDatabase();
		String query="delete from tbl_demo where id='"+id+"'";
		sd.execSQL(query);
	}
	public void ui_update(int id,String fnm,String lnm)
	{
		sd=db.getWritableDatabase();
		String query="update tbl_demo set fnm='"+fnm+"',lnm='"+lnm+"'where id='"+id+"'";
		sd.execSQL(query);
	}
	public Cursor ui_select()
	{
		sd=db.getWritableDatabase();
		String query="select * from tbl_demo";
	Cursor c=	sd.rawQuery(query, null);
	return c;
	}
	public Cursor ui_select_byid(int id)
	{
		sd=db.getWritableDatabase();
		String query="select * from tbl_demo where id='"+id+"'";
	Cursor c=	sd.rawQuery(query, null);
	return c;
	}

}
