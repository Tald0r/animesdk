#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int VertexStretchDirectionType_TypeDefinitionIndex = 50829;

	enum class VertexStretchDirectionType : ::System::Byte
	{
		Uniform = 0x0,
		Local = 0x3,
		Center = 0x1,
		Point = 0x2,
	};
}
