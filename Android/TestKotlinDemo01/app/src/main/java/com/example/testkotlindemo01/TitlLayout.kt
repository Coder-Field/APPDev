package com.example.testkotlindemo01

import android.content.Context
import android.util.AttributeSet
import android.util.Log
import android.view.LayoutInflater
import android.widget.Button
import android.widget.LinearLayout

class TitlLayout(context: Context, attrs:AttributeSet):LinearLayout(context,attrs) {
    init {
        LayoutInflater.from(context).inflate(R.layout.title01,this)

        val backBtn:Button = findViewById<Button>(R.id.title01Back)
        backBtn.setOnClickListener {
            Log.d("bxcTest","click titleEditBtn")
        }

        val editBtn:Button = findViewById<Button>(R.id.title01Edit)
        editBtn.setOnClickListener {
            Log.d("bxcTest","click titleEditBtn")
        }

    }
}