package com.example.testkotlindemo01

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ArrayAdapter
import android.widget.Button
import android.widget.ListView
import android.widget.Toast

class MainActivity : AppCompatActivity() {

    private val  data = listOf("1","2","3","4","a","b","1","2","3","4","a","b")

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.mainactive)
        supportActionBar?.hide()
        val btn01:Button = findViewById<Button>(R.id.testBtn01)
        btn01.setOnClickListener {
            Toast.makeText(this, "click this btn", Toast.LENGTH_SHORT).show()
            val intent = Intent(this,subViewActivity::class.java)  //跳转到其他的activity页面
            startActivity(intent)
        }

        //lisstView常见用法
        val adapter = ArrayAdapter<String>(this,android.R.layout.simple_list_item_1,data)  //listView 适配器， android.R.layout.simple_list_item_1 内置布局文件
                                                                                                    //data 数据
        val listView = findViewById<ListView>(R.id.listView01)
        listView.adapter = adapter;

        //添加点击事件
        listView.setOnItemClickListener { parent, view, position, id ->
            val num = data[position]
            Toast.makeText(this,num,Toast.LENGTH_SHORT).show()
        }

        val testBtn2 = findViewById<Button>(R.id.testBtn02)
        testBtn2.setOnClickListener {
            Toast.makeText(this, "click this btn02 for test RecycleView", Toast.LENGTH_SHORT).show()
            val intentRecycleView = Intent(this,recycleViewActivity::class.java)
            startActivity(intentRecycleView)
        }


    }


}