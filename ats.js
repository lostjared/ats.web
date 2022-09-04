var ats_obj;

var Module = {
    onRuntimeInitialized: function() {
        ats_obj = new Module.ATS();
    }
};

var input = document.getElementById("text1");
input.addEventListener("keypress", function(event) {
    if (event.key === "Enter") {
        event.preventDefault();
        Lex();
    }
});

function Lex() {
    var text1 = document.getElementById("text1");
    var output = ats_obj.scanATS(text1.value);
    var divtag = document.getElementById("div2");
    divtag.innerHTML = output;
    text1.value = "";
}
