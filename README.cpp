# Button-color-changing-randomly-on-loop
Here is two ways to change colors automatically in loop.
First is Math.floor() method here this function will pickup random colors.
And Second Method is array, in array we can give colors name/code list in form of array ,which we want.


<button type="button" id="background">i am Chameleons</button>

<script type="text/javascript">    

	var i = 0;
	function change() {
		var doc = document.getElementById("background");
		var randomColor = Math.floor(Math.random() * 16777215).toString(16);
		var color = "#" + randomColor;
		doc.style.backgroundColor = color;
	}
setInterval(change, 1000);

//<----------------------- Or if you want to use array then you can do like this----------------> 

	var i = 0;
	function change() {
		var doc = document.getElementById("background");
		var color = ['red','green','yellow'];
		doc.style.backgroundColor = color[i];
		i = (i + 1) % color.length;
	}
setInterval(change, 1000);

</script>
