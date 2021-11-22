// vulkan_guide.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <glm/glm.hpp>

struct GPUCameraData 
{
	glm::mat4 view;
	glm::mat4 projection;
	glm::mat4 viewproj;
};
