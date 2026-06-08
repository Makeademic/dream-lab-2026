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

/*Venture Labs*/

var pinkIcon = L.icon({
    iconUrl: 'https://makeademic.github.io/dream-lab-2026/laser-cutter-pink.png',
    shadowUrl: 'https://makeademic.github.io/dream-lab-2026/laser-cutter-shadow.png',

    iconSize:     [50, 50], // size of the icon
    shadowSize:   [60, 60], // size of the shadow
    iconAnchor:   [0, 0], // point of the icon which will correspond to marker's location
    shadowAnchor: [-20, 0],  // the same for the shadow
    popupAnchor:  [20, -20] // point from which the popup should open relative to the iconAnchor
});

var marker2 = L.marker([39.955196536601655, -75.20214463783421], {icon: pinkIcon}).addTo(map);

marker2.bindPopup("<em>Laser Cutting</em><br><b>Venture Labs</b><br>Tuesday 1:30 - 5:00 PM.").openPopup();

/*Education Commons*/

var blueIcon = L.icon({
    iconUrl: 'https://makeademic.github.io/dream-lab-2026/3d-printer-blue.png',
    shadowUrl: 'https://makeademic.github.io/dream-lab-2026/3d-printer-shadow.png',

    iconSize:     [50, 50], // size of the icon
    shadowSize:   [60, 60], // size of the shadow
    iconAnchor:   [0, 0], // point of the icon which will correspond to marker's location
    shadowAnchor: [-20, 0],  // the same for the shadow
    popupAnchor:  [20, -20] // point from which the popup should open relative to the iconAnchor
});


var marker3 = L.marker([39.950480909463145, -75.18928207020457], {icon: blueIcon}).addTo(map);

marker3.bindPopup("<em>3D Printing</em><br><b>Education Commons</b><br>Wednesday 3:30 - 5:00 PM.").openPopup();

/*Common Press*/

var cyanIcon = L.icon({
    iconUrl: 'https://makeademic.github.io/dream-lab-2026/printing-press-cyan.png',
    shadowUrl: 'https://makeademic.github.io/dream-lab-2026/printing-press-shadow.png',

    iconSize:     [50, 50], // size of the icon
    shadowSize:   [60, 60], // size of the shadow
    iconAnchor:   [0, 0], // point of the icon which will correspond to marker's location
    shadowAnchor: [-20, 0],  // the same for the shadow
    popupAnchor:  [20, -20] // point from which the popup should open relative to the iconAnchor
});

var marker4 = L.marker([39.95177441284185, -75.19265623414645], {icon: cyanIcon}).addTo(map);

marker4.bindPopup("<em>Letterpress Printing</em><br><b>Common Press</b><br>Thursday 10:00 AM - 5:00 PM.").openPopup();

/*Price Lab*/

var greenIcon = L.icon({
    iconUrl: 'https://makeademic.github.io/dream-lab-2026/screen-printing-green.png',
    shadowUrl: 'https://makeademic.github.io/dream-lab-2026/screen-printing-shadow.png',

    iconSize:     [50, 50], // size of the icon
    shadowSize:   [60, 60], // size of the shadow
    iconAnchor:   [0, 0], // point of the icon which will correspond to marker's location
    shadowAnchor: [-20, 0],  // the same for the shadow
    popupAnchor:  [20, -20] // point from which the popup should open relative to the iconAnchor
});

var marker5 = L.marker([39.95090025308453, -75.19503272901319], {icon: greenIcon}).addTo(map);

marker5.bindPopup("<em>Screen Printing</em><br><b>Price Lab for Digital Humanities</b><br>Friday 10:00 AM - 12:00 PM.").openPopup();

/*Van-Pelt*/

//put marker you want showing up first last in your code

var orangeIcon = L.icon({
    iconUrl: 'https://makeademic.github.io/dream-lab-2026/3d-scanner-orange.png',
    shadowUrl: 'https://makeademic.github.io/dream-lab-2026/3d-scanner-shadow.png',

    iconSize:     [50, 50], // size of the icon
    shadowSize:   [60, 60], // size of the shadow
    iconAnchor:   [0, 0], // point of the icon which will correspond to marker's location
    shadowAnchor: [-20, 0],  // the same for the shadow
    popupAnchor:  [20, -20] // point from which the popup should open relative to the iconAnchor
});

var marker1 = L.marker([39.95274775646323, -75.19367790928924], {icon: orangeIcon}).addTo(map);

marker1.bindPopup("<em>3D Scanning</em><br><b>Van-Pelt Library</b><br>Tuesday 9AM Check-In 6th floor<br>10:45AM Vitale II 623.").openPopup();
