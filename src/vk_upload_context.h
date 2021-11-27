#pragma once

#include <vulkan/vulkan.h>

struct UploadContext 
{
	VkFence _uploadFence;
	VkCommandPool _commandPool;
};