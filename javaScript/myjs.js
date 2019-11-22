function myChange()
{
    var type = document.querySelector('#in1').type;
    if(type == "password")
    {
        document.querySelector('#in1').type = "text";
        document.querySelector('button').innerHTML = "hide";
    }
    else
    {
        document.querySelector('#in1').type = "password";
        document.querySelector('button').innerHTML = "view";
    }

}