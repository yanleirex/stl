file(GLOB_RECURSE cpp_samples RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

foreach(filename ${cpp_samples})
    get_filename_component(target_name ${filename} NAME_WE)
    message(${filename})
    add_executable(io_${target_name} ${filename})
endforeach(filename)