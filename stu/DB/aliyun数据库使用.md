

# 本文知识链接：  
https://developer.aliyun.com/adc/scenario/7e075169268c476a82a3519c128dc958?spm=a2c6h.28290674.J_3377303910.3.3a021084VX796N  

# 背景知识
本场景主要涉及以下云产品和服务：

- 云数据库RDS MySQL Serverless版  
云数据库 RDS MySQL Serverless版是一种稳定可靠、可弹性伸缩的在线 MySQL 数据库服务，帮助您免除 MySQL 运维的烦恼。Serverless计费方式无需按固定资源付费，根据业务负载自适应动态匹配资源，秒级弹性升降资源与计费，最高可节省 70% 费用。

- 数据管理DMS    
数据管理服务（Data Management Service，简称DMS）支持MySQL、SQL Server、PostgreSQL、Oracle、MongoDB、Oceanbase等关系型数据库和NoSQL数据库的管理。它是一种集数据管理、结构管理、用户授权、安全审计、数据趋势、数据追踪、BI图表、性能与优化和服务器管理于一体的数据管理服务。用户使用数据管理服务实现易用的数据库和服务器统一管理入口，让数据更安全、管理更高效、数据价值更清晰。  

# 模型图：
## student 学生
sid(主键ID)
sname(姓名)
sage(年龄)
ssex(性别)

## sc
sid (外键)
cid(外键)
score(成绩)  

## course 课程
cid(课程ID)
cname(课程名)
tid(外键)  

## teacher 教师  
tid(主键ID)
tname(教师名称)  

