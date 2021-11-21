#pragma once

//add the include for glm to get matrices
#include <glm/glm.hpp>

struct MeshPushConstants 
{
	glm::vec4 data;
	glm::mat4 render_matrix;
};