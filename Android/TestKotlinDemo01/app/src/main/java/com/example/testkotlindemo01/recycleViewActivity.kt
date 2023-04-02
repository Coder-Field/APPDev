package com.example.testkotlindemo01

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ListView
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.StaggeredGridLayoutManager

class recycleViewActivity : AppCompatActivity() {
    private val lvData = ArrayList<selfLitViewData>()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.recycle_view)
        initLVData() //初始自定义listView类
        val layoutManager = LinearLayoutManager(this)
//        layoutManager.orientation = LinearLayoutManager.HORIZONTAL   //水平方向布局，默认垂直方向
        //瀑布方式
//        val layoutManager= StaggeredGridLayoutManager(3,StaggeredGridLayoutManager.VERTICAL)

        val recycleView = findViewById<androidx.recyclerview.widget.RecyclerView>(R.id.recycleView02)
        recycleView.layoutManager = layoutManager

        val adapter = selfRecycleViewAdapter(lvData)
        recycleView.adapter = adapter

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