#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7581AC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7581B00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER___C__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x7581B10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowPopWindowServer___c_TypeDefinitionIndex = 53405;

	class LDShowPopWindowServer___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LDShowPopWindowServer___c_TypeDefinitionIndex)->GetStaticField(0x41900);
		}
		static ::MoleMole::FlowCanvas::Nodes::LDShowPopWindowServer___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDShowPopWindowServer___c**)Il2CppClass::FromTypeDefinitionIndex(LDShowPopWindowServer___c_TypeDefinitionIndex)->GetStaticField(0x41908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER___C__REGISTERPORTS_B__3_1_OFFSET))(this);
		}
	};
}
