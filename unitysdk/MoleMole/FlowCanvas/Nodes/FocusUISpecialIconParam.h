#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_ISVALID_OFFSET UNITYSDK_OFFSET(0x539F60)
#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8683F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int FocusUISpecialIconParam_TypeDefinitionIndex = 70559;

	struct alignas(8) FocusUISpecialIconParam
	{
		static ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam* StaticGet_Default()
		{
			return (::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam*)Il2CppClass::FromTypeDefinitionIndex(FocusUISpecialIconParam_TypeDefinitionIndex)->GetStaticField(0x3A480);
		}
		::System::String* IconParam; // 0x10
		::System::String* IconAffixParam; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM__CCTOR_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_ISVALID_OFFSET))(this);
		}
	};
}
