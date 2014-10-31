(function ($) {
  $(document).ready(function() {
    $("#drupinas_slider").owlCarousel({
 
      navigation : true, // Show next and prev buttons
      slideSpeed : 200,
      paginationSpeed : 200,
      singleItem:true,
      navigationText: ["<i class='fa fa-angle-left fa-5x'></i>","<i class='fa fa-angle-right fa-5x'></i>"],
      autoPlay: true
 
    });
  });
}(jQuery));