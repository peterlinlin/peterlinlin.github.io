body {
  font-family: 'Lora', 'Helvetica Neue', Helvetica, Arial, sans-serif;
  position: relative;
  width: 100%;
  height: 100%;
  color: white;
  background-color: black;
}

html {
  width: 100%;
  height: 100%;
}

h1,
h2,
h3,
h4,
h5,
h6 {
  font-family: 'Cabin', 'Helvetica Neue', Helvetica, Arial, sans-serif;
  font-weight: 700;
  margin: 0 0 35px;
  letter-spacing: 1px;
  text-transform: uppercase;
}

p {
  font-size: 16px;
  line-height: 1.5;
  margin: 0 0 25px;
}

@media (min-width: 768px) {
  p {
    font-size: 18px;
    line-height: 1.6;
    margin: 0 0 35px;
  }
}

a {
  -webkit-transition: all 0.2s ease-in-out;
  -moz-transition: all 0.2s ease-in-out;
  transition: all 0.2s ease-in-out;
  color: #42DCA3;
}

a:focus, a:hover {
  text-decoration: none;
  color: #1d9b6c;
}

#mainNav {
  font-family: 'Cabin', 'Helvetica Neue', Helvetica, Arial, sans-serif;
  margin-bottom: 0;
  text-transform: uppercase;
  border-bottom: 1px solid rgba(255, 255, 255, 0.3);
  background-color: black;
}

#mainNav .navbar-toggler {
  font-size: 14px;
  padding: 11px;
  color: white;
  border: 1px solid white;
}

#mainNav .navbar-brand {
  font-weight: 700;
}

#mainNav a {
  color: white;
}

#mainNav .navbar-nav .nav-item {
  -webkit-transition: background 0.3s ease-in-out;
  -moz-transition: background 0.3s ease-in-out;
  transition: background 0.3s ease-in-out;
}

#mainNav .navbar-nav .nav-item:hover {
  color: fade(white, 80%);
  outline: none;
  background-color: black;
}

#mainNav .navbar-nav .nav-item:active, #mainNav .navbar-nav .nav-item:focus {
  outline: none;
  background-color: transparent;
}

@media (min-width: 992px) {
  #mainNav {
    padding-top: 20px;
    padding-bottom: 20px;
    -webkit-transition: background 0.3s ease-in-out, padding-top 0.3s ease-in-out, padding-bottom 0.3s;
    -moz-transition: background 0.3s ease-in-out, padding-top 0.3s ease-in-out, padding-bottom 0.3s;
    transition: background 0.3s ease-in-out, padding-top 0.3s ease-in-out, padding-bottom 0.3s;
    letter-spacing: 1px;
    border-bottom: none;
    background: transparent;
  }
  /*#mainNav.navbar-shrink {
    padding-top: 10px;
    padding-bottom: 10px;
    border-bottom: 1px solid rgba(255, 255, 255, 0.3);
    background: black;
  }*/
  #mainNav .nav-link.active {
    outline: none;
    background-color: rgba(255, 255, 255, 0.3);
  }
  #mainNav .nav-link.active:hover {
    color: white;
  }
}

/*--------------Mast head for main page--------------*/

.mastheadmain {
  display: table;
  width: 100%;
  height: 100%;
  padding: 200px 0;
  text-align: center;
  color: white;
  background: url("../img/the-15-coolest-cars-from-the-fast-and-furious-movies.png") no-repeat bottom center scroll;
  background-color: black;
  -webkit-background-size: cover;
  -moz-background-size: cover;
  -o-background-size: cover;
  background-size: cover;
}

.masthead .intro-body {
  display: table-cell;
  vertical-align: middle;
}

.masthead .intro-body .brand-heading {
  font-size: 50px;
}


.masthead .intro-body .intro-text {
  font-size: 18px;
}

.masthead .intro-body .intro-text {
  font-size: 18px;
}

@media (min-width: 768px) {
  .masthead {
    height: 100%;
    padding: 0;
  }
  .masthead .intro-body .brand-heading {
    font-size: 100px;
  }
  .masthead .intro-body .intro-text {
    font-size: 22px;
  }
}

/*--------------Mast head for Fast Five--------------*/
.masthead5 {
  display: table;
  width: 100%;
  font: 'Helvetica Neue'
  height: 100%;
  padding: 200px 0;
  text-align: center;
  color: white;
  background: url("../img/Fast_Five_image-52.jpg") no-repeat bottom center scroll;
  background-color: black;
  -webkit-background-size: cover;
  -moz-background-size: cover;
  -o-background-size: cover;
  background-size: cover;
}

.masthead5 .intro-body {
  display: table-cell;
  vertical-align: middle;
  background-color: (0, 0, 0, 0.6)
}

.masthead5 .intro-body .brand-heading {
  font-size: 70px;
}


.masthead5 .intro-body .intro-text {
  font-size: 18px;
}

.masthead5 .intro-body .intro-text {
  font-size: 18px;
}

@media (min-width: 768px) {
  .masthead {
    height: 100%;
    padding: 0;
  }
  .masthead .intro-body .brand-heading {
    font-size: 100px;
  }
  .masthead .intro-body .intro-text {
    font-size: 22px;
  }
}


.btn-circle {
  font-size: 26px;
  width: 55px;
  height: 55px;
  margin-top: 15px;
  line-height: 45px;
  -webkit-transition: background 0.3s ease-in-out;
  -moz-transition: background 0.3s ease-in-out;
  transition: background 0.3s ease-in-out;
  color: white;
  border: 2px solid white;
  border-radius: 100% !important;
  background: transparent;
}

.btn-circle:focus, .btn-circle:hover {
  color: white;
  outline: none;
  background: rgba(255, 255, 255, 0.1);
}

.content-section {
  padding-top: 150px;
  padding-bottom: 150px;
}

.download-section {
  color: white;
  background: url("../img/downloads-bg.jpg") no-repeat center center scroll;
  background-color: black;
  -webkit-background-size: cover;
  -moz-background-size: cover;
  -o-background-size: cover;
  background-size: cover;
}

#map {
  width: 100%;
  height: 300px;
}

@media (min-width: 992px) {
  .content-section {
    padding-top: 200px;
    padding-bottom: 200px;
  }
  #map {
    height: 350px;
  }
}

.btn {
  font-family: 'Cabin', 'Helvetica Neue', Helvetica, Arial, sans-serif;
  font-weight: 400;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  text-transform: uppercase;
  border-radius: 0;
}

.btn-default {
  color: #42DCA3;
  border: 1px solid #42DCA3;
  background-color: transparent;
}

.btn-default:focus, .btn-default:hover {
  color: black;
  border: 1px solid #42DCA3;
  outline: none;
  background-color: #42DCA3;
}

ul.banner-social-buttons {
  margin-top: 0;
}

@media (max-width: 1199px) {
  ul.banner-social-buttons {
    margin-top: 15px;
  }
}

@media (max-width: 767px) {
  ul.banner-social-buttons li {
    display: block;
    margin-bottom: 20px;
    padding: 0;
  }
  ul.banner-social-buttons li:last-child {
    margin-bottom: 0;
  }
}

footer {
  padding: 50px 0;
}

footer p {
  font-size: 14px;
  margin: 0;
}

::-moz-selection {
  background: #fcfcfc;
  background: rgba(255, 255, 255, 0.2);
  text-shadow: none;
}

::selection {
  background: #fcfcfc;
  background: rgba(255, 255, 255, 0.2);
  text-shadow: none;
}

img::selection {
  background: transparent;
}

img::-moz-selection {
  background: transparent;
}
