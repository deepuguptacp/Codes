//button with id mybutton
let mybutton = document.getElementById("mybutton");

// div with id content
let content = document.getElementById("content");

// function getData(){
//     url = "deepu.txt";
//     fetch(url).then((response)=>{
//         return response.text();
//     }).then((data)=>{
//         console.log(data);
//     })
// }

function getData() {
  url = "https://api.github.com/users/2";
  fetch(url)
    .then((response) => {
      return response.json();
    })
    .then((data) => {
      console.log("Success", data);
    })
    .catch((error) => {
      console.log("ERROR:", error);
    });
}

getData();
// FOR POST DATA        problem in understanding this......
function postData() {
  url = "http://dummy.restapiexample.com/api/v1/create";
  data = '{"name":"Deepu Gupta","salary":"20000","age":"22"}'; // Q1 :- unidata or multi data posting?? ANS :- can be multi data
  params = {
    // using a for loop to convert the data in an array string as :
    method: "post", // Line 50 :-
    mode: "cors",
    headers: {
      "Content-type": "application/x-www-form-urlencoded", // Q2 :- when the content type is changed?? Line :- 59
    },
    body: data, // data is already a string hence no need to stringify using json.stringify(data)
  };
  fetch(url, params)
    .then((response) => {
      return response.json();
    })
    .then((data) => {
      console.log(data);
    });
}
postData();

/** ANS 1 :-
 *      const data = new data();
 *      const photos = document.querySelector('input[type="file"][multiple]');
 *      data.append('title', 'My Vegas Vacation');
 *      for (let i = 0; i < photos.files.length; i++) {
 *          data.append('photos', photos.files[i]);
 *      }
 */

/** ANS 2 :- for more description https://developer.mozilla.org/en-US/docs/Web/HTTP/Methods/POST
 * The encoding-type of a form is determined by the attribute enctype. It can have three values,
 * application/x-www-form-urlencoded - Represents a URL encoded form. This is the default value if enctype attribute is not set to anything.
 * multipart/form-data - Represents a Multipart form. This type of form is used when the user wants to upload files
 * text/plain - A new form type introduced in HTML5, that as the name suggests, simply sends the data without any encoding
 */

// syntax for update
// mediaKeySession.update(response).then(function() { ... });
