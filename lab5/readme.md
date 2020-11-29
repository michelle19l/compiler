生成ast

**模板构成**
- common.h包含自定义的结点头文件 模板中只提供了简单的语法树结点tree.h 在其他文件中通过引用common.h即可使用自定义结点的各类方法
- main.l词法分析文件 通过flex编译后生成lex.yy.cc 在文件中引用common.h来使用自定义语法树结点的方法 引用main.tab.hh来使用语法分析过程中声明的token 配合语法分析器使用 生成的整个过程通过yylex()进行调用
- main.y语法分析文件 通过bison编译生成main.tab.hh main.tab.cc 注意为了生成头文件需要在文件中加入%option defines 在文件中引用common.h来使用自定义语法树结点方法 加入yylex()函数声明来允许调用词法分析方法 生成的整个过程通过yyparse()进行调用
- main.cpp主体程序 包含main()函数 通过引用main.tab.hh来调用yyparse()开始语法分析过程 通过引用common.h来调用自定义语法树结点方法
- main.output bison编译时通过加入-v参数而生成的文法分析说明文件
- main.out 最后编译得到的可执行文件
- tree.h tree.cpp自定义语法树结点的声明与实现
- .gitignore 控制git管理文件时忽略文件的规则
- Makefile Makefile命令声明