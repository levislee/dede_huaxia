<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>" />
<meta name="viewport" content="width=device-width,initial-scale=1.0,maximum-scale=1.0,user-scalable=no">
<title><?php echo $cfg_webname; ?>- 个人中心</title>
<link href="/templets/default/css/style.css" rel="stylesheet" type="text/css" />
<link href="/templets/default/css/reset.css" rel="stylesheet" type="text/css" />
<link href="/templets/default/css/mobile.css" rel="stylesheet" type="text/css" />
<script src="templets/js/j.js" language="javascript" type="text/javascript"></script>
  <script src="https://cdn.bootcss.com/jquery/3.2.1/jquery.js"></script>
  <script src="/templets/default/js/menu.js"></script>
<script type="text/javascript">
function changeAuthCode() {
  var num =   new Date().getTime();
  var rand = Math.round(Math.random() * 10000);
  num = num + rand;
  $('#ver_code').css('visibility','visible');
  if ($("#vdimgck")[0]) {
    $("#vdimgck")[0].src = "../include/vdimgck.php?tag=" + num;
  }
  return false;
}
</script>
<style type="text/css">
<!--
.vermenu{
  background:#FFFFFF none repeat scroll 0 0;
  border:1px solid #EEEEEE;
  position:absolute;
  top: 208px;
}
-->
body{background: url(/templets/default/img/grzx.png)0 0 no-repeat;background-size:cover }
.infoot{background:none;}
#login {margin:50px auto 100px ;}
.zxbmlogo{margin-top: 50px;}
.tip1{display: none;}
.w200{width:300px;border:1px solid #e04649;border-radius: 30px;height:32px;}
#login .theme span{font-size: 20px;line-height: 40px;text-align: left}
.rank{margin:13px 0 0 5px;}
#_userid,#_userpwd{font-size: 16px;}
#_userpwdok b{font-size: 16px;}
#_email{font-size: 16px;}
.bor{width:92%;max-width: 800px;padding: 4% 4% 3% 4%;background:rgba(255,255,255,0.5);margin-bottom: 90px;border: 2px solid #e04649;border-radius: 30px;box-shadow: 5px 5px 5px rgba(0,0,0,0.5)}
#login .theme{width:100%;padding:0;}
#btnSignCheck{background: #a62727;font-size: 24px;border-radius: 30px;font-weight: normal;height: 45px;
    line-height: 45px;
    width: 137px;margin-left: 32px;}
.qx{background: transparent;font-size: 24px;border-radius: 30px;border:1px solid #a62727;height: 45px;
    line-height: 45px;
    width: 137px;}
    #login .theme li {
    margin-bottom:0;margin-top:40px;}
    .fLeft{float: none!important;margin:0 auto;}
.fLeft .text{    width: 300px;
    border: 1px solid #e04649;
    border-radius: 30px;
    height: 32px!important;}
