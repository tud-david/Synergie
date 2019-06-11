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

$(document).ready(function() {
    $('#warten').click(function() {
        $.blockUI({
          message: 'Loading Next Project',
          css: {
            border: 'none',
            padding: '15px',
            backgroundColor: '#000',
            '-webkit-border-radius': '10px',
            '-moz-border-radius': '10px',
            opacity: '.5',
            color: '#fff',
          	fontSize: '18px',
            fontFamily: 'Verdana,Arial',
          	fontWeight: 200,
        } });

        setTimeout($.unblockUI, 2000);
    });
});



