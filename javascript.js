//fairy-fruit.github.io/Mindboys


function updateWebsite(){

	fetch("https://api.github.com/users/fairy-fruit")
	.then((resp) => resp.json())
	.then(function(data){
		let ff = data;

		document.getElementById("logoLink").href=ff.html_url;
		document.getElementById("logo").src=ff.avatar_url;
		document.getElementById("favicon").href=ff.avatar_url;
	})
	.catch(function(error){
		console.log(error);
	});

}

function updateMobileNavBar(){
	let a = document.getElementById("mobileNavBar").childNodes[0].getElementsByTagName("a");

	for(i = 0; i < a.length; i++){
		a[i].style.width = 100/a.length + "%";
	}
}

updateWebsite();
