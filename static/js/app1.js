$(document).ready(function(){ 
  $('#App1Menu').addClass('show');
  $('#EASER').addClass('active');
});

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

const konf_WRG = document.getElementById('id_konf_WRG')
const Anz_WRG = document.getElementById('Anzahl_WRG')

const konf_HK= document.getElementById('id_konf_HK')
const Anz_HK = document.getElementById('Anzahl_HK')

konf_WRG.addEventListener('change', (event) => {
  if (event.target.checked) {
    $(Anz_WRG).show();
    console.log('checked')
  } else {
    $(Anz_WRG).hide();
    console.log('not checked')
  }
})

konf_HK.addEventListener('change', (event) => {
  if (event.target.checked) {
    $(Anz_HK).show();
    console.log('checked')
  } else {
    $(Anz_HK).hide();
    console.log('not checked')
  }
})