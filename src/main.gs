[indent=4]

init: int
    Gst.init(ref args)
    var app = new Skipper
    return app.run(args)
