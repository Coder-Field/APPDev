package com.example.testkotlindemo01

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import android.widget.Toast
import androidx.recyclerview.widget.RecyclerView

///ListView recycleView 等需要在item 可以使用系统自带的比较简陋，也可以由用户自定义，自定义的view就需要使用由用户创建自定义控件
//所需的数据，简称adapter 继承自ListView或recycleView 按照提供的方法初始化所需数据
class selfRecycleViewAdapter(val recycleData:List<selfLitViewData>):RecyclerView.Adapter<selfRecycleViewAdapter.ViewHolder>() {
    inner class ViewHolder(view:View):RecyclerView.ViewHolder(view){
        val name = view.findViewById<TextView>(R.id.self_LV_TextView01)
        val text  = view.findViewById<TextView>(R.id.self_LV_ImageView01)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.self_listview,parent,false)
        //自定义控价添加点击响应事件

//        val viewHolder = ViewHolder(view)
//
//        viewHolder.itemView.setOnClickListener{
//            val position = viewHolder.adapterPosition
//            val tempData = recycleData[position]
//            Toast.makeText(parent.context,"click itemView",Toast.LENGTH_SHORT).show()
//        }

//        viewHolder.text.setOnClickListener {
//            val position = viewHolder.adapterPosition
//            val tempData = recycleData[position]
//            Toast.makeText(parent.context,"click text",Toast.LENGTH_SHORT).show()
//        }

        return ViewHolder(view)
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        val selfData = recycleData[position]
        holder.name.text=selfData.name
        holder.text.text=selfData.imageId
    }

    override fun getItemCount(): Int {
        return recycleData.size
    }

}