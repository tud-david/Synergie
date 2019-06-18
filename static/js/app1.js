
$(document).ready(function(){ 
  $('#App1Menu').addClass('show');
});

$(document).ready(function() {
    $(".all").hide();
    $("#FlexOptions").change(function(){
        var id = $(this).children(":selected").attr("id");
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



