#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UISoftMask { class GraphicConnector; }
namespace System { template <typename T> class Comparison_1; }

#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__ADDCONNECTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B4774C0)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B477480)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4774B0)

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int GraphicConnector___c_TypeDefinitionIndex = 83196;

	class GraphicConnector___c : public ::System::Object
	{
	public:
		static ::Coffee::UISoftMask::GraphicConnector___c** StaticGet___9()
		{
			return (::Coffee::UISoftMask::GraphicConnector___c**)Il2CppClass::FromTypeDefinitionIndex(GraphicConnector___c_TypeDefinitionIndex)->GetStaticField(0x480B0);
		}
		static ::System::Comparison_1<::Coffee::UISoftMask::GraphicConnector*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::Coffee::UISoftMask::GraphicConnector*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicConnector___c_TypeDefinitionIndex)->GetStaticField(0x480B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddConnector_b__4_0(::Coffee::UISoftMask::GraphicConnector* x, ::Coffee::UISoftMask::GraphicConnector* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Coffee::UISoftMask::GraphicConnector*, ::Coffee::UISoftMask::GraphicConnector*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__ADDCONNECTOR_B__4_0_OFFSET))(this, x, y);
		}
	};
}
