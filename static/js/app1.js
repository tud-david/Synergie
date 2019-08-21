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
            // $("#komponenten").hide();         
          break;

        case '1': //Bivalenz
            $(".all").hide();
            $(".flex2").show();

            $("#komponenten").show();
            $("#komponenten").children().show();

            $("#div_id_hk").hide();
            $("#div_id_bhkw").hide();
            $("#div_id_pufferspeicher").hide();

            

          break;
        case '2': // Eigenerzeugungs
            // $("#komponenten").show();
            $(".all").hide();
            $(".flex1").show();

            $("#komponenten").show();
            $("#komponenten").children().show();

            $("#div_id_ek").hide();
          break;
    };
  });  
});

const konf_WRG = document.getElementById('id_konf_WRG')
const Anz_WRG = document.getElementById('Anzahl_WRG')

const konf_HK= document.getElementById('id_konf_HK')
const Anz_HK = document.getElementById('Anzahl_HK')
const upload_HK = document.getElementById('div_id_hk')

const konf_BHKW = document.getElementById('bhkw')
const upload_bhkw = document.getElementById('div_id_bhkw')

const konf_Pufferspeicher = document.getElementById('pufferspeicher')
const upload_Pufferspeicher = document.getElementById('div_id_pufferspeicher')



konf_BHKW.addEventListener('change', (event) => {
  if (event.target.checked) {
    $(upload_bhkw).show();
    console.log('checked')
  } else {
    $(upload_bhkw).hide();
    console.log('not checked')
  }
})

konf_Pufferspeicher.addEventListener('change', (event) => {
  if (event.target.checked) {
    $(upload_Pufferspeicher).show();
    console.log('checked')
  } else {
    $(upload_Pufferspeicher).hide();
    console.log('not checked')
  }
})


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
    $(upload_HK).show();
    console.log('checked')
  } else {
    $(Anz_HK).hide();
    $(upload_HK).hide();
    console.log('not checked')
  }
})