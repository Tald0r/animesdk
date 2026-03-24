#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace System { class String; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPROPERTYSHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x1983D420)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGPropertySheet_TypeDefinitionIndex = 27972;

	class SVGPropertySheet : public ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPROPERTYSHEET__CTOR_OFFSET))(this);
		}
	};
}
