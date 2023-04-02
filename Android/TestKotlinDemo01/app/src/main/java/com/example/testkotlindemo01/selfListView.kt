package com.example.testkotlindemo01

import android.app.Activity
import android.content.Context
import android.util.AttributeSet
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ArrayAdapter
import android.widget.LinearLayout
import android.widget.ListView
import android.widget.TextView

///创建SelfListView的适配器
class selfLitViewData(val name:String, val imageId:String)

class SelfListViewAdapter(activity: Activity, val resouceId:Int, data: List<selfLitViewData>):ArrayAdapter<selfLitViewData>(activity,resouceId,data)
{
    override fun getView(position: Int, convertView: View?, parent: ViewGroup): View {

        val view = LayoutInflater.from(context).inflate(resouceId,parent,false)
        val textviewInfo = view.findViewById<TextView>(R.id.self_LV_TextView01)
        val imageInfo= view.findViewById<TextView>(R.id.self_LV_ImageView01)
        val selfData = getItem(position)

        if(selfData!=null)
        {
            textviewInfo.text = selfData.name
            imageInfo.text = selfData.imageId
        }
        return view
    }
}