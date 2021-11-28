
# Add source to this project's executable.
add_executable(vulkan_guide
    main.cpp
    vk_engine.cpp
    vk_engine.h
    vk_types.h
    vk_initializers.cpp
    vk_initializers.h, 
    deletion_queue.h, 
    vk_frame.h,
    vk_gpu_object_data.h,
    vk_gpu_object_data.cpp,
    vk_gpu_object_data.h
    vk_object.h, 
    vk_pipeline.cpp, 
    vk_pipeline.h,  
    vk_push_constants.cpp, 
    vk_push_constants.h, 
    vk_scene_data.h, 
    vk_textures.cpp, 
    vk_textures.h, 
    vk_types.h, 
    vk_upload_context.h)


set_property(TARGET vulkan_guide PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "$<TARGET_FILE_DIR:vulkan_guide>")

target_include_directories(vulkan_guide PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(vulkan_guide vkbootstrap vma glm tinyobjloader imgui stb_image)

target_link_libraries(vulkan_guide Vulkan::Vulkan sdl2)

add_dependencies(vulkan_guide Shaders)