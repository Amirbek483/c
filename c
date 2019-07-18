<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>todolist</title>
</head>
<body>
<style>
    .a {
        width: 300px;
        height: 40px;
        font-size: 35px;
        background-color: purple;
    }
    .c{display: flex; width: 100%; align-content: center;}
</style>
<div style="display: flex; width: 100%; align-content: center;">
<input class="a" id="o1">
<div onclick="risovat('')"; onclick="d()" style="width: 50px; height: 50px;">
    <img style="width: 50px; height: 50px"src="../../../../../avenger/avenger/untitled13/images (2).png">
</div>
</div>
<br>
<div id="render"></div>

</body>
<script>
    var list = [];
    function risovat() {
        list.push(document.getElementById('o1').value);
        render()
        document.getElementById('o1').innerHTML = " "
    }
    function render() {
        document.getElementById('render').innerHTML=''
        for(var i=0;i<list.length;i++){
            var e = document.createElement('div')
            e.className='c'
            e.innerHTML = '<div class="a" style="">'+list[i]+'</div>' +
                '    <div onclick="(\'\')" style="width: 50px; height: 50px;">' +
                '        <img style="width: 40px; height: 40px" src="../../../Desktop/w448h5121380477116trash.png"/>' +
                '    </div>'
            document.getElementById('render').appendChild(e)
        }
    }
</script>
</html>
