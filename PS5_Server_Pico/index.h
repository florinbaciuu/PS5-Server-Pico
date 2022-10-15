static const char indexData[] PROGMEM = R"==(

<html>

<head>
    <title>PS5 Kernel Exploit (3.xx-4.xx)</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <style>
        .loader {
            position: absolute;
            left: 50%;
            top: 50%;
            margin: -75px 0 0 -75px;

            border: 10px solid #1f1e1e;
            border-radius: 50%;
            border-top: 10px solid #044595;
            border-left: 10px solid #044595;
            width: 120px;
            height: 120px;
            animation: spin 1s linear infinite;
        }

        @keyframes spin {
            0% {
                transform: rotate(0deg);
            }

            100% {
                transform: rotate(360deg);
            }
        }

        .info {
            overflow: hidden;
            position: fixed;
            position: absolute;
            top: 50%;
            left: 50%;

            font-size: 45px;
            font-family: sans-serif;
            color: #b8b8b8;

            transform: translate(-50%, -50%);
        }

        .j {
            font-size: 15px;
            color: #2F3335;
        }

        .log {
            display: block;
            unicode-bidi: embed;
            font-family: monospace;
            white-space: pre;
            font-size: 18px;
            width: 100%;
            height: 80%;
        }
    </style>
    <script>
        function allset() {
            document.getElementById("loader").style.display = "none";
        }
    </script>
    <script defer src="int64.js"></script>
    <script defer src="rop.js"></script>
    <script defer src="exploit.js"></script>
</head>

</html>

<body onload="setTimeout(poc, 1500);">

    <div id="loader" class="loader"></div>

    <textarea id="console" class="log"></textarea>

    <center>
        <h3>
            <b>v1.02.</b>
            <br />
            <a href="https://twitter.com/theflow0">@theflow0</a>, 
            <a href="https://twitter.com/SpecterDev">@SpecterDev</a>, 
            ChendoChap, 
            <a href="https://twitter.com/Znullptr">@Znullptr</a>, 
            <a href="https://twitter.com/sleirsgoevy">@sleirsgoevy</a>, 
            <br />
            <a href="https://twitter.com/psxdev">@psxdev</a>, 
            <a href="https://twitter.com/flat_z">@flat_z</a>, 
            <a href="https://twitter.com/notzecoxao">@notzecoxao</a>, 
            <a href="https://twitter.com/SocraticBliss">@SocraticBliss</a>, 
            laureeeeeee
        </h3>
    </center>

</body>
<script>

</script>


)==";


// https://github.com/ChendoChap/PS5-IPV6-Kernel-Exploit/blob/wip_branch/document/en/ps5/index.html