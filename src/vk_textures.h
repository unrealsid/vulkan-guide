#pragma once

#include <vk_types.h>

class VulkanEngine;

struct Texture 
{
	AllocatedImage image;
	VkImageView imageView;
};

namespace vkutil 
{
	bool load_image_from_file(VulkanEngine* engine, const char* file, AllocatedImage& outImage);
}