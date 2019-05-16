function myFunction() {
	alert(Date());
}


function changeColor() {
  var inputValue = document.getElementById("textInput").value;
  
  document.getElementById("divContent").innerHTML = inputValue;
      
	  var selectedColor = document.getElementById("backgroundColor").value;
  
  document.getElementById("divContent").className = selectedColor;
	  }