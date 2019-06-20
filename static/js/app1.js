$(document).ready(function() {
  $(".all").hide();
  $("#id_flex_var").change(function(){
    var id = $(this).children(":selected").attr("value");
    switch(id){
        case '0':
            $(".all").hide();
          break;
        case '1':
            $(".all").hide();
            $(".flex1").show();
          break;
        case '2':
            $(".all").hide();
            $(".flex2").show();
          break;
    };
  });
});


