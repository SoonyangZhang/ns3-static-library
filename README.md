# ns3-static-library
Link static libray in ns3 simulator.  

The example static lib is foo.
Add the library path info Absolute-path-to-LIBDIR.  
mp3.env.append_value("CXXFLAGS", "-I/Absolute-path-to-LIBDIR/")  
mp3.env.append_value("LINKFLAGS", ["-L/Absolute-path-to-LIBDIR/"])  


