(function ($) {
  $(document).ready(function() {

    //For the slider
    $("#drupinas_slider").owlCarousel({
      navigation : true,
      slideSpeed : 200,
      paginationSpeed : 200,
      singleItem:true,
      navigationText: ["<i class='fa fa-angle-left fa-5x'></i>","<i class='fa fa-angle-right fa-5x'></i>"],
      autoPlay: true
    });

    //For hiding collapse bootstrap menu after link click
    $(".navigation-container li a, .navigation-container-inner-pages li a").click(function(event) {
      $("#navbarCollapse").removeClass("in").addClass("collapse");
    });

    //For hiding the upper menu when viewport hits 30%
    $('html, body').waypoint(function(direction) {
      if (direction == 'down') {
        $('.top-menus').slideUp();
        $('header.navigation-container').addClass('faded');
      }else{
        $('.top-menus').slideDown();
        $('header.navigation-container').removeClass('faded');
      }
    }, { offset: '-30%' });


    //Adding active class to clicked menu items
    $(".navigation-container li a").click(function() {
      $(this).addClass("active");
      $('.navigation-container li a').not(this).each(function(){
        $(this).removeClass('active');
      });
    });


    //For waypoints
    slide = $('.waypoints-container section');
    first_waypoint = $(".waypoints-container section:first-child").attr('id');

    slide.waypoint(function (direction) {
      dataslide = $(this).attr('id');
      last_slide = $( "section#" + dataslide ).prev().attr('id');
      if (direction === 'down') {
        $('.navigation-container li a[href="#' + dataslide + '"]').addClass('active');
        if (last_slide) {
          $('.navigation-container li a[href="#' + last_slide + '"]').removeClass('active');
        }
        if (dataslide == first_waypoint) {
          $(".click-to-top").slideToggle();
        }

      } else {
        $('.navigation-container li a[href="#' + dataslide + '"]').removeClass('active');
        if (last_slide) {
          $('.navigation-container li a[href="#' + last_slide + '"]').addClass('active');
        }
        if (dataslide == first_waypoint) {
          $(".click-to-top").slideToggle();
        }

      }
    });

  });
}(jQuery));