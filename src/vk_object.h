#pragma once
#include <vulkan/vulkan.h>
#include "vk_mesh.h"
#include <glm/glm.hpp>

struct Material 
{
	VkPipeline pipeline;
	VkPipelineLayout pipelineLayout;
};

struct RenderObject 
{
	Mesh* mesh;

	Material* material;

	glm::mat4 transformMatrix;
};