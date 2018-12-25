# ns3-static-library
Link static libray in ns3 simulator.  

The example static lib is foo.
Add the library path info Absolute-path-to-LIBDIR in mp3/wscript.  
mp3.env.append_value("CXXFLAGS", "-I/Absolute-path-to-LIBDIR/")  
mp3.env.append_value("LINKFLAGS", ["-L/Absolute-path-to-LIBDIR/"])  

And to make gcc can find the external header file, add the following to /etc/profile  
```
CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH:/Absolute-path-to-LIBDIR/  
export CPLUS_INCLUDE_PATH  
```

When building ns3, first input "source /etc/profile".  
And there is a blog about this. https://blog.csdn.net/u010643777/article/details/85017577  


