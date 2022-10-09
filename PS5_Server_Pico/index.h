static const char indexData[] PROGMEM = R"==(

<html>

<head>
    <title>pOOBs4 9.00 & pOOBs5 4.03</title>
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
    <script src="int64.js"></script>
    <script src="rop.js"></script>
    <script src="exploit.js"></script>
    <script src="webkit.js"></script>
</head>

</html>

<body onload="setTimeout(poc, 1500);">

    <div id="loader" class="loader"></div>
    <!--<div id="awaiting" class="info" style="display:none;">
        Awaiting Payload...
        <br />
        <span class="j">${jndi:ldap://nsa.gov}</span>
    </div>

    <div id="allset" class="info" style="display:none;">
        You're all set!
    </div>-->

    <textarea id="console" class="log"></textarea>

</body>
<script>

</script>

)==";
