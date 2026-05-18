function openPage(pageName,elmnt,color) {
  var i, tabcontent, tablinks;
  tabcontent = document.getElementsByClassName("tabcontent");
  for (i = 0; i < tabcontent.length; i++) {
    tabcontent[i].style.display = "none";
  }
  tablinks = document.getElementsByClassName("tablink");
  for (i = 0; i < tablinks.length; i++) {
    tablinks[i].style.backgroundColor = "";
  }
  document.getElementById(pageName).style.display = "block";
  elmnt.style.backgroundColor = color;
}

// Get the element with id="defaultOpen" and click on it
document.getElementById("defaultOpen").click();



//HOME JS
var map = L.map('map').setView([39.9532194131904, -75.1964902089597],16);

L.tileLayer('https://tile.openstreetmap.org/{z}/{x}/{y}.png', {
    maxZoom: 19,
    attribution: '&copy; <a href="http://www.openstreetmap.org/copyright">OpenStreetMap</a>'
}).addTo(map);


var marker2 = L.marker([39.955196536601655, -75.20214463783421]).addTo(map);

marker2.bindPopup("<b>Venture Labs</b><br>Tuesday 1:30-5:00 PM.").openPopup();

var marker3 = L.marker([39.950480909463145, -75.18928207020457]).addTo(map);

marker3.bindPopup("<b>Education Commons</b><br>Wednesday 3:30-5:00 PM.").openPopup();

var marker4 = L.marker([39.95177441284185, -75.19265623414645]).addTo(map);

marker4.bindPopup("<b>Common Press</b><br>Thursday 10:00 AM- 12:00 PM.").openPopup();

var marker1 = L.marker([39.95274775646323, -75.19367790928924], {color: 'red'}).addTo(map);

marker1.bindPopup("<b>Van-Pelt Library</b><br>Tuesday 9AM Check-In 6th floor<br>10:45AM Vitale II 623.").openPopup();