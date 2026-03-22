#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int VertexStretchDirectionType_TypeDefinitionIndex = 39659;

	enum class VertexStretchDirectionType : ::System::Byte
	{
		Center = 0x1,
		Uniform = 0x0,
		Point = 0x2,
		Local = 0x3,
	};
}