.login_from{background:url(http://theme1320.leixunkj.com/member/templets/images/bg_button.png)no-repeat 0px -440px;}
.login_from2{background:url(http://theme1320.leixunkj.com/member/templets/images/bg_button.png)no-repeat 0px -467px;}
.login .main span{font-size: 20px;}
.login .main{font-size: 20px}
.login .main li{margin-bottom:35px;}
.login .main h3{padding-left:30px;font-size: 18px;}.login .main h3 em{font-size: 18px;}
.main{max-width: 440px;width:100%;}
.login .main form ul li a{color:#e04649;}
</style>
</head>
<body>
<!--内页头部部分-->
<header class="top">
<div class="top_tel top_box">
  <div class="top_tel_top">
  <nav>
    <div class="top_tel_l">全国客服热线：<span>400-7788859</span></div>
    <div class="top_tel_r">
<?php
//未登录显示的head

  require_once(DEDEINC."/memberlogin.class.php");
  $member = new MemberLogin();
  $memberID = $member->M_LoginID;

          //登录后显示的head
  if($memberID) {

          $a =   '<SPAN style="color:#fff;line-height: 28px">会员:</SPAN><a href="/member/index.php" class="userName" style="color:#fff;line-height: 28px">'.$memberID.'</a>'.'   <a href="/member/index_do.php?fmdo=login&dopost=exit#" style="color:#fff;line-height: 28px">[退出]</a>';
          echo $a;
  }
  else {

          echo    '
          <li><a title="登录" rel="nofollow" href="/member/login.php">登录</a> </li>
          <li></li>
          <li><a title="注册" rel="nofollow" href="/member/index_do.php?fmdo=user&dopost=regnew">注册</a> </li>';
  }
?>
    </ul></div>
    </nav>
  </div>
  <div class="menu_nav">
     <section>
     <div class="pc_logo"><a href="/"><img src="/templets/default/img/logo.png" alt="华夏夫人官网"></a></div>
     <div class="nav"><ul>
     <li><a href="/"><span></span><em>华夏夫人首页</em></a></li>

  <li><a href="/plus/list.php?tid=1"><span></span><em>华夏夫人资讯 </em></a></li>
  <li><a href="/plus/list.php?tid=2"><span></span><em>华夏夫人报名 </em></a></li>
  <li><a href="/plus/list.php?tid=3"><span></span><em>投票注册 </em></a></li><li><a href='/plus/list.php?tid=4'><span></span><em>培训系统</em></a></li>
  <li><a href="/plus/list.php?tid=5"><span></span><em>招商加盟 </em></a></li>
  <li><a href="/plus/list.php?tid=6"><span></span><em>家教传承 </em></a></li>
  <li><a href="/plus/list.php?tid=7"><span></span><em>关于我们 </em></a></li>
     </ul></div>
     </section>
  </div>
</div>
<section class="mobile_menu"><a class="back" onclick="history.go(-1)"></a><h1>培训系统</h1>
<div class="menu">
   <span id="menu"></span>
   <div class="menu_li">
   <div id="menu_left"></div>
    <ul>
     <li><a href="/"> 华夏夫人首页</a></li>

 <li><a href="/plus/list.php?tid=1"> 华夏夫人资讯 </a></li>

 <li><a href="/plus/list.php?tid=2"> 华夏夫人报名 </a></li>

 <li><a href="/plus/list.php?tid=3"> 投票注册 </a></li>
<li><a href='/plus/list.php?tid=4'>培训系统</a></li>
 <li><a href="/plus/list.php?tid=5"> 招商加盟 </a></li>

 <li><a href="/plus/list.php?tid=6"> 家教传承 </a></li>

 <li><a href="/plus/list.php?tid=7"> 关于我们 </a></li>


    <SPAN style="color:#fff;line-height: 28px">会员:</SPAN><a href="/member/index.php" class="userName" style="color:#fff;line-height: 28px">huaxia</a>   <a href="/member/index_do.php?fmdo=login&dopost=exit#" style="color:#fff;line-height: 28px">[退出]</a>
    </ul>
   </div>
</div>
</section>
</header>
<!--top is over-->
<div class="float">
        <div class="float_left">
          <a class="close4"></a>
          <a id="zxzx"></a>
          <a id="zxkf"></a>
          <a id="ewm"></a>
           <a href="#"></a>
        </div>
        <div class="float_right"><img src="/templets/default/img/zxkf1.png"></div>
  </div>
<div class="float_show2">
          <div class="zxzx_show zxzx_show2"><a href="http://wpa.qq.com/msgrd?v=3&uin=525853874&site=qq&menu=yes" class="pc" target="_blank"><img src="/templets/default/img/qq.png">&nbsp;&nbsp;在线咨询1</a>
           <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=1782904584&site=qq&menu=yes" class="pc"><img src="/templets/default/img/qq.png">&nbsp;&nbsp;在线咨询2</a>
           <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=298438649&site=qq&menu=yes" class="pc"><img src="/templets/default/img/qq.png">&nbsp;&nbsp;在线咨询3</a>
            <a href="mqqwpa://im/chat?chat_type=wpa&uin=525853874&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="/templets/default/img/qq.png">&nbsp;&nbsp;</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=1782904584&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="/templets/default/img/qq.png">&nbsp;&nbsp;</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=298438649&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="/templets/default/img/qq.png">&nbsp;&nbsp;</a>
          </div>
          <div class="zxkf_show zxzx_show">
          <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=1948523263&site=qq&menu=yes" class="pc"><img src="/templets/default/img/kf2.png">&nbsp;&nbsp;在线客服1</a>
            <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=166995179&site=qq&menu=yes" class="pc"><img src="/templets/default/img/kf2.png">&nbsp;&nbsp;在线客服2</a>
           <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=428584346&site=qq&menu=yes" class="pc"><img src="/templets/default/img/kf2.png">&nbsp;&nbsp;在线客服3</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=1948523263&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="/templets/default/img/kf2.png">&nbsp;&nbsp;</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=166995179&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="/templets/default/img/kf2.png">&nbsp;&nbsp;</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=428584346&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="/templets/default/img/kf2.png">&nbsp;&nbsp;</a>
          </div>
          <div class="ewm_show"><img src="/templets/default/img/code.png"></div>
 </div>
  <script type="text/javascript">
$(document).ready(function(){
  $(".float_right").click(function(){
  $(".float_left").toggle();
   $(".float_right").css("display","none");
    $(".zxzx_show2,.zxkf_show,.ewm_show").css("display","none");
  });
   $(".close4").click(function(){
$(".float_right").toggle();
   $(".float_left").css("display","none");
   $(".zxzx_show2,.zxkf_show,.ewm_show").css("display","none");
   })
 $("#zxzx").click(function(){
$(".zxzx_show2").toggle();
   $(".zxkf_show,.ewm_show").css("display","none");
   })
 $("#zxkf").click(function(){
$(".zxkf_show").toggle();
   $(".zxzx_show2,.ewm_show").css("display","none");
   })
 $("#ewm").click(function(){
$(".ewm_show").toggle();
   $(".zxzx_show2,.zxkf_show").css("display","none");
   })
});
</script>

<style type="text/css">
.grzx{overflow: hidden;margin:25px auto;width: 50%;}
.grzx p{font-size: 24px;text-align: center}
.grzx p span{display: inline-block;*zoom:1;*display: block;color:#d72625;font-size: 30px;margin:0 20px;}
.grzx a{display: block;margin:40px auto;width:120px;color:#fff;text-align: center;background-color:#d72625;height:40px;line-height: 40px;border-radius: 30px;font-size: 24px; }
.grzx_banner img{width:100%;}
a,a:hover{text-decoration:none;}
</style>
 <div class="grzx">
<p>欢迎您：<span><?php echo $cfg_ml->M_UserName?></span>用户</p>
<a href="/plus/list.php?tid=3">去投票</a>
<a href="/a/zxbm/">去报名</a>
</div>
<div class="return">
  <div class="return_show">
  <h2><img src="/templets/default/img/hzd.png"></h2>
  <table><tbody>
<tr><td>姓名</td>
<td>编号</td>
<td>下单日期</td>
<td>订单号</td>
<td>课程</td>
<td>课时</td>
<td>导师</td>
<td>客服电话</td>
<td>订单状态</td></tr>

<?php
require_once(DEDEINC."/memberlogin.class.php");
  $member = new MemberLogin();
  $id = $member->M_ID;
if($id!=''){

$dsql->SetQuery("select a.uname,b.id,b.time_stamp,b.out_trade_no,b.vote_name,b.lesson,b.teacher,b.phone,b.trade_status from dede_member as a right join dede_pay
as b on a.mid=b.uid where b.uid=$id");
$dsql->Execute();

while($row=$dsql->GetObject())
{

if($row->trade_status==0){
$status="未付款";

}else{
$status = "已完成";

}

echo "
<tr><td>$row->uname</td>
    <td>$row->id</td>
    <td>$row->time_stamp</td>
    <td>$row->out_trade_no</td>
    <td>$row->vote_name</td>
    <td>$row->lesson</td>
    <td>$row->teacher</td>
    <td>$row->phone</td>
    <td>$status</td>";

    }


}else{

    


    }





?>
</tr>

  </tbody></table>
    <div><!--<button class="dayin">打印回执单</button>--><button class="closedy">关闭</button></div>
  </div>
</div>
<style>
@media screen and (min-width: 768px)and (max-width: 1023px) {.return_show>div{width:40%!important;}
}
@media screen and (max-width: 767px){.return_show>div{width:80%!important;}.return_show td{font-size: 12px!important}
.grzx{width:72%!important;}
.grzx p span,.grzx p{font-size: 14px!important}
.grzx a{font-size: 16px!important;height: 25px!important;line-height: 25px!important;width: 82px!important;margin:17px auto!important;}

}
.return h2{width:30%;margin:0 auto;text-align: center}
.return h2 img{max-width: 100%}
.return_show{max-width:1200px;width:100%;padding:20px 0;border:2px solid #a52728;border-radius: 10px;background:url(/templets/default/img/giftbg.png)0 0 no-repeat;background-color:#fff;background-size:cover;margin:20px auto;overflow: hidden;}
.return_show p{width:46%;display: inline-block;*display: block;*zoom:1;padding:0 1.5%;line-height: 2em;}
.return_show p i{display: inline-block;*display: block;*zoom:1;font-size: 18px;width:30%;}
.return_show p span{display: inline-block;*display: block;*zoom:1;font-size: 18px;width:70%;}
.return_show>div{margin:20px auto;overflow: hidden;width:30%;text-align: center}
.return_show>div button{width:35%;display:inline;margin-left:3%;border-radius:10px;cursor: pointer;font-size: 18px;padding:2.5% 1.5%;overflow: hidden;}
.return_show>div button.dayin{color:#fff;background:#ca2626;border:1px solid #ca2626;}
.return_show>div button.closedy{border:1px solid #c9c9c9;color:#000;background:#fff;}
.return_show table{width:100%;margin:20px 0;}
.return_show table td{font-size: 18px;padding:1%;text-align: center;border:1px solid #e0e0e0;}
</style>
<section class="infoot">
<footer>
   <nav class="foot_menu">
   <ul>
   <li><a href="/" rel="nofollow">华夏夫人首页</a></li>

 <li><a href="/plus/list.php?tid=1" rel="nofollow"> 华夏夫人资讯 </a></li>

 <li><a href="/plus/list.php?tid=2" rel="nofollow"> 华夏夫人报名 </a></li>

 <li><a href="/plus/list.php?tid=3" rel="nofollow"> 投票注册 </a></li>

 <li><a href="/plus/list.php?tid=4" rel="nofollow"> 培训系统 </a></li>

 <li><a href="/plus/list.php?tid=5" rel="nofollow"> 招商加盟 </a></li>

 <li><a href="/plus/list.php?tid=6" rel="nofollow"> 家教传承 </a></li>

 <li><a href="/plus/list.php?tid=7" rel="nofollow"> 关于我们 </a></li>
<li><a href="/data/sitemap.html" rel="nofollow">网站地图</a></li>
   </ul>
   </nav>
<div class="clear"></div>
<div class="footdec">
<div class="footdec_left">
  <a hef="/"><img src="/templets/default/img/flogo.png" alt="华夏夫人官网尾部logo"></a>
</div>
<div class="footdec_right">
    <p>华夏夫人通过组委海选、<a href="/" rel="nofollow">华夏夫人参选</a>、<a href="/" rel="nofollow">华夏夫人赛事</a>、<a href="/" rel="nofollow">华夏夫人培训</a>、华夏夫人丝路巡演等活动，呈现华夏夫人贤德、淑良、智慧、多元的上善若水的家教品质、弘扬中华传统文化的上善文明。</p>
    <p>联系电话：<a href="tel:400-7788859">400-7788859</a></p>
    <p>地址：深圳福田区上梅林卓越城1期1栋1103室</p>
     <p>版权所有：深圳市雅媛堂文化传播有限公司
&nbsp;&nbsp;<a href="http://www.leixunkj.com/">技术支持：深圳市雷讯时代科技有限公司</a></p><p>备案号：<a href="http://www.miitbeian.gov.cn/">粤ICP备15104335号</a></p>
</div>
</div>
</footer>
<!--内页头部部分-->
<script>

 $(function(){

var nav=$(".menu_nav"); //得到导航对象

var win=$(window); //得到窗口对象

var sc=$(document);//得到document文档对象。

win.scroll(function(){

  if(sc.scrollTop()>=48){

    nav.addClass("fixednav");

   $(".top_tel_top").fadeIn();

  }else{

   nav.removeClass("fixednav");

  }
})
 })
</script>
<script src="/templets/default/js/menu.js"></script>
<script src="/templets/default/js/lk.js"></script>
</body>
</html>