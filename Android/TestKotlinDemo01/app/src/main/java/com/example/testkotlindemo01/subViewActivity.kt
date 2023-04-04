package com.example.testkotlindemo01

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ListView
import android.widget.Toast

class subViewActivity : AppCompatActivity() {
    private val lvData = ArrayList<selfLitViewData>()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.subview)

        initLVData() //初始自定义listView类
        val adapter = SelfListViewAdapter(this,R.layout.self_listview,lvData)  //自定义的控件Xml，传入后初始化自定义控件元素
        val listView = findViewById<ListView>(R.id.subListView01)    //获取ListView 控价容器（即存放自定义控件的容器）
        listView.adapter = adapter; //自定义控件与系统的ListView 通过适配器Adapter进行数据适配

        ///listView添加点击事件(注：当listView中自定控价中包含Button时会自动获取点击焦点导致，listView不能点击)
        listView.setOnItemClickListener{ parent,view, position,id->
            val tempData = lvData[position]
            Toast.makeText(this,tempData.name,Toast.LENGTH_SHORT).show()
        }
    }

   private fun initLVData(){
       repeat(3){
           lvData.add(selfLitViewData("1","a"))
           lvData.add(selfLitViewData("2","b"))
           lvData.add(selfLitViewData("3","c"))
           lvData.add(selfLitViewData("4","d"))
           lvData.add(selfLitViewData("5","e"))
           lvData.add(selfLitViewData("6","f"))
       }
   }


}
