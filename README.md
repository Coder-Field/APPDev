# APPDev
## 应用开发
`主要涉及UI界面编程，包含windows、iOS和Android端应用`

### 1、git提交规范

Commit subject: 须以动词开头，常见使用场景如下
```text
--feat:         新功能(fature)
--fix:          修复bug
--docs:         文档更新
--style:        代码格式调整
--refactor:     重构
--chore:        杂项(构建过程或者辅助工具更改)
--revert:       版本回退
--perf:         性能提升
--test:         测试相关
--improvement:  代码改进
--build:        打包操作
--ci:           持续集成

示例：
feat(payment): integrate PayPal gateway  
```

Description： 提交的详细描述，示例如下
```text

- 新增 PayPal SDK 依赖与配置  
- 实现支付回调校验逻辑  
- 添加失败重试机制（最多 3 次）  
  
Closes #112  
 

```

```text
                     ______   _          _       _   ____   __   __   _____ 
                    |  ____| (_)        | |     | | |  _ \  \ \ / /  / ____|
                    | |__     _    ___  | |   __| | | |_) |  \ V /  | |     
                    |  __|   | |  / _ \ | |  / _` | |  _ <    > <   | |     
                    | |      | | |  __/ | | | (_| | | |_) |  / . \  | |____
                    |_|      |_|  \___| |_|  \__,_| |____/  /_/ \_\  \_____|
                                                                             
```




                                                                    
